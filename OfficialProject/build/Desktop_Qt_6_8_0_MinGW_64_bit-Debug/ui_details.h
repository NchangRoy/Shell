/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Details
{
public:
    QPushButton *FCFS_button;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *layout;
    QPushButton *FCFS_button_2;
    QPushButton *FCFS_button_3;
    QPushButton *FCFS_button_4;
    QLabel *label;
    QPushButton *FCFS_button_5;
    QPushButton *FCFS_button_6;
    QLabel *running_alg;

    void setupUi(QDialog *Details)
    {
        if (Details->objectName().isEmpty())
            Details->setObjectName("Details");
        Details->resize(1065, 847);
        FCFS_button = new QPushButton(Details);
        FCFS_button->setObjectName("FCFS_button");
        FCFS_button->setGeometry(QRect(20, 210, 121, 71));
        horizontalLayoutWidget = new QWidget(Details);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(170, 80, 881, 621));
        layout = new QHBoxLayout(horizontalLayoutWidget);
        layout->setObjectName("layout");
        layout->setContentsMargins(0, 0, 0, 0);
        FCFS_button_2 = new QPushButton(Details);
        FCFS_button_2->setObjectName("FCFS_button_2");
        FCFS_button_2->setGeometry(QRect(20, 290, 121, 71));
        FCFS_button_3 = new QPushButton(Details);
        FCFS_button_3->setObjectName("FCFS_button_3");
        FCFS_button_3->setGeometry(QRect(20, 370, 121, 71));
        FCFS_button_4 = new QPushButton(Details);
        FCFS_button_4->setObjectName("FCFS_button_4");
        FCFS_button_4->setGeometry(QRect(20, 450, 121, 71));
        label = new QLabel(Details);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 181, 41));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        FCFS_button_5 = new QPushButton(Details);
        FCFS_button_5->setObjectName("FCFS_button_5");
        FCFS_button_5->setGeometry(QRect(20, 530, 121, 71));
        FCFS_button_6 = new QPushButton(Details);
        FCFS_button_6->setObjectName("FCFS_button_6");
        FCFS_button_6->setGeometry(QRect(0, 830, 16, 16));
        running_alg = new QLabel(Details);
        running_alg->setObjectName("running_alg");
        running_alg->setGeometry(QRect(260, 25, 671, 41));
        running_alg->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Details);

        QMetaObject::connectSlotsByName(Details);
    } // setupUi

    void retranslateUi(QDialog *Details)
    {
        Details->setWindowTitle(QCoreApplication::translate("Details", "Dialog", nullptr));
        FCFS_button->setText(QCoreApplication::translate("Details", "FCFS", nullptr));
        FCFS_button_2->setText(QCoreApplication::translate("Details", "SJF", nullptr));
        FCFS_button_3->setText(QCoreApplication::translate("Details", "Round Robin", nullptr));
        FCFS_button_4->setText(QCoreApplication::translate("Details", "Priority Scheduling", nullptr));
        label->setText(QCoreApplication::translate("Details", "Output Panel", nullptr));
        FCFS_button_5->setText(QCoreApplication::translate("Details", "Compare Resutls", nullptr));
        FCFS_button_6->setText(QCoreApplication::translate("Details", "Mainwindow", nullptr));
        running_alg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Details: public Ui_Details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
