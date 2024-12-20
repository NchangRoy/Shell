#include "information.h"
#include "ui_information.h"
#include"QString"



Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
}

Information::~Information()
{
    delete ui;
}



void Information::drawgantt(std::vector<Process *> result)
{   //
    /*if(algorithm_id==1||algorithm_id==2||algorithm_id==4){
        int x=ui->gantt->x()+ui->gantt->width()+50,y;
        y=ui->gantt->y();
        int height=50;
        //  for(int i=0;i<PM->nbprocess;i++){
        int gant_size=600;
        int proportion=255/result.size();
        int time_count=0;
        int total_time=0;
        //calculate  the sum of all burst times
        for(int i=0;i<result.size();i++){
            total_time+=result.at(i)->burst_time;
        }

        //print gantt chart
        for(int i=0;i<result.size();i++){

            time_count+=result.at(i)->burst_time;
            QLabel *label=new QLabel(this);
            int width=(result.at(i)->burst_time*gant_size)/total_time;
            qDebug()<<"the width is "<<width;
            label->setGeometry(QRect(x,y,width,height));
            label->setStyleSheet("background-color:rgb(0,"+QString::number((i+1)*proportion)+","+QString::number((i+1)*proportion)+")");
            label->show();
            x+=width;

            //display time

            QLabel *time_label=new QLabel(this);
            time_label->setText(QString::number(time_count));
            time_label->setGeometry(QRect(x,y+height+10,20,20));
            time_label->show();
            //display process id
            QLabel *process_id=new QLabel(this);
            process_id->setText("p"+QString::number(result.at(i)->process_id));
            process_id->setGeometry(QRect(x,y-30,20,20));
            process_id->show();
        }
    }*/

        //create array containing vector process times
        //we will do this dynamically during run time
        Process *current=nullptr;
        PM->initialise();
        int total_tim=0;
        //first get total burst time
        for(int i=0;i<result.size();i++){
            total_tim+=result.at(i)->burst_time;
        }
        int increase_width_by=600/total_tim;
        int executed_time=0;
        int proportion=255/(PM->nbprocess+1);

        int width=increase_width_by;
        int height=50;
        int i=0;
        QLabel *newlabel;
        QString colors[PM->nbprocess];
        int base_color=proportion;
        for(int i=0;i<result.size();i++){
            colors[i]=QString::number(base_color);
            base_color+=proportion;
        }

        while(PM->ZombieProcess.size()!=PM->nbprocess){
            if(algorithm_id==3){
            PM->Round_Robin(&executed_time,PM->default_quant);
            }else if(algorithm_id==1){
                PM->FCFS();
            }
            else if(algorithm_id==2){
                PM->SJF();
            }
            else{
                PM->Priority_Scheduling();
            }
            if(PM->ReadyProcesses.size()>0&&current==nullptr){
                //initialise gantt chart
                QLabel *startimeLabel=new QLabel(this);
                startimeLabel->setText(QString::number(PM->Clock));
                startimeLabel->setGeometry(QRect(newlabel->x()+newlabel->width()-10,newlabel->y()-30,20,20));
                startimeLabel->show();

                newlabel=new QLabel(this);
                newlabel->setGeometry(QRect(ui->gantt->x()+ui->gantt->width()+50,ui->gantt->y(),width,height));
                newlabel->setStyleSheet("background-color:rgb(0,"+colors[PM->ReadyProcesses.at(0)->process_id]+","+colors[PM->ReadyProcesses.at(0)->process_id]+")");
                current=PM->ReadyProcesses.at(0);
            }else if(PM->ReadyProcesses.size()>0&&current==PM->ReadyProcesses.at(0)){
                newlabel->setFixedWidth(newlabel->width()+increase_width_by);
            }
            else if(PM->ReadyProcesses.size()>0&&current!=PM->ReadyProcesses.at(0)){

                QLabel *startimeLabel=new QLabel(this);
                startimeLabel->setText(QString::number(current->arrival_time+current->execution_time+current->waiting_time));
                startimeLabel->setGeometry(QRect(newlabel->x()+newlabel->width()-10,newlabel->y()-30,20,20));
                startimeLabel->show();
                QLabel *time_label=new QLabel(this);
                time_label->setText(QString::number(PM->Clock));
                time_label->setGeometry(QRect(newlabel->x()+newlabel->width()+10,newlabel->y()+height+10,20,20));
                time_label->show();
                //display process id
                QLabel *process_id=new QLabel(this);
                process_id->setText("p"+QString::number(current->process_id));
                process_id->setGeometry(QRect(newlabel->x()+(newlabel->width())/2,newlabel->y()-30,20,20));
                process_id->show();

                  i+=1;

                QLabel *templabel=new QLabel(this);
                templabel->setGeometry(QRect(newlabel->x()+newlabel->width(),newlabel->y(),width,height));
                templabel->setStyleSheet("background-color:rgb(0,"+colors[PM->ReadyProcesses.at(0)->process_id]+","+colors[PM->ReadyProcesses.at(0)->process_id]+")");
                newlabel=templabel;
                current=PM->ReadyProcesses.at(0);
            }
            if(algorithm_id==3){
            PM->cleanRunningProcessqueueRound_robin(&executed_time,PM->default_quant);
            }
            else{
                PM->cleanRunningProcessqueue();
            }
            PM->Clock+=1;
        }
        QLabel *time_label=new QLabel(this);
        time_label->setText(QString::number(PM->Clock));
        time_label->setGeometry(QRect(newlabel->x()+newlabel->width(),newlabel->y()+height+10,20,20));
        time_label->show();
        //display process id
        QLabel *process_id=new QLabel(this);
        process_id->setText("p"+QString::number(current->process_id));
        process_id->setGeometry(QRect(newlabel->x()+newlabel->width(),newlabel->y()-30,20,20));
        process_id->show();







}

