/********************************************************************************
** Form generated from reading UI file 'lab001b.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB001B_H
#define UI_LAB001B_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab001b
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QRadioButton *radioButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *ClearMe;
    QPlainTextEdit *LineEdit;
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

    void setupUi(QWidget *Lab001b)
    {
        if (Lab001b->objectName().isEmpty())
            Lab001b->setObjectName(QString::fromUtf8("Lab001b"));
        Lab001b->resize(537, 334);
        textEdit = new QTextEdit(Lab001b);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 10, 104, 51));
        label = new QLabel(Lab001b);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(381, 203, 16, 20));
        radioButton = new QRadioButton(Lab001b);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 200, 106, 26));
        gridLayoutWidget_2 = new QWidget(Lab001b);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 250, 421, 72));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ClearMe = new QPushButton(gridLayoutWidget_2);
        ClearMe->setObjectName(QString::fromUtf8("ClearMe"));

        gridLayout_2->addWidget(ClearMe, 0, 0, 1, 1);

        LineEdit = new QPlainTextEdit(gridLayoutWidget_2);
        LineEdit->setObjectName(QString::fromUtf8("LineEdit"));

        gridLayout_2->addWidget(LineEdit, 0, 1, 1, 1);

        gridLayoutWidget = new QWidget(Lab001b);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 90, 81, 64));
        gridLayout = new QGridLayout(gridLayoutWidget);
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

        verticalLayoutWidget = new QWidget(Lab001b);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(380, 90, 131, 98));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
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


        retranslateUi(Lab001b);

        QMetaObject::connectSlotsByName(Lab001b);
    } // setupUi

    void retranslateUi(QWidget *Lab001b)
    {
        Lab001b->setWindowTitle(QApplication::translate("Lab001b", "Form", nullptr));
        textEdit->setHtml(QApplication::translate("Lab001b", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Lab001</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Lab001b", "0", nullptr));
        radioButton->setText(QApplication::translate("Lab001b", "Bit Button", nullptr));
        ClearMe->setText(QApplication::translate("Lab001b", "Clear", nullptr));
        pushButton->setText(QApplication::translate("Lab001b", "1", nullptr));
        pushButton_2->setText(QApplication::translate("Lab001b", "3", nullptr));
        pushButton_3->setText(QApplication::translate("Lab001b", "2", nullptr));
        pushButton_4->setText(QApplication::translate("Lab001b", "4", nullptr));
        pushButton_5->setText(QApplication::translate("Lab001b", "Go", nullptr));
        pushButton_7->setText(QApplication::translate("Lab001b", "Stop", nullptr));
        pushButton_6->setText(QApplication::translate("Lab001b", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab001b: public Ui_Lab001b {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB001B_H
