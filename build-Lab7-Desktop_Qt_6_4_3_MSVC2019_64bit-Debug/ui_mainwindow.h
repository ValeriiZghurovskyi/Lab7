/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *CreateFile;
    QLabel *label;
    QLineEdit *CreateFileName;
    QLineEdit *AppendFileName;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *Name;
    QLineEdit *Position;
    QLineEdit *Sex;
    QLineEdit *Age;
    QPushButton *AppendFileButton;
    QPushButton *WriteButton;
    QLineEdit *StartFileName;
    QLineEdit *ResultFileName;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *CheckFileName;
    QPushButton *CheckEmpButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(693, 555);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CreateFile = new QPushButton(centralwidget);
        CreateFile->setObjectName("CreateFile");
        CreateFile->setGeometry(QRect(370, 20, 151, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 71, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        CreateFileName = new QLineEdit(centralwidget);
        CreateFileName->setObjectName("CreateFileName");
        CreateFileName->setGeometry(QRect(150, 20, 161, 31));
        AppendFileName = new QLineEdit(centralwidget);
        AppendFileName->setObjectName("AppendFileName");
        AppendFileName->setGeometry(QRect(150, 90, 161, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 151, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 150, 49, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 180, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 210, 21, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 240, 31, 16));
        Name = new QLineEdit(centralwidget);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(150, 150, 113, 21));
        Position = new QLineEdit(centralwidget);
        Position->setObjectName("Position");
        Position->setGeometry(QRect(150, 180, 113, 21));
        Sex = new QLineEdit(centralwidget);
        Sex->setObjectName("Sex");
        Sex->setGeometry(QRect(150, 210, 113, 21));
        Age = new QLineEdit(centralwidget);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(150, 240, 113, 21));
        AppendFileButton = new QPushButton(centralwidget);
        AppendFileButton->setObjectName("AppendFileButton");
        AppendFileButton->setGeometry(QRect(370, 180, 151, 81));
        WriteButton = new QPushButton(centralwidget);
        WriteButton->setObjectName("WriteButton");
        WriteButton->setGeometry(QRect(370, 320, 171, 71));
        StartFileName = new QLineEdit(centralwidget);
        StartFileName->setObjectName("StartFileName");
        StartFileName->setGeometry(QRect(140, 320, 161, 31));
        ResultFileName = new QLineEdit(centralwidget);
        ResultFileName->setObjectName("ResultFileName");
        ResultFileName->setGeometry(QRect(140, 360, 161, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 320, 141, 31));
        label_7->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 360, 141, 31));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 450, 71, 31));
        label_9->setFont(font);
        CheckFileName = new QLineEdit(centralwidget);
        CheckFileName->setObjectName("CheckFileName");
        CheckFileName->setGeometry(QRect(140, 450, 161, 31));
        CheckEmpButton = new QPushButton(centralwidget);
        CheckEmpButton->setObjectName("CheckEmpButton");
        CheckEmpButton->setGeometry(QRect(370, 440, 171, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 693, 21));
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
        CreateFile->setText(QCoreApplication::translate("MainWindow", "Create empty binary file", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "filename:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "filename to append:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Position:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        AppendFileButton->setText(QCoreApplication::translate("MainWindow", "Add this employee to file", nullptr));
        WriteButton->setText(QCoreApplication::translate("MainWindow", "Write pensioners in the file", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Start File name:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Result File name:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "filename:", nullptr));
        CheckEmpButton->setText(QCoreApplication::translate("MainWindow", "Check employees in file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
