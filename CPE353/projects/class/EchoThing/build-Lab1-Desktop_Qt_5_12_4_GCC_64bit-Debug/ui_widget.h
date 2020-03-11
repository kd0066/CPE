/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *go;
    QPushButton *stop;
    QPushButton *pause;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *bitButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearMe;
    QLineEdit *uLineEdit;
    QTextEdit *textEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QLabel *newLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(501, 373);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 110, 168, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(gridLayoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout->addWidget(toolButton, 1, 2, 1, 1);

        toolButton_2 = new QToolButton(gridLayoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        gridLayout->addWidget(toolButton_2, 1, 3, 1, 1);

        toolButton_3 = new QToolButton(gridLayoutWidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        gridLayout->addWidget(toolButton_3, 2, 2, 1, 1);

        toolButton_4 = new QToolButton(gridLayoutWidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));

        gridLayout->addWidget(toolButton_4, 2, 3, 1, 1);

        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(280, 100, 160, 98));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        go = new QPushButton(verticalLayoutWidget);
        go->setObjectName(QString::fromUtf8("go"));

        verticalLayout->addWidget(go);

        stop = new QPushButton(verticalLayoutWidget);
        stop->setObjectName(QString::fromUtf8("stop"));

        verticalLayout->addWidget(stop);

        pause = new QPushButton(verticalLayoutWidget);
        pause->setObjectName(QString::fromUtf8("pause"));

        verticalLayout->addWidget(pause);

        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 250, 111, 28));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bitButton = new QRadioButton(horizontalLayoutWidget);
        bitButton->setObjectName(QString::fromUtf8("bitButton"));

        horizontalLayout->addWidget(bitButton);

        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 300, 421, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        clearMe = new QPushButton(horizontalLayoutWidget_2);
        clearMe->setObjectName(QString::fromUtf8("clearMe"));

        horizontalLayout_2->addWidget(clearMe);

        uLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        uLineEdit->setObjectName(QString::fromUtf8("uLineEdit"));

        horizontalLayout_2->addWidget(uLineEdit);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(200, 10, 121, 51));
        horizontalLayoutWidget_3 = new QWidget(Widget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(361, 250, 20, 21));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(horizontalLayoutWidget_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        newLabel = new QLabel(frame);
        newLabel->setObjectName(QString::fromUtf8("newLabel"));
        newLabel->setGeometry(QRect(0, 0, 16, 20));

        horizontalLayout_3->addWidget(frame);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        toolButton->setText(QApplication::translate("Widget", "1", nullptr));
        toolButton_2->setText(QApplication::translate("Widget", "2", nullptr));
        toolButton_3->setText(QApplication::translate("Widget", "3", nullptr));
        toolButton_4->setText(QApplication::translate("Widget", "4", nullptr));
        go->setText(QApplication::translate("Widget", "Go", nullptr));
        stop->setText(QApplication::translate("Widget", "Stop", nullptr));
        pause->setText(QApplication::translate("Widget", "Pause", nullptr));
        bitButton->setText(QApplication::translate("Widget", "Bit Button", nullptr));
        clearMe->setText(QApplication::translate("Widget", "Clear", nullptr));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Lab001</span></p></body></html>", nullptr));
        newLabel->setText(QApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
