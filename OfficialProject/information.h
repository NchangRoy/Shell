#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include"ProcessClass.h"

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = nullptr);
    process_management *PM;
    int algorithm_id;
    void displayinfo();
    ~Information();

private:
    Ui::Information *ui;
    void filltable(std::vector<Process *> result);
    void drawgantt(std::vector<Process *>result);
    void displaymetrics(std::vector<Process *>result);

};

#endif // INFORMATION_H
