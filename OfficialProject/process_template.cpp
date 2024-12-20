#include "process_template.h"
#include "ui_process_template.h"

Process_Template::Process_Template(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Process_Template)
{
    ui->setupUi(this);
}

void Process_Template::initaliseparam(int a, int b,int id,int pr)
{   ui->Pid->setText(QString::number(id));
    ui->atime->setText(QString::number(a));
     ui->btime->setText(QString::number(b));
    ui->prioritylabel->setText(QString::number(pr));

}

Process_Template::~Process_Template()
{
    delete ui;
}
