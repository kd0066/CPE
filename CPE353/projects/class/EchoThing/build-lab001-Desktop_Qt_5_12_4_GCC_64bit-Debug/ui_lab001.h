/********************************************************************************
** Form generated from reading UI file 'lab001.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB001_H
#define UI_LAB001_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab001
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QRadioButton *radioButton;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_8;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Lab001)
    {
        if (Lab001->objectName().isEmpty())
            Lab001->setObjectName(QString::fromUtf8("Lab001"));
        Lab001->resize(483, 373);
        centralWidget = new QWidget(Lab001);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 100, 81, 64));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(329, 87, 131, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 220, 106, 26));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 220, 16, 20));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 260, 421, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(gridLayoutWidget_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 0, 1, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(190, 10, 104, 51));
        Lab001->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Lab001);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 483, 25));
        menuWidget = new QMenu(menuBar);
        menuWidget->setObjectName(QString::fromUtf8("menuWidget"));
        Lab001->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Lab001);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Lab001->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Lab001);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Lab001->setStatusBar(statusBar);

        menuBar->addAction(menuWidget->menuAction());

        retranslateUi(Lab001);

        QMetaObject::connectSlotsByName(Lab001);
    } // setupUi

    void retranslateUi(QMainWindow *Lab001)
    {
        Lab001->setWindowTitle(QApplication::translate("Lab001", "Lab001", nullptr));
        pushButton->setText(QApplication::translate("Lab001", "1", nullptr));
        pushButton_2->setText(QApplication::translate("Lab001", "3", nullptr));
        pushButton_3->setText(QApplication::translate("Lab001", "2", nullptr));
        pushButton_4->setText(QApplication::translate("Lab001", "4", nullptr));
        pushButton_5->setText(QApplication::translate("Lab001", "Go", nullptr));
        pushButton_7->setText(QApplication::translate("Lab001", "Stop", nullptr));
        pushButton_6->setText(QApplication::translate("Lab001", "Pause", nullptr));
        radioButton->setText(QApplication::translate("Lab001", "Bit Button", nullptr));
        label->setText(QApplication::translate("Lab001", "0", nullptr));
        pushButton_8->setText(QApplication::translate("Lab001", "Clear", nullptr));
        textEdit->setHtml(QApplication::translate("Lab001", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Lab001</span></p></body></html>", nullptr));
        menuWidget->setTitle(QApplication::translate("Lab001", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab001: public Ui_Lab001 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB001_H
