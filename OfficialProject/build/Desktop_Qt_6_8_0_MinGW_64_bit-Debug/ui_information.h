/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QTableWidget *tableWidget;
    QLabel *gantt;
    QLabel *gantt_2;
    QLabel *gantt_3;
    QLabel *label;
    QLabel *avg_reponse_time;
    QLabel *avg_turnaroudn_time;
    QLabel *average_wait_time;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName("Information");
        Information->resize(709, 628);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Information->sizePolicy().hasHeightForWidth());
        Information->setSizePolicy(sizePolicy);
        Information->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(Information);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 20, 691, 281));
        gantt = new QLabel(Information);
        gantt->setObjectName("gantt");
        gantt->setGeometry(QRect(10, 350, 71, 51));
        gantt_2 = new QLabel(Information);
        gantt_2->setObjectName("gantt_2");
        gantt_2->setGeometry(QRect(10, 430, 111, 31));
        gantt_3 = new QLabel(Information);
        gantt_3->setObjectName("gantt_3");
        gantt_3->setGeometry(QRect(10, 470, 141, 21));
        label = new QLabel(Information);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 510, 141, 21));
        avg_reponse_time = new QLabel(Information);
        avg_reponse_time->setObjectName("avg_reponse_time");
        avg_reponse_time->setGeometry(QRect(160, 510, 141, 21));
        avg_turnaroudn_time = new QLabel(Information);
        avg_turnaroudn_time->setObjectName("avg_turnaroudn_time");
        avg_turnaroudn_time->setGeometry(QRect(170, 470, 141, 21));
        average_wait_time = new QLabel(Information);
        average_wait_time->setObjectName("average_wait_time");
        average_wait_time->setGeometry(QRect(150, 440, 141, 21));

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QCoreApplication::translate("Information", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Information", "Process Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Information", "Arrival Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Information", "Burst Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Information", "Priority", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Information", "Waiting Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Information", "Turnaround Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Information", "Response Time", nullptr));
        gantt->setText(QCoreApplication::translate("Information", "Gantt Chart", nullptr));
        gantt_2->setText(QCoreApplication::translate("Information", "Average Wait time:", nullptr));
        gantt_3->setText(QCoreApplication::translate("Information", "Average Turnaroud time", nullptr));
        label->setText(QCoreApplication::translate("Information", "Average response time", nullptr));
        avg_reponse_time->setText(QString());
        avg_turnaroudn_time->setText(QString());
        average_wait_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
