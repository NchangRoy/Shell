/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *BTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *ATime;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *priority_label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *process_layout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *FCFS;
    QRadioButton *SJF;
    QRadioButton *Round_robin;
    QRadioButton *Round_robin_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *quantum_input;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 664);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#FFD700"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(93, 87, 291, 231));
        groupBox->setMinimumSize(QSize(30, 40));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:#FFC700;border:2px solid white;border-radius:5px;\n"
"padding:5;"));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-size:16px;\n"
""));

        horizontalLayout->addWidget(label);

        BTime = new QSpinBox(groupBox);
        BTime->setObjectName("BTime");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BTime->sizePolicy().hasHeightForWidth());
        BTime->setSizePolicy(sizePolicy);
        BTime->setMinimumSize(QSize(60, 0));
        BTime->setMaximumSize(QSize(100, 16777215));
        BTime->setStyleSheet(QString::fromUtf8("background-color:white;"));
        BTime->setMinimum(1);

        horizontalLayout->addWidget(BTime);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-size:16px;\n"
""));

        horizontalLayout_2->addWidget(label_2);

        ATime = new QSpinBox(groupBox);
        ATime->setObjectName("ATime");
        sizePolicy.setHeightForWidth(ATime->sizePolicy().hasHeightForWidth());
        ATime->setSizePolicy(sizePolicy);
        ATime->setMinimumSize(QSize(60, 0));
        ATime->setMaximumSize(QSize(100, 16777215));
        ATime->setStyleSheet(QString::fromUtf8("background-color:white;"));

        horizontalLayout_2->addWidget(ATime);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(30, 20));
        pushButton->setMaximumSize(QSize(200, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#00FF7F;border:2px solid #00FF7F;border-radius:10px;;\n"
"font-size:16px;\n"
"font-family: \"Segoe UI\";"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font-family:\"Times New Roman\";\n"
"font-size:16px;\n"
""));

        horizontalLayout_3->addWidget(label_5);

        priority_label = new QSpinBox(groupBox);
        priority_label->setObjectName("priority_label");
        sizePolicy.setHeightForWidth(priority_label->sizePolicy().hasHeightForWidth());
        priority_label->setSizePolicy(sizePolicy);
        priority_label->setMinimumSize(QSize(60, 0));
        priority_label->setMaximumSize(QSize(100, 16777215));
        priority_label->setStyleSheet(QString::fromUtf8("background-color:white;"));
        priority_label->setMinimum(-20);
        priority_label->setMaximum(19);

        horizontalLayout_3->addWidget(priority_label);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(450, 40, 300, 511));
        scrollArea->setMinimumSize(QSize(300, 400));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;border:1px solid #FFFFFF;border-radius:30;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 298, 509));
        process_layout = new QVBoxLayout(scrollAreaWidgetContents);
        process_layout->setObjectName("process_layout");
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        process_layout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        process_layout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 490, 261, 40));
        pushButton_2->setMinimumSize(QSize(30, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:#00FF7F;border:2px solid #00FF7F;border-radius:10px;;\n"
"font-size:16px;\n"
"font-family: \"Segoe UI\";"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(90, 340, 181, 141));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color:#FFC700;border:2px solid #FFFFFF;border-radius:10px;"));
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        FCFS = new QRadioButton(groupBox_2);
        FCFS->setObjectName("FCFS");
        FCFS->setStyleSheet(QString::fromUtf8("font-size:12px;\n"
"font-family: \"Segoe UI\";border:none;"));

        verticalLayout_2->addWidget(FCFS);

        SJF = new QRadioButton(groupBox_2);
        SJF->setObjectName("SJF");
        SJF->setMinimumSize(QSize(0, 20));
        SJF->setStyleSheet(QString::fromUtf8("font-size:12px;\n"
"font-family: \"Segoe UI\";border:none;"));

        verticalLayout_2->addWidget(SJF);

        Round_robin = new QRadioButton(groupBox_2);
        Round_robin->setObjectName("Round_robin");
        Round_robin->setStyleSheet(QString::fromUtf8("font-size:12px;\n"
"font-family: \"Segoe UI\";border:none;"));

        verticalLayout_2->addWidget(Round_robin);

        Round_robin_2 = new QRadioButton(groupBox_2);
        Round_robin_2->setObjectName("Round_robin_2");
        Round_robin_2->setStyleSheet(QString::fromUtf8("font-size:12px;\n"
"font-family: \"Segoe UI\";border:none;"));

        verticalLayout_2->addWidget(Round_robin_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(280, 370, 101, 61));
        quantum_input = new QVBoxLayout(verticalLayoutWidget);
        quantum_input->setObjectName("quantum_input");
        quantum_input->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(470, 570, 261, 40));
        pushButton_3->setMinimumSize(QSize(30, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:#00FF7F;border:2px solid #00FF7F;border-radius:10px;;\n"
"font-size:16px;\n"
"font-family: \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Create Process", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Burst Time", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Arrival Time", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Process", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Priority", nullptr));
        label_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exectute", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Choose Algorithm", nullptr));
        FCFS->setText(QCoreApplication::translate("MainWindow", "First Come First Serve", nullptr));
        SJF->setText(QCoreApplication::translate("MainWindow", "Shortest Job First", nullptr));
        Round_robin->setText(QCoreApplication::translate("MainWindow", "Round Robin", nullptr));
        Round_robin_2->setText(QCoreApplication::translate("MainWindow", "Priority Scheduling", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Clear Process Queue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
