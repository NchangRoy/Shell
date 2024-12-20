#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QLineEdit"
#include"QMessageBox"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PM=new process_management();
    newbox=nullptr;
    algorithm_id=0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int ATime=ui->ATime->value();
    int BTime=ui->BTime->value();
    int priority=ui->priority_label->value();
    Process *newproc=new Process(ATime,BTime);
    newproc->priority=priority;
    PM->addProcess(newproc);
    PM->printprocesses(PM->WaitingQueue);
    Process_Template *newproctemp=new Process_Template(this);
    newproctemp->initaliseparam(ATime,BTime,PM->WaitingQueue.back()->process_id,priority);
    ui->process_layout->insertWidget(0,newproctemp);
    quantum=0;
}


void MainWindow::on_pushButton_2_clicked()
{   //quantum=newbox->value();

   if(PM->WaitingQueue.empty()){
        QMessageBox::critical(this,"No process","Can't Execute Algorthm with no process","Enter a Process");
    }
    else if(algorithm_id==0){
        QMessageBox::critical(this,"No Algorithm Selected","Choose an Algorithm","Exit");
    }
    else
    {
        if(newbox!=nullptr){
            quantum=newbox->value();
        }
        Exec_dialog=new Execution_dialog(this);
        this->hide();

        Exec_dialog->PM=PM;
        Exec_dialog->show();
        Exec_dialog->ExecuteAlgorithm(algorithm_id, quantum);
    }




}


void MainWindow::on_FCFS_clicked()
{
    algorithm_id=1;
    if(ui->quantum_input->count()>0){
        QLayoutItem *child;
        while((child=ui->quantum_input->takeAt(0))!=nullptr){
            delete child->widget();
            delete child;
        }
        newbox=nullptr;
    }
}
void MainWindow::on_SJF_clicked()
{
    algorithm_id=2;

    if(ui->quantum_input->count()>0){
        QLayoutItem *child;
        while((child=ui->quantum_input->takeAt(0))!=nullptr){
            delete child->widget();
            delete child;
        }
        newbox=nullptr;
    }
}

void MainWindow::on_Round_robin_2_clicked()
{
    algorithm_id=4;
    if(ui->quantum_input->count()>0){
        QLayoutItem *child;
        while((child=ui->quantum_input->takeAt(0))!=nullptr){
            delete child->widget();
            delete child;
        }
        newbox=nullptr;
    }
}
void MainWindow::on_pushButton_3_clicked()
{   PM->nbprocess=0;
    PM->Clock=0;
    PM->WaitingQueue.clear();
    PM->ReadyProcesses.clear();
    PM->ZombieProcess.clear();
    PM->waitingqueuecopy.clear();
    QLayoutItem *child;
    while((child=ui->process_layout->takeAt(0))!=nullptr){
        delete child->widget();
        delete child;
    }

}

void MainWindow::on_Round_robin_clicked()
{
    algorithm_id=3;
    if(ui->quantum_input->count()==0){
        QLabel *quantum_text=new QLabel(this);
        quantum_text->setText("Enter the Quantum");
        ui->quantum_input->addWidget(quantum_text);

        newbox=new QSpinBox(this);
        newbox->setFixedHeight(40);
        newbox->setFixedWidth(40);

        ui->quantum_input->addWidget(newbox);

    }

}
