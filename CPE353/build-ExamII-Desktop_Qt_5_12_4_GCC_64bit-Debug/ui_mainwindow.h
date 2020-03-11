/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_2;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *textBrowser_9;
    QTextEdit *filteredEdit;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_8;
    QLineEdit *fileNameEdit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *textBrowser_10;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *usernameEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *modalButton;
    QRadioButton *nonmodalButton;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *spawnButton;
    QPushButton *closeButton;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowser_11;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *regexEdit;
    QLabel *label_5;
    QLineEdit *protectedEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *applyButton;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1072, 879);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_3 = new QVBoxLayout(tab_6);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textBrowser_2 = new QTextBrowser(tab_6);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        verticalLayout_3->addWidget(textBrowser_2);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_8 = new QVBoxLayout(tab_7);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        textBrowser_9 = new QTextBrowser(tab_7);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));

        verticalLayout_8->addWidget(textBrowser_9);

        filteredEdit = new QTextEdit(tab_7);
        filteredEdit->setObjectName(QString::fromUtf8("filteredEdit"));
        filteredEdit->setReadOnly(false);

        verticalLayout_8->addWidget(filteredEdit);

        tabWidget->addTab(tab_7, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser_8 = new QTextBrowser(tab);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));

        verticalLayout_2->addWidget(textBrowser_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout->addWidget(label_8);

        fileNameEdit = new QLineEdit(tab);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));

        horizontalLayout->addWidget(fileNameEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_7 = new QVBoxLayout(tab_2);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        textBrowser_10 = new QTextBrowser(tab_2);
        textBrowser_10->setObjectName(QString::fromUtf8("textBrowser_10"));

        verticalLayout_7->addWidget(textBrowser_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        usernameEdit = new QLineEdit(tab_2);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(usernameEdit);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        modalButton = new QRadioButton(groupBox);
        modalButton->setObjectName(QString::fromUtf8("modalButton"));
        modalButton->setChecked(true);

        verticalLayout_4->addWidget(modalButton);

        nonmodalButton = new QRadioButton(groupBox);
        nonmodalButton->setObjectName(QString::fromUtf8("nonmodalButton"));

        verticalLayout_4->addWidget(nonmodalButton);


        horizontalLayout_5->addWidget(groupBox);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        spawnButton = new QPushButton(tab_2);
        spawnButton->setObjectName(QString::fromUtf8("spawnButton"));

        verticalLayout_5->addWidget(spawnButton);

        closeButton = new QPushButton(tab_2);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout_5->addWidget(closeButton);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textBrowser_11 = new QTextBrowser(tab_3);
        textBrowser_11->setObjectName(QString::fromUtf8("textBrowser_11"));

        verticalLayout_6->addWidget(textBrowser_11);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        regexEdit = new QLineEdit(tab_3);
        regexEdit->setObjectName(QString::fromUtf8("regexEdit"));

        gridLayout->addWidget(regexEdit, 0, 1, 1, 1);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        protectedEdit = new QLineEdit(tab_3);
        protectedEdit->setObjectName(QString::fromUtf8("protectedEdit"));

        gridLayout->addWidget(protectedEdit, 1, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        applyButton = new QPushButton(tab_3);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_4->addWidget(applyButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1072, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "EXAM II", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Directions:    No collaboration!!  (scroll to read all instructions)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font"
                        "-size:13pt; font-weight:600;\">See the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Exam II Study Guide</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> for the list of approved resources.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Use of any other resources will be considered cheating and will result in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">zero credit (0 points) </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">and additional penalties.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Before you begin, review all problems and the tentative grading rubric so that you may allocate appropriate time for each problem.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">When completing the tasks associated with each problem, you may only modify the files </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mainwindow.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style"
                        "=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mainwindow.cpp</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">togglelabel.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">togglelabel.cpp</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT modify </span><"
                        "span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">main.cpp</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">mainwindow.ui </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">(the form) or </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">resources.qrc</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">The text browser object at the top of each tab descibes the desired tasks associated with that tab -- you may need to </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff000f;\">scroll</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> down to read the complete description.  Compare your work to the sample solution.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">See Canvas for directions on how to execute a copy of the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"><"
                        "br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Your goal is to make your program's behavior match that of the sample solution (while conforming to specified constraints)!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">When you are finished, create a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">ZIP</span><span style=\" font-family:'.Lucida Grande "
                        "UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> file of your </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">entire source code folder</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> and upload the ZIP file into CANVAS.   </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Be sure that you </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">ZIP</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">SOURCE CODE folder</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">(NOT th"
                        "e BUILD folder)</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">.   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">==&gt; CANVAS will only accept a ZIP format file &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">To create a</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> ZIP file, RIGHT-CLICK </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">on your</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> SOURCE CODE </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">directory and select</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> COMPRESS.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">Use the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">combo box</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-wei"
                        "ght:600; color:#000000;\"> to select the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">.zip</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> file extension and hit the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">CREATE </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">button.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\">==&gt; Be sure to veri"
                        "fy that you submitted the correct files for grading. &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#cc0000;\">Submissions that do not compile will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#cc0000;\">Submissions by email will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">You may use hand-written Qt4-style or Qt5-style connect statements on any of these exam problems.</span></"
                        "p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Directions", nullptr));
        textBrowser_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Reimplement and Install the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">eventFilter</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> method of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">MainWindow</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#00"
                        "0000;\"> class</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.  Scroll to see the complete list of tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* In the</span><span style=\" font-family:'.L"
                        "ucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> MainWindow class, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">install</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> an </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">event filter</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> (not an event handler) to intercept certain key press events destined for the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">filteredEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object below.  The reimplemented </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">eventFilter</span><span style=\" font-family:'.Lucida G"
                        "rande UI'; font-size:13pt; font-weight:600; color:#000000;\"> should perform the following tasks </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">WITHOUT</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> breaking the ability to edit text as normal</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** If the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Return </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">or </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Enter</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; colo"
                        "r:#000000;\"> buttons are pressed, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">*** the cursor should advance to the next line </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">*** </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">the next line must be numbered correctly</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">*** </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:60"
                        "0; color:#0617f3;\">two spaces must be added after the line number</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">*** the total number of lines must be displayed in the status bar of MainWindow</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff001e;\">The delete button must also delete text as normal.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span sty"
                        "le=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">All other text input into the text edit object below must appear as normal.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">The code that accomplishes these tasks must be in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">eventFilter </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> zero credit (0 points)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  the name of the object below is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">filteredEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Design"
                        "er tool to modify the mainwindow form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        filteredEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        filteredEdit->setPlaceholderText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "P01", nullptr));
        textBrowser_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Using </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">C++/Qt statements</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to add both a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Load action</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and a </span><span style=\" font-fam"
                        "ily:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Save action</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">File</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> pull-down menu</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.  Scroll to see complete list of tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) to implement the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Load action</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> which must read the contents of the file indicated by </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileNameEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> into </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">P01</span><span style=\" font-family:'.Lucida Grande UI'; font-size:"
                        "13pt; font-weight:600;\"> widget named </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">filteredEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Each line must be numbered correctly</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** The total number of lines in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">filteredEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> must be displayed in the status bar</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">** HINT: Use a LOOP to read through the file one line at a time</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Add Qt/C++ statement(s) to implement the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Save action </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">to write the entire contents of </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-wei"
                        "ght:600; color:#ff0000;\">P01</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">filteredEdit </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">to the file named by </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">fileNameEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Add </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-"
                        "weight:600;\">Qt/C++ statement(s) to</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> erase filename from </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileNameEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object when </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Load or Save action </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">is triggered</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">Sample files </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">f1.txt, f2.txt, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">and</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> f3.txt </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">are provided but other files may be used for grading.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Gran"
                        "de UI'; font-size:13pt; font-weight:600; color:#0000ff;\">==&gt; Files must be placed in the directory with the executable (typically the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">build</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> directory).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  the object name is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileNameEdit</span><span style=\" font-family:'.Lucida Grande UI'; "
                        "font-size:13pt; font-weight:600;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Enter Filename Here (see result of Load or Save action on P02 tab)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "P02", nullptr));
        textBrowser_10->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">Reimplement the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">mousePressEvent</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> method for the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">ToggleLab"
                        "el</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> class</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.  Scroll to see the complete list of tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'."
                        "Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Replace the starting text in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">usernameEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> with </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">your Linux account username</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* The </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">spawnButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> must perform the following tasks</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Create a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">popup dialog </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">containing two widgets </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">(1) a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">QLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> containing the text appearing in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">usernameEdit</span></p>\n"
