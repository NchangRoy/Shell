#include "execution_dialog.h"
#include "ui_execution_dialog.h"
#include"QDebug"
#include"QTimer"
#include"QString"
#include"QSpacerItem"

Execution_dialog::Execution_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Execution_dialog)
{
    ui->setupUi(this);
    //creation of timer
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timed())) ;

    timer->start(2000);
    clock=0;
    running_algorithm=0;
     executed_time=0;


}


Execution_dialog::~Execution_dialog()
{
    delete ui;
}



void Execution_dialog::updateDisplay()
{   //Waiting processes
  //first clear layout
    QLayoutItem *child;
  while((child=ui->Waiting_process->takeAt(0))!=nullptr){
        delete child->widget();
      delete child;
  }//then add widgets

    if(PM->WaitingQueue.size()>0){
        for(int i=0;i<PM->WaitingQueue.size();i++){
            P_template_exe *newproc=new P_template_exe(this);
            newproc->updateParam(PM->WaitingQueue.at(i)->process_id,PM->WaitingQueue.at(i)->arrival_time,
                                 PM->WaitingQueue.at(i)->burst_time
                                 ,PM->WaitingQueue.at(i)->execution_time
                                 ,PM->WaitingQueue.at(i)->waiting_time,
                                 PM->WaitingQueue.at(i)->state);
            ui->Waiting_process->insertWidget(ui->Waiting_process->count()
                                              ,newproc);
        }
        QSpacerItem *spacer= new QSpacerItem(0,1000,QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->Waiting_process->insertSpacerItem(ui->Waiting_process->count(),spacer);
    }
    //same for Running processes
    //clearing ready  process layout
    while((child=ui->Ready_process_layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    //clearing runnig process que
    while((child=ui->RunningProcesses_layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    //creating widgets and inserting them in layout
    if(PM->ReadyProcesses.size()>0){
        for(int i=1;i<PM->ReadyProcesses.size();i++){
            if(PM->ReadyProcesses.at(i)->state!=true){
                P_template_exe *newproc=new P_template_exe(this);
                newproc->updateParam(PM->ReadyProcesses.at(i)->process_id,
                                     PM->ReadyProcesses.at(i)->arrival_time,
                                     PM->ReadyProcesses.at(i)->burst_time,
                                     PM->ReadyProcesses.at(i)->execution_time,
                                     PM->ReadyProcesses.at(i)->waiting_time,
                                     PM->ReadyProcesses.at(i)->state);
                ui->Ready_process_layout->insertWidget(ui->Ready_process_layout->count(),newproc);
            }
        }
        QSpacerItem *spacer2=new QSpacerItem(0,1000,QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->Ready_process_layout->insertSpacerItem(ui->Ready_process_layout->count(),spacer2);

        //clear running process layout




                P_template_exe *newproc=new P_template_exe(this);
                newproc->updateParam(PM->ReadyProcesses.at(0)->process_id,
                                     PM->ReadyProcesses.at(0)->arrival_time,
                                     PM->ReadyProcesses.at(0)->burst_time,
                                     PM->ReadyProcesses.at(0)->execution_time,
                                     PM->ReadyProcesses.at(0)->waiting_time,
                                     PM->ReadyProcesses.at(0)->state);
                ui->RunningProcesses_layout->addWidget(newproc);


        QSpacerItem *spacer4=new QSpacerItem(0,1000,QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->RunningProcesses_layout->insertSpacerItem(ui->RunningProcesses_layout->count(),spacer4);



    }

    //same for zombie processes
    //clearing zombie process layout

    while((child=ui->zombie_process->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    if(PM->ZombieProcess.size()>0){
        for(int i=0;i<PM->ZombieProcess.size();i++){
            P_template_exe *newproc=new P_template_exe(this);
            newproc->updateParam(PM->ZombieProcess.at(i)->process_id,
                                 PM->ZombieProcess.at(i)->arrival_time,
                                 PM->ZombieProcess.at(i)->burst_time,
                                 PM->ZombieProcess.at(i)->execution_time,
                                 PM->ZombieProcess.at(i)->waiting_time,
                                 PM->ZombieProcess.at(i)->state);
            ui->zombie_process->insertWidget(ui->zombie_process->count(),newproc);
        }
         QSpacerItem *spacer3=new QSpacerItem(0,1000,QSizePolicy::Expanding,QSizePolicy::Expanding);
         ui->zombie_process->insertSpacerItem(ui->zombie_process->count(),spacer3);
    }

}
void Execution_dialog::ExecuteAlgorithm(int algorithm_id,int quantum)
{   quantum_time=quantum;

    running_algorithm=algorithm_id;
    updateDisplay();
    timer->start(2000);

    //}


}



void Execution_dialog::timed()

{
    if(PM->ZombieProcess.size()==PM->nbprocess){
        timer->stop();
        updateDisplay();

        PM->startRunning(quantum_time);

    }
    if(running_algorithm==1){
        PM->FCFS();
        updateDisplay();
        PM->Clock+=1;

        ui->timer_label->setText(QString::number(clock));
        clock+=1;
        PM->cleanRunningProcessqueue();

    }
    else if(running_algorithm==2){
        PM->SJF();
        updateDisplay();
        PM->Clock+=1;

        ui->timer_label->setText(QString::number(clock));
        clock+=1;
        PM->cleanRunningProcessqueue();

    }
    else if(running_algorithm==3){
        PM->Round_Robin(&executed_time,quantum_time);
        updateDisplay();
        PM->Clock+=1;

        ui->timer_label->setText(QString::number(clock));
        clock+=1;
        PM->cleanRunningProcessqueueRound_robin(&executed_time,quantum_time);

    }
    else if(running_algorithm==4){
        PM->Priority_Scheduling();
        updateDisplay();
        PM->Clock+=1;
        ui->timer_label->setText(QString::number(clock));
        clock+=1;
        PM->cleanRunningProcessqueue();

    }
}
void Execution_dialog::on_pushButton_clicked()
{   this->hide();
    QWidget *parent=this->parentWidget();
    parent->show();
}


void Execution_dialog::on_pushButton_2_clicked()
{
    newdetail=new Details(this->parentWidget());
    this->hide();
    newdetail->PM=PM;
    newdetail->startdipslaying();
    newdetail->show();
}

