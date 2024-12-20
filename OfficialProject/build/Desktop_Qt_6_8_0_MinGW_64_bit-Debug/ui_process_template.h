/********************************************************************************
** Form generated from reading UI file 'process_template.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS_TEMPLATE_H
#define UI_PROCESS_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Process_Template
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *Pid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *atime;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *btime;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *prioritylabel;

    void setupUi(QWidget *Process_Template)
    {
        if (Process_Template->objectName().isEmpty())
            Process_Template->setObjectName("Process_Template");
        Process_Template->resize(217, 146);
        Process_Template->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Process_Template);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(Process_Template);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("background-color:#00FF7F;\n"
"border:2px solid #00FF7F;\n"
"border-radius:5px;"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        Pid = new QLabel(groupBox);
        Pid->setObjectName("Pid");
        Pid->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(Pid);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        atime = new QLabel(groupBox);
        atime->setObjectName("atime");
        atime->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(atime);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        btime = new QLabel(groupBox);
        btime->setObjectName("btime");
        btime->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(btime);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        prioritylabel = new QLabel(groupBox);
        prioritylabel->setObjectName("prioritylabel");
        prioritylabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(prioritylabel);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Process_Template);

        QMetaObject::connectSlotsByName(Process_Template);
    } // setupUi

    void retranslateUi(QWidget *Process_Template)
    {
        Process_Template->setWindowTitle(QCoreApplication::translate("Process_Template", "Form", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Process_Template", "Process ID", nullptr));
        Pid->setText(QString());
        label_3->setText(QCoreApplication::translate("Process_Template", "Arrival Time", nullptr));
        atime->setText(QString());
        label_4->setText(QCoreApplication::translate("Process_Template", "Burst Time", nullptr));
        btime->setText(QString());
        label_6->setText(QCoreApplication::translate("Process_Template", "Priority", nullptr));
        prioritylabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Process_Template: public Ui_Process_Template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS_TEMPLATE_H
