#include "p_template_exe.h"
#include "ui_p_template_exe.h"

P_template_exe::P_template_exe(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::P_template_exe)
{
    ui->setupUi(this);
}

void P_template_exe::updateParam(int p_id, int a_time, int b_time, int e_time, int w_time, bool state)
{
    ui->Pid_label->setText(QString::number(p_id));
    ui->AT_label->setText(QString::number(a_time));
    ui->BT_label->setText(QString::number(b_time));
    ui->ExT_label->setText(QString::number(e_time));
    ui->WT_label->setText(QString::number(w_time));
    ui->state->setText((state)?"True":"False");

}

P_template_exe::~P_template_exe()
{
    delete ui;
}