"<p style"
                        "=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">   and </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">(2) one object of type </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">ToggleLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Popup </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#0617f3;\">modality</span><span style=\" font-family:'.Lucida Grande UI'; fo"
                        "nt-size:13pt; font-weight:600; color:#000000;\"> defined by radio button selected</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** The frame style of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">ToggleLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object should be </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">QFrame::WinPanel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Start by displaying the </span><span style=\" font-family:'.Lucida Grande UI'; font-s"
                        "ize:13pt; font-weight:600; color:#ff0000;\">0 (zero)</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> pixmap in the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">ToggleLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">closeButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> should close all non-modal popups but NOT the entire exam</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Modifications to the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">mousePressEvent</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> method of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">ToggleLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> class must perform the following tasks</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Each </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">left-mouse click</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> on the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">ToggleLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object must cause the pixmap displayed to </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">count upwards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Each </span><span style=\" font-family:'.Lucida Grande UI'; f"
                        "ont-size:13pt; font-weight:600; color:#ff0000;\">right-mouse click</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> on the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">ToggleLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object must cause the pixmap displayed to </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">count downwards</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** The counter must </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">wrap</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000"
                        "000;\"> appropriately in either direction</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Placing the code that performs these tasks elsewhere will result in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">zero credit (0 points)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  the name of the widgets below are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">usernameE"
                        "dit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">,</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> closeButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">spawnButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">,</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> modalButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">, and</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">  nonmodalButton</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the main form itself or create the popup dialog or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter Your Linux Username Below", nullptr));
        usernameEdit->setText(QApplication::translate("MainWindow", "<Replace this text with your Linux account username>", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Modality", nullptr));
        modalButton->setText(QApplication::translate("MainWindow", "Modal Popup", nullptr));
        nonmodalButton->setText(QApplication::translate("MainWindow", "Non-Modal Popup", nullptr));
        spawnButton->setText(QApplication::translate("MainWindow", "Spawn", nullptr));
        closeButton->setText(QApplication::translate("MainWindow", "Close Non-Modal Popups", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "P03", nullptr));
        textBrowser_11->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">Input Validation - add </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">regular expression</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> validation to protect </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#00"
                        "00ff;\">protectedEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.  Scroll to see the complete list of tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.SF NS Text'; font-size:13pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* The </span><span style=\" font-family:'.Luci"
                        "da Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">protectedEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object must initially allow arbitrary input</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* The </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">applyButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> must perform the following tasks</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Erase current contents of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">protectedEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">** Use the regular expression typed into the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">regexEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object to validate inputs into the </span><span style=\" font-family:'.Lucida Grande UI'"
                        "; font-size:13pt; font-weight:600; color:#0000ff;\">protectedEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff001e;\">After application of the new regular expression, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">protectedEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff"
                        "001e;\"> must reject all inputs that do not conform to the regular expression</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  the name of the objects below are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">applyButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">regexEdit </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; colo"
                        "r:#000000;\">and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">protectedEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the main form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "regexEdit Regular Expression (Type desired reg exp here ==>)", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "protectedEdit Requiring Validation is here ==>", nullptr));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "P04", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
