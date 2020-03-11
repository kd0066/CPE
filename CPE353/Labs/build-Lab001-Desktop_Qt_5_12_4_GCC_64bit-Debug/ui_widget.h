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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QPushButton *sendMe;
    QPushButton *pauseMe;
    QPushButton *stopMe;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *frameLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *clearme;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(533, 360);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_2 = new QToolButton(Widget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        gridLayout->addWidget(toolButton_2, 0, 1, 1, 1);

        toolButton_3 = new QToolButton(Widget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        gridLayout->addWidget(toolButton_3, 1, 0, 1, 1);

        toolButton_4 = new QToolButton(Widget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));

        gridLayout->addWidget(toolButton_4, 1, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sendMe = new QPushButton(Widget);
        sendMe->setObjectName(QString::fromUtf8("sendMe"));

        verticalLayout->addWidget(sendMe);

        pauseMe = new QPushButton(Widget);
        pauseMe->setObjectName(QString::fromUtf8("pauseMe"));

        verticalLayout->addWidget(pauseMe);

        stopMe = new QPushButton(Widget);
        stopMe->setObjectName(QString::fromUtf8("stopMe"));

        verticalLayout->addWidget(stopMe);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        frameLabel = new QLabel(Widget);
        frameLabel->setObjectName(QString::fromUtf8("frameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frameLabel->sizePolicy().hasHeightForWidth());
        frameLabel->setSizePolicy(sizePolicy);
        frameLabel->setMaximumSize(QSize(20, 20));
        frameLabel->setFrameShape(QFrame::WinPanel);
        frameLabel->setLineWidth(0);
        frameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(frameLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        clearme = new QPushButton(Widget);
        clearme->setObjectName(QString::fromUtf8("clearme"));

        horizontalLayout_4->addWidget(clearme);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "Lab001", nullptr));
        toolButton->setText(QApplication::translate("Widget", "1", nullptr));
        toolButton_2->setText(QApplication::translate("Widget", "2", nullptr));
        toolButton_3->setText(QApplication::translate("Widget", "3", nullptr));
        toolButton_4->setText(QApplication::translate("Widget", "4", nullptr));
        sendMe->setText(QApplication::translate("Widget", "Go", nullptr));
        pauseMe->setText(QApplication::translate("Widget", "Pause", nullptr));
        stopMe->setText(QApplication::translate("Widget", "Stop", nullptr));
        radioButton->setText(QApplication::translate("Widget", "RadioButton", nullptr));
        frameLabel->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        clearme->setText(QApplication::translate("Widget", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
