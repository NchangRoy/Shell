#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<ProcessClass.h>
#include"process_template.h"
#include"execution_dialog.h"
#include"QSpinBox"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    process_management *PM;
    int algorithm_id;

    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_FCFS_clicked();

    void on_SJF_clicked();

    void on_Round_robin_clicked();

    void on_pushButton_3_clicked();

    void on_Round_robin_2_clicked();

private:
    Ui::MainWindow *ui;
    Execution_dialog *Exec_dialog;
    int quantum;
    QSpinBox *newbox;
};
#endif // MAINWINDOW_H
