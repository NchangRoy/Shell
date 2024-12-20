/********************************************************************************
** Form generated from reading UI file 'execution_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTION_DIALOG_H
#define UI_EXECUTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Execution_dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Waiting_process;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Ready_process_layout;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *zombie_process;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *timer_label;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *RunningProcesses_layout;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;

    void setupUi(QDialog *Execution_dialog)
    {
        if (Execution_dialog->objectName().isEmpty())
            Execution_dialog->setObjectName("Execution_dialog");
        Execution_dialog->resize(1203, 1200);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Execution_dialog->sizePolicy().hasHeightForWidth());
        Execution_dialog->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(Execution_dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 180, 211, 481));
        Waiting_process = new QVBoxLayout(verticalLayoutWidget);
        Waiting_process->setObjectName("Waiting_process");
        Waiting_process->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        Waiting_process->addItem(verticalSpacer);

        verticalLayoutWidget_2 = new QWidget(Execution_dialog);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(320, 180, 261, 481));
        Ready_process_layout = new QVBoxLayout(verticalLayoutWidget_2);
        Ready_process_layout->setObjectName("Ready_process_layout");
        Ready_process_layout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        Ready_process_layout->addItem(verticalSpacer_2);

        verticalLayoutWidget_3 = new QWidget(Execution_dialog);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(910, 180, 241, 481));
        zombie_process = new QVBoxLayout(verticalLayoutWidget_3);
        zombie_process->setSpacing(4);
        zombie_process->setObjectName("zombie_process");
        zombie_process->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        zombie_process->addItem(verticalSpacer_3);

        label = new QLabel(Execution_dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 139, 251, 31));
        label->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-weight:bolder;\n"
"font-size:24px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(Execution_dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(610, 140, 261, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-weight:bolder;\n"
"font-size:24px;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(Execution_dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(890, 140, 261, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-weight:bolder;\n"
"font-size:24px;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox = new QGroupBox(Execution_dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(490, 40, 181, 81));
        groupBox->setStyleSheet(QString::fromUtf8("border:2px solid transparent;background-color:#FFC700;border-radius:10px"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-size:24px;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_4);

        timer_label = new QLabel(groupBox);
        timer_label->setObjectName("timer_label");
        timer_label->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-size:24px;"));
        timer_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(timer_label);

        verticalLayoutWidget_4 = new QWidget(Execution_dialog);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(610, 180, 251, 481));
        RunningProcesses_layout = new QVBoxLayout(verticalLayoutWidget_4);
        RunningProcesses_layout->setObjectName("RunningProcesses_layout");
        RunningProcesses_layout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(Execution_dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 140, 261, 31));
        label_5->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-weight:bolder;\n"
"font-size:24px;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(Execution_dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 670, 221, 51));
        pushButton_2 = new QPushButton(Execution_dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(960, 670, 191, 51));
        label_6 = new QLabel(Execution_dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(330, 710, 421, 71));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Execution_dialog);

        QMetaObject::connectSlotsByName(Execution_dialog);
    } // setupUi

    void retranslateUi(QDialog *Execution_dialog)
    {
        Execution_dialog->setWindowTitle(QCoreApplication::translate("Execution_dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Execution_dialog", "Waiting Processes", nullptr));
        label_2->setText(QCoreApplication::translate("Execution_dialog", "Running Processes", nullptr));
        label_3->setText(QCoreApplication::translate("Execution_dialog", "Zombie Processes", nullptr));
        label_4->setText(QCoreApplication::translate("Execution_dialog", "Time:", nullptr));
        timer_label->setText(QCoreApplication::translate("Execution_dialog", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Execution_dialog", "Ready Processes", nullptr));
        pushButton->setText(QCoreApplication::translate("Execution_dialog", "Main Menu", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Execution_dialog", "Details", nullptr));
        label_6->setText(QCoreApplication::translate("Execution_dialog", "Please Wait For Animation to Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Execution_dialog: public Ui_Execution_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTION_DIALOG_H
