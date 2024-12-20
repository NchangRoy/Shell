#ifndef DETAILS_H
#define DETAILS_H

#include <QDialog>
#include<ProcessClass.h>
#include"QTableWidget"
#include"information.h"
#include"QtGui"
#include"QtCore"



namespace Ui {
class Details;
}

class Details : public QDialog
{
    Q_OBJECT

public:
    explicit Details(QWidget *parent = nullptr);
    process_management *PM;
    void startdipslaying();
    ~Details();

private slots:
    void on_pushButton_clicked();

    void on_FCFS_button_clicked();

    void on_FCFS_button_4_clicked();

    void on_FCFS_button_3_clicked();

    void on_FCFS_button_2_clicked();

    void on_FCFS_button_5_clicked();

    void on_FCFS_button_6_clicked();

private:
    Ui::Details *ui;
    void drawGanttchart(QTableWidget *table,std::vector<Process *> vect);
    void drawTable();
    float getavvg_resp_or_wait_tim(std::vector<Process *> vect,int k);

    Information *newinfo;
};

#endif // DETAILS_H
