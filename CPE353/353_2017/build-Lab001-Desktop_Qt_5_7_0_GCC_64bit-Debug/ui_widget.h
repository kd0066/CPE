/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *headingLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *goButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *bitButton;
    QSpacerItem *horizontalSpacer;
    QLabel *bitLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QLineEdit *echoLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        headingLabel = new QLabel(Widget);
        headingLabel->setObjectName(QStringLiteral("headingLabel"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        headingLabel->setFont(font);

        horizontalLayout_4->addWidget(headingLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_2 = new QToolButton(Widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        gridLayout->addWidget(toolButton_2, 0, 1, 1, 1);

        toolButton_3 = new QToolButton(Widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        gridLayout->addWidget(toolButton_3, 1, 0, 1, 1);

        toolButton_4 = new QToolButton(Widget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        gridLayout->addWidget(toolButton_4, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        goButton = new QPushButton(Widget);
        goButton->setObjectName(QStringLiteral("goButton"));

        verticalLayout->addWidget(goButton);

        pauseButton = new QPushButton(Widget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        verticalLayout->addWidget(pauseButton);

        stopButton = new QPushButton(Widget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        verticalLayout->addWidget(stopButton);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bitButton = new QRadioButton(Widget);
        bitButton->setObjectName(QStringLiteral("bitButton"));

        horizontalLayout_2->addWidget(bitButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bitLabel = new QLabel(Widget);
        bitLabel->setObjectName(QStringLiteral("bitLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bitLabel->sizePolicy().hasHeightForWidth());
        bitLabel->setSizePolicy(sizePolicy);
        bitLabel->setMaximumSize(QSize(16777215, 16777215));
        bitLabel->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(bitLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        echoLineEdit = new QLineEdit(Widget);
        echoLineEdit->setObjectName(QStringLiteral("echoLineEdit"));

        horizontalLayout->addWidget(echoLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        headingLabel->setText(QApplication::translate("Widget", "Lab001", 0));
        toolButton->setText(QApplication::translate("Widget", "A", 0));
        toolButton_2->setText(QApplication::translate("Widget", "B", 0));
        toolButton_3->setText(QApplication::translate("Widget", "C", 0));
        toolButton_4->setText(QApplication::translate("Widget", "D", 0));
        goButton->setText(QApplication::translate("Widget", "Go", 0));
        pauseButton->setText(QApplication::translate("Widget", "Pause", 0));
        stopButton->setText(QApplication::translate("Widget", "Stop", 0));
        bitButton->setText(QApplication::translate("Widget", "Bit Button", 0));
        bitLabel->setText(QApplication::translate("Widget", "0", 0));
        clearButton->setText(QApplication::translate("Widget", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
