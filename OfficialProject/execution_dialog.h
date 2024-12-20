#ifndef EXECUTION_DIALOG_H
#define EXECUTION_DIALOG_H

#include <QDialog>
#include<ProcessClass.h>
#include"QVector"
#include"p_template_exe.h"
#include"QTimer"
#include"details.h"

namespace Ui {
class Execution_dialog;
}

class Execution_dialog : public QDialog
{
    Q_OBJECT
public slots:

    void timed();
public:
    explicit Execution_dialog(QWidget *parent = nullptr);
    process_management *PM;
    QVector<P_template_exe *> Process_widgets;

    void ExecuteAlgorithm(int algorithm_id, int quantum);


    void updateDisplay();
    ~Execution_dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Execution_dialog *ui;
    QTimer *timer;
    int clock;
    int running_algorithm;
    int executed_time=0;
    int quantum_time;
    Details *newdetail;



};

#endif // EXECUTION_DIALOG_H
