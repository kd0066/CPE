/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mysteryButton;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_5;
    QPushButton *toggleButton;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_9;
    QTextBrowser *textBrowser_6;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_19;
    QVBoxLayout *verticalLayout_8;
    QDial *rowDial;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *rowLabel;
    QSpacerItem *horizontalSpacer_20;
    QVBoxLayout *verticalLayout_6;
    QDial *columnDial;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *columnLabel;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *spawnButton;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_7;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_18;
    QGridLayout *gridLayout;
    QToolButton *button1;
    QToolButton *button2;
    QToolButton *button3;
    QToolButton *button4;
    QToolButton *button5;
    QToolButton *button6;
    QToolButton *button7;
    QToolButton *button8;
    QToolButton *button9;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *winnerButton;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_15;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1102, 781);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        verticalLayout->addWidget(textBrowser_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);
        lineEdit->setMaxLength(20);

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        mysteryButton = new QPushButton(tab_2);
        mysteryButton->setObjectName(QString::fromUtf8("mysteryButton"));
        mysteryButton->setFont(font1);

        horizontalLayout_4->addWidget(mysteryButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        toggleButton = new QPushButton(tab_2);
        toggleButton->setObjectName(QString::fromUtf8("toggleButton"));
        toggleButton->setFont(font1);

        horizontalLayout_4->addWidget(toggleButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_9 = new QVBoxLayout(tab_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        textBrowser_6 = new QTextBrowser(tab_6);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));

        verticalLayout_9->addWidget(textBrowser_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        rowDial = new QDial(tab_6);
        rowDial->setObjectName(QString::fromUtf8("rowDial"));
        rowDial->setMinimum(1);
        rowDial->setMaximum(10);
        rowDial->setPageStep(1);
        rowDial->setWrapping(false);
        rowDial->setNotchesVisible(true);

        verticalLayout_8->addWidget(rowDial);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_3);

        rowLabel = new QLabel(tab_6);
        rowLabel->setObjectName(QString::fromUtf8("rowLabel"));
        rowLabel->setFont(font1);
        rowLabel->setFrameShape(QFrame::WinPanel);
        rowLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(rowLabel);


        verticalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout_10->addLayout(verticalLayout_8);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        columnDial = new QDial(tab_6);
        columnDial->setObjectName(QString::fromUtf8("columnDial"));
        columnDial->setMinimum(1);
        columnDial->setMaximum(10);
        columnDial->setPageStep(1);
        columnDial->setWrapping(false);
        columnDial->setNotchesVisible(true);

        verticalLayout_6->addWidget(columnDial);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_4);

        columnLabel = new QLabel(tab_6);
        columnLabel->setObjectName(QString::fromUtf8("columnLabel"));
        columnLabel->setFont(font1);
        columnLabel->setFrameShape(QFrame::WinPanel);
        columnLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(columnLabel);


        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_6);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        spawnButton = new QPushButton(tab_6);
        spawnButton->setObjectName(QString::fromUtf8("spawnButton"));
        spawnButton->setFont(font1);

        horizontalLayout_11->addWidget(spawnButton);


        verticalLayout_9->addLayout(horizontalLayout_11);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_5 = new QVBoxLayout(tab_7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser_7 = new QTextBrowser(tab_7);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));

        verticalLayout_5->addWidget(textBrowser_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_18);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button1 = new QToolButton(tab_7);
        button1->setObjectName(QString::fromUtf8("button1"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/green.png"), QSize(), QIcon::Normal, QIcon::On);
        button1->setIcon(icon);
        button1->setIconSize(QSize(30, 30));
        button1->setCheckable(true);

        gridLayout->addWidget(button1, 0, 0, 1, 1);

        button2 = new QToolButton(tab_7);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setIcon(icon);
        button2->setIconSize(QSize(30, 30));
        button2->setCheckable(true);

        gridLayout->addWidget(button2, 0, 1, 1, 1);

        button3 = new QToolButton(tab_7);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setIcon(icon);
        button3->setIconSize(QSize(30, 30));
        button3->setCheckable(true);

        gridLayout->addWidget(button3, 0, 2, 1, 1);

        button4 = new QToolButton(tab_7);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setIcon(icon);
        button4->setIconSize(QSize(30, 30));
        button4->setCheckable(true);

        gridLayout->addWidget(button4, 1, 0, 1, 1);

        button5 = new QToolButton(tab_7);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setIcon(icon);
        button5->setIconSize(QSize(30, 30));
        button5->setCheckable(true);

        gridLayout->addWidget(button5, 1, 1, 1, 1);

        button6 = new QToolButton(tab_7);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setIcon(icon);
        button6->setIconSize(QSize(30, 30));
        button6->setCheckable(true);

        gridLayout->addWidget(button6, 1, 2, 1, 1);

        button7 = new QToolButton(tab_7);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setIcon(icon);
        button7->setIconSize(QSize(30, 30));
        button7->setCheckable(true);

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        button8 = new QToolButton(tab_7);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setIcon(icon);
        button8->setIconSize(QSize(30, 30));
        button8->setCheckable(true);

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        button9 = new QToolButton(tab_7);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setIcon(icon);
        button9->setIconSize(QSize(30, 30));
        button9->setCheckable(true);

        gridLayout->addWidget(button9, 2, 2, 1, 1);


        horizontalLayout_12->addLayout(gridLayout);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_22);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        winnerButton = new QPushButton(tab_7);
        winnerButton->setObjectName(QString::fromUtf8("winnerButton"));
        winnerButton->setFont(font1);

        horizontalLayout_6->addWidget(winnerButton);

        resetButton = new QPushButton(tab_7);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setFont(font1);

        horizontalLayout_6->addWidget(resetButton);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);


        verticalLayout_5->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_7, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Exam IB", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Directions:    No collaboration!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">See "
                        "the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Exam I Study Guide</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> for the list of approved resources.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Use of any other resources will be considered cheating and will result in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">zero credit (0 points) </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">and additional penalties.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">When completing the tasks associated with each problem, you may only modify the files </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">dialog.cpp   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT modify </span><span style=\" f"
                        "ont-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">main.cpp </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">dialog.ui </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">(the form) or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Before you begin, review all problems and th"
                        "e grading rubric so that you may allocate appropriate time for each problem.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">The text browser object at the top of each tab descibes the desired task associated with that tab -- you may need to scroll down to read the complete description.  Compare your work to the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:18pt; font-weight:600; color:#0000ff;\">Your goal is to make your program's behavior match that of the sample solution (while conforming to specified constraints)!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">See Canvas for directions on how to execute a copy of the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><"
                        "br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">When you are finished, upload both </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">dialog.cpp</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> as attachments to your Canvas dropbox submission.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Be sure both files are attached to each submission you make.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\">==&gt; Be sure to verify that you submitted the correct files for grading. &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#cc0000;\">Submissions that do not comp"
                        "ile will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#cc0000;\">Submissions by email will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size"
                        ":13pt; font-weight:600; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">You may use hand-written Qt4-style or Qt5-style connect statements on any of these exam problems.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Directions", nullptr));
        textBrowser_2->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Using </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">C++ statements</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to interact with form widgets and modify widget properties</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size"
                        ":13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Add Qt/C++ statement(s) to l</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">oad </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">YOUR-LINUX-ACCOUNT-USERNAME</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> into the widget </span><span style=\" font-family"
                        ":'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mysteryButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">** For example, if your username is </span><span style=\" font-weight:600; color:#ff0000;\">abc1234</span><span style=\" font-weight:600;\"> then initialize </span><span style=\" font-weight:600; color:#0000ff;\">mysteryButton </span><span style=\" font-weight:600;\">with the text </span><span style=\" font-weight:600; color:#ff0000;\">abc1234</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Add Qt/C++ statement(s) to load the text </span><span style=\" font-family:'.Lucida Grande UI'; f"
                        "ont-size:13pt; font-weight:600; color:#0000ff;\">Disable</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> into the widget </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">toggleButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Add Qt/C++ statement(s) to change</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> the text displayed within the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mysteryButton</span><span style=\" fon"
                        "t-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object with each press of </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mysteryButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">   ** If </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">lineEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> has no text, then </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mysteryButton </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; colo"
                        "r:#000000;\">should display BLANK</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">   ** If </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">lineEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> has text, then </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mysteryButton </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">should display the text shown in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">lineEdit  </span><span style=\" font-family:'."
                        "Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br />   **</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">After updating the button text, you must erase the contents of </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">lineEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-wei"
                        "ght:600;\">Add Qt/C++ statement(s) to enable/disable typing into </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">lineEdit </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">by toggling the read only flag</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** When read only is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">false</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">toggleButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> should read </span><span style=\" font-family:'.Lucida Grande UI'; font-siz"
                        "e:13pt; font-weight:600; color:#0000ff;\">Disable</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** When read only is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">true</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">toggleButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> should read </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Enable</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:"
                        "13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT: Left QPushButton object named </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mysteryButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">, right QPushButton object named </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">toggleButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> and a QLineEdit object named </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">lineEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Enter Mystery Button Text Here", nullptr));
        mysteryButton->setText(QApplication::translate("Dialog", "mysteryButton", nullptr));
        label_5->setText(QApplication::translate("Dialog", "Line Edit Input", nullptr));
        toggleButton->setText(QApplication::translate("Dialog", "toggleButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "P1", nullptr));
        textBrowser_6->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topics:  Adding layouts and widgets to a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">NON-MODAL</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> pop-up dialog using </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">C++ statements</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* The two dials have a range from 1 to 10.  Initalize </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">rowLabel</span><span style=\" font-family:'.Lucida Grande UI'; font"
                        "-size:13pt; font-weight:600;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">columnLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">1</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">rowLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> must always match </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">rowDial</span><span style=\" font"
                        "-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">columnLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> must always match </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">columnDial</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will display, each time the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">spawnBu"
                        "tton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> is pressed, create a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">non-modal</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> pop-up dialog that displays </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ef2929;\">ROWS x COLUMNS</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QLabels </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">in a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#ef2929;\">grid layout</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and a </"
                        "span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Close button</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">(do not use Designer to create this new dialog form)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Each </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> must include a visible frame</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; fo"
                        "nt-weight:600;\">** Add Qt/C++ statement(s) that will cause </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#0000ff;\">each of the grid labels on the pop-up dialog</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">to be numbered correctly with its </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ef2929;\">ROW POSITION</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> within the grid layout</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Add Qt/C++ statement(s) that will cause the pop-up dialog to close when the user clicks on the </span><sp"
                        "an style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Close</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">button</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">.  The </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Close button</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> on the pop-up dialog must close </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline;\">only</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> the pop-up dialog, NOT the entire exam dialog!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that make a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QVBoxLayout</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> the top-level layout of widgets on the pop-up dialog.  The </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGridLayout </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">is NOT the top-level layout of the pop-up dialog!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  the names of the widgets are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">rowDial</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">rowLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">columnDial</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; "
                        "font-weight:600; color:#0000ff;\">columnLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">spawnButton</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the main form itself or to create the pop-up dialog or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty;"
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Rows", nullptr));
        rowLabel->setText(QApplication::translate("Dialog", "rowLabel", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Columns", nullptr));
        columnLabel->setText(QApplication::translate("Dialog", "columnLabel", nullptr));
        spawnButton->setText(QApplication::translate("Dialog", "Spawn", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Dialog", "P2", nullptr));
        textBrowser_7->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Emit custom signal with payload</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\""
                        ">Complete the following tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Below is a 3x3 grid of QToolButton widgets.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* A </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">checked </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">button displays a </span><span style=\" font-family:'.Lucida Grande UI'; fon"
                        "t-size:13pt; font-weight:600; color:#0000ff;\">Green G icon</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* An </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">unchecked</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> button displays a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">RED R icon</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Gra"
                        "nde UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) such that if </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">winnerButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> is clicked, your code will emit the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline;\">custom signal</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> named </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">updateStatus</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Signal payload must be </span><span sty"
                        "le=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">true</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> if any three tool buttons in the same row, column or diagonal are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#0000ff;\">checked</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Signal payload must be </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">false</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> otherwise</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande"
                        " UI'; font-size:13pt; font-weight:600;\">** The provided code in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">main.cpp</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> will output </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline;\">winner</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline;\">loser</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to the debug console in response to the custom signal and its payload</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">uncheck</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> all nine QToolButtons when the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">resetButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> is clicked</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  widget names are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">resetButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">winnerButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, and the tool buttons are named as follows</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">    button1</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; "
                        "color:#0000ff;\">button2</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">button3</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">    button4</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">button5</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">button6</span><span style=\" font-family:'.Lucida Grande U"
                        "I'; font-size:13pt; font-weight:600;\">, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">    button7</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">button8</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">button9</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the main form itself or to create the pop-up dialog or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p></body></html>", nullptr));
        button1->setText(QApplication::translate("Dialog", "...", nullptr));
        button2->setText(QApplication::translate("Dialog", "...", nullptr));
        button3->setText(QApplication::translate("Dialog", "...", nullptr));
        button4->setText(QApplication::translate("Dialog", "...", nullptr));
        button5->setText(QApplication::translate("Dialog", "...", nullptr));
        button6->setText(QApplication::translate("Dialog", "...", nullptr));
        button7->setText(QApplication::translate("Dialog", "...", nullptr));
        button8->setText(QApplication::translate("Dialog", "...", nullptr));
        button9->setText(QApplication::translate("Dialog", "...", nullptr));
        winnerButton->setText(QApplication::translate("Dialog", "Winner?", nullptr));
        resetButton->setText(QApplication::translate("Dialog", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Dialog", "P3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
