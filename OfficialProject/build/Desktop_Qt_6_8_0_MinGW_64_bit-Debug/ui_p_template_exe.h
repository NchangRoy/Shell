/********************************************************************************
** Form generated from reading UI file 'p_template_exe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P_TEMPLATE_EXE_H
#define UI_P_TEMPLATE_EXE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_P_template_exe
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *Pid_label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *ExT_label;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *BT_label;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *AT_label;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *WT_label;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLabel *state;

    void setupUi(QWidget *P_template_exe)
    {
        if (P_template_exe->objectName().isEmpty())
            P_template_exe->setObjectName("P_template_exe");
        P_template_exe->resize(308, 106);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(P_template_exe->sizePolicy().hasHeightForWidth());
        P_template_exe->setSizePolicy(sizePolicy);
        P_template_exe->setStyleSheet(QString::fromUtf8("background-color:rgb(200, 171, 138);"));
        verticalLayout_7 = new QVBoxLayout(P_template_exe);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(P_template_exe);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:rgb(200, 80, 44);\n"
"font-family:\"Segoe UI\";\n"
"color:white;\n"
"\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label);

        Pid_label = new QLabel(P_template_exe);
        Pid_label->setObjectName("Pid_label");
        Pid_label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-family:\"Segoe UI\";\n"
"font-weight:bolder;\n"
"color:rgb(170, 0, 0)"));
        Pid_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(Pid_label);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(P_template_exe);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:rgb(200, 80, 44);\n"
"font-family:\"Segoe UI\";\n"
"color:white;\n"
"\n"
""));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        ExT_label = new QLabel(P_template_exe);
        ExT_label->setObjectName("ExT_label");
        ExT_label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-family:\"Segoe UI\";\n"
"font-weight:bolder;\n"
"color:rgb(170, 0, 0)"));
        ExT_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(ExT_label);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(P_template_exe);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:rgb(200, 80, 44);\n"
"font-family:\"Segoe UI\";\n"
"color:white;\n"
"\n"
""));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        BT_label = new QLabel(P_template_exe);
        BT_label->setObjectName("BT_label");
        BT_label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-family:\"Segoe UI\";\n"
"font-weight:bolder;\n"
"color:rgb(170, 0, 0)"));
        BT_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(BT_label);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(P_template_exe);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:rgb(200, 80, 44);\n"
"font-family:\"Segoe UI\";\n"
"color:white;\n"
"\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        AT_label = new QLabel(P_template_exe);
        AT_label->setObjectName("AT_label");
        AT_label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-family:\"Segoe UI\";\n"
"font-weight:bolder;\n"
"color:rgb(170, 0, 0)"));
        AT_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(AT_label);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(P_template_exe);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:rgb(200, 80, 44);\n"
"font-family:\"Segoe UI\";\n"
"color:white;\n"
"\n"
""));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_5);

        WT_label = new QLabel(P_template_exe);
        WT_label->setObjectName("WT_label");
        WT_label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-family:\"Segoe UI\";\n"
"font-weight:bolder;\n"
"color:rgb(170, 0, 0)"));
        WT_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(WT_label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(P_template_exe);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:rgb(200, 80, 44);\n"
"font-family:\"Segoe UI\";\n"
"color:white;\n"
"\n"
""));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        state = new QLabel(P_template_exe);
        state->setObjectName("state");
        state->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-family:\"Segoe UI\";\n"
"font-weight:bolder;\n"
"color:rgb(170, 0, 0)"));
        state->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(state);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);


        retranslateUi(P_template_exe);

        QMetaObject::connectSlotsByName(P_template_exe);
    } // setupUi

    void retranslateUi(QWidget *P_template_exe)
    {
        P_template_exe->setWindowTitle(QCoreApplication::translate("P_template_exe", "Form", nullptr));
        label->setText(QCoreApplication::translate("P_template_exe", "PID", nullptr));
        Pid_label->setText(QString());
        label_4->setText(QCoreApplication::translate("P_template_exe", "ET", nullptr));
        ExT_label->setText(QString());
        label_3->setText(QCoreApplication::translate("P_template_exe", "BT", nullptr));
        BT_label->setText(QString());
        label_2->setText(QCoreApplication::translate("P_template_exe", "AT", nullptr));
        AT_label->setText(QString());
        label_5->setText(QCoreApplication::translate("P_template_exe", "WT", nullptr));
        WT_label->setText(QString());
        label_6->setText(QCoreApplication::translate("P_template_exe", "State", nullptr));
        state->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class P_template_exe: public Ui_P_template_exe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P_TEMPLATE_EXE_H
