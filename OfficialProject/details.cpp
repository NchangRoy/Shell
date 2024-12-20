#include "details.h"
#include "ui_details.h"
#include"QLabel"
#include"QTableWidgetItem"
#include"QPushButton"
#include"QSpacerItem"
#include"QtCharts"
#include"QtCharts/QBarSeries"
#include"QtCharts/QBarSeries"
#include"QtCharts/QCategoryAxis"
#include"QtCharts/QValueAxis"
#include"QtCharts/QChart"

Details::Details(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Details)
{
    ui->setupUi(this);

}

void Details::startdipslaying()
{
//drawTable();
}

Details::~Details()
{
    delete ui;
}
void Details::drawTable(){


}

float Details::getavvg_resp_or_wait_tim(std::vector<Process *> vect, int k)
{   float total=0;
    if(k==1)//we are getting waiting time
    {
        for(int i=0;i<vect.size();i++){
            total+=vect.at(i)->waiting_time;
        }
        return total/vect.size();
    }
    else if(k==2){
        for(int i=0;i<vect.size();i++){
            total+=vect.at(i)->reponsetime;
        }
        return total/vect.size();
    }
    return 0;
}
void Details::drawGanttchart(QTableWidget *table, std::vector<Process *> vect)
{



}

void Details::on_pushButton_clicked()
{
    newinfo=new Information(this);
    ui->layout->addWidget(newinfo);

}


void Details::on_FCFS_button_clicked()
{
     ui->running_alg->setText("Displaying Results for First Come First Serve");
    QLayoutItem *child;
    while((child=ui->layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    newinfo=new Information(this);
    ui->layout->addWidget(newinfo);
    newinfo->algorithm_id=1;
    newinfo->PM=PM;
   newinfo->displayinfo();

}


void Details::on_FCFS_button_4_clicked()
{
     ui->running_alg->setText("Displaying Result for Priority Scheduling");
    QLayoutItem *child;
    while((child=ui->layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    newinfo=new Information(this);
    ui->layout->addWidget(newinfo);

    newinfo->algorithm_id=4;
    newinfo->PM=PM;
    newinfo->displayinfo();

}


void Details::on_FCFS_button_3_clicked()
{
     ui->running_alg->setText("Displaying Results for Round Robin");
    QLayoutItem *child;
    while((child=ui->layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    newinfo=new Information(this);
    ui->layout->addWidget(newinfo);

    newinfo->algorithm_id=3;
    newinfo->PM=PM;
    newinfo->displayinfo();

}


void Details::on_FCFS_button_2_clicked()
{
     ui->running_alg->setText("Displaying Results for SJF");
    QLayoutItem *child;
    while((child=ui->layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    newinfo=new Information(this);
    ui->layout->addWidget(newinfo);
    newinfo->algorithm_id=2;
    newinfo->PM=PM;
    newinfo->displayinfo();
}


void Details::on_FCFS_button_5_clicked()

{   //empty layout
    ui->running_alg->setText("Comparing Results");
    QLayoutItem *child;
    while((child=ui->layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }
    //next calculate average waiting time, turnaround time,response time of all algorithms
    int waiting_time[4];//stores all waiting times
    int response_time[4];


    auto set0=new QBarSet("FCFS");
    auto set1=new QBarSet("SJF");
    auto set2=new QBarSet("Round Robin");
    auto set3=new QBarSet("Priority Scheduling");
  *set0 <<getavvg_resp_or_wait_tim(PM->FCFSResult,1)<<getavvg_resp_or_wait_tim(PM->FCFSResult,2);
    *set1 <<getavvg_resp_or_wait_tim(PM->SJFResult,1)<<getavvg_resp_or_wait_tim(PM->SJFResult,2);
    *set2 <<getavvg_resp_or_wait_tim(PM->RoundRobinResult,1)<<getavvg_resp_or_wait_tim(PM->RoundRobinResult,2);
    *set3 <<getavvg_resp_or_wait_tim(PM->PriorityResult,1)<<getavvg_resp_or_wait_tim(PM->PriorityResult,2);

       QBarSeries *series=new QBarSeries;
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);

    auto chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Bar chart comparing Response time and waiting time for the 4 algorithms");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories {"Average Waiting Time","Average Response Time"};
    auto axisX=new QBarCategoryAxis;
    axisX->append(categories);
    chart->addAxis(axisX,Qt::AlignBottom);

    auto axisY=new QValueAxis;

    axisY->setRange(0,15);
    chart->addAxis(axisY,Qt::AlignLeft);
    series->attachAxis(axisY);
    QChartView *chartview=new QChartView(chart);
    ui->layout->addWidget(chartview);

}


void Details::on_FCFS_button_6_clicked()
{
    QWidget *parent=this->parentWidget();
    parent->show();
    PM->FCFSResult.clear();
    PM->SJFResult.clear();
    PM->RoundRobinResult.clear();
    PM->PriorityResult.clear();
    delete this;
}