void Information::displaymetrics(std::vector<Process *> result)
{
    ui->average_wait_time->setFixedWidth(600);
    ui->avg_reponse_time->setFixedWidth(600);
    ui->avg_turnaroudn_time->setFixedWidth(600);
    //displaying average waiting time
    QString str="("+QString::number(result.at(0)->waiting_time);
    float totalwait_time=result.at(0)->waiting_time;
    for(int i=1;i<result.size();i++){
        str=str+"+"+QString::number(result.at(i)->waiting_time);
        totalwait_time+=result.at(i)->waiting_time;
    }
    QString string;
    str=str+")/"+QString::number(result.size())+"="+string.setNum(totalwait_time/result.size());
    ui->average_wait_time->setText(str);
    //displaying average turnaround time
    str="("+QString::number(result.at(0)->waiting_time+result.at(0)->burst_time);

    totalwait_time=result.at(0)->waiting_time+result.at(0)->burst_time;
    for(int i=1;i<result.size();i++){
        str=str+"+"+QString::number(result.at(i)->waiting_time+result.at(i)->burst_time);
        totalwait_time+=(result.at(i)->waiting_time+result.at(i)->burst_time);
    }
    str=str+")/"+QString::number(result.size())+"="+string.setNum(totalwait_time/result.size());
    ui->avg_turnaroudn_time->setText(str);
    //displaying average response time
    str="("+QString::number(result.at(0)->reponsetime);
    totalwait_time=result.at(0)->reponsetime;
    for(int i=1;i<result.size();i++){
        str=str+"+"+QString::number(result.at(i)->reponsetime);
        totalwait_time+=result.at(i)->reponsetime;
    }
    str=str+")/"+QString::number(result.size())+"="+string.setNum(totalwait_time/result.size());
    ui->avg_reponse_time->setText(str);
}
void Information::filltable(std::vector<Process *> result)
{
    for(int i=0;i<ui->tableWidget->rowCount();i++){

        //we are displaying information for fcfs
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(result.at(i)->process_id)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(result.at(i)->arrival_time)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(result.at(i)->burst_time)));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(result.at(i)->priority)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(result.at(i)->waiting_time)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(result.at(i)->waiting_time+result.at(i)->burst_time)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(result.at(i)->reponsetime)));
    }

}
void Information::displayinfo()
{
    ui->tableWidget->setRowCount(PM->nbprocess);
    if(algorithm_id==1){
        filltable(PM->FCFSResult);
         drawgantt(PM->FCFSResult);
        displaymetrics(PM->FCFSResult);
    }
    else if(algorithm_id==2){
        filltable(PM->SJFResult);
     //   drawgantt(PM->SJFResult);
        displaymetrics(PM->SJFResult);
    }else if(algorithm_id==3){
        filltable(PM->RoundRobinResult);
       // drawgantt(PM->RoundRobinResult);
        displaymetrics(PM->RoundRobinResult);
    }
    else if(algorithm_id==4){
        filltable(PM->PriorityResult);
       // drawgantt(PM->PriorityResult);
        displaymetrics(PM->PriorityResult);
    }
}
