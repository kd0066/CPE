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
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QLineEdit *fileNameEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *fileEdit;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinboxQt5;
    QSpacerItem *horizontalSpacer_5;
    QDial *dialQt5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *textBrowser_6;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *textBrowser_9;
    QTextEdit *filteredEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1168, 666);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        fileNameEdit = new QLineEdit(tab);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));

        horizontalLayout->addWidget(fileNameEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveButton = new QPushButton(tab);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        fileEdit = new QTextEdit(tab);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));

        verticalLayout_2->addWidget(fileEdit);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser_4 = new QTextBrowser(tab_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        verticalLayout_5->addWidget(textBrowser_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        spinboxQt5 = new QSpinBox(tab_3);
        spinboxQt5->setObjectName(QString::fromUtf8("spinboxQt5"));
        spinboxQt5->setReadOnly(false);
        spinboxQt5->setMaximum(9);

        horizontalLayout_3->addWidget(spinboxQt5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        dialQt5 = new QDial(tab_3);
        dialQt5->setObjectName(QString::fromUtf8("dialQt5"));
        dialQt5->setMaximum(9);
        dialQt5->setWrapping(false);

        horizontalLayout_3->addWidget(dialQt5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBrowser_5 = new QTextBrowser(tab_4);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));

        verticalLayout_4->addWidget(textBrowser_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 194, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        textBrowser_6 = new QTextBrowser(tab_5);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));

        verticalLayout_7->addWidget(textBrowser_6);

        tabWidget->addTab(tab_5, QString());
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

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1168, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Directions:    No collaboration!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">You "
                        "may use Qt Creator (including Qt Assistant) and the CPE 353 course pdf lecture notes on Canvas.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Use of any other resources will be considered cheating and will result in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">zero credit (0 points) </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">and additional penalties.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">When completing the tasks associated with each problem, you"
                        " may only modify the files </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mainwindow.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mainwindow.cpp   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT modify </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">main.cpp </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; fon"
                        "t-weight:600; color:#ff0000;\">and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">mainwindow.ui </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">(the form) or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">The text browser object at the top of each tab descibes the desired tasks associated with that tab -- you may need to </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; f"
                        "ont-weight:600; color:#ff000f;\">scroll</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> down to read the complete description.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Your goal is to make your program's behavior match that of the sample solution!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">See directions include sent via Canvas mail on how to execute a copy of the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Visit the Assignment tab in Canvas to upload both </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">mainwindow.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-"
                        "weight:600; color:#ff0000;\">mainwindow.cpp</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> as attachments to your Canvas assignment submission.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">Be sure both files are attached to each submission you make.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Directions", nullptr));
        textBrowser_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Using </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">C++/Qt statements</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to write text entered by user into a text edit object to a file </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-siz"
                        "e:13pt; font-weight:600;\">(20%)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) to write text entered by user into the </spa"
                        "n><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object to</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> the specified file </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileNameEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> upon clicking of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">saveButton</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Add Qt/C++ statements to validate the filename entered into</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> fileNameEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">(Filenames must have the form  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">XD.txt</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">  where X is one upper or lowercase letter, D is one digit 0-9 and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-we"
                        "ight:600; color:#ff0300;\">.txt</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> is the file extension)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Add Qt/C++ statement(s) that will display the filename entered into the status bar</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0p"
                        "x; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Add </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Qt/C++ statement(s) to</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> erase saved text from the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object and filename from </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-f"
                        "amily:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  the object names are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">fileNameEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">saveButton</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-fam"
                        "ily:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  a period may be included in a regular expression as  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt; font-weight:600; color:#0000ff;\">\\\\.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will re"
                        "ceive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "Filename", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "Save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "P01", nullptr));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Using </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Qt5-style connect </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">statements</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">(15%)</span></p>\n"
"<p sty"
                        "le=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Use a Qt5-style connect statement to link the changing of the left object's value to changing the right object's value</sp"
                        "an></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Use a Qt5-style connect statement to link the changing of the right object's value to changing the left object's value</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">"
                        "* NOTE:  on this problem you may only use built-in signals and built-in slots (No custom signals or custom slots allowed)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  left object named </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">spinboxQt5</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> and</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; f"
                        "ont-weight:600; color:#000000;\">right object named</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> dialQt5</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "P02", nullptr));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Reimplement the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">specific event handler</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">(20%)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following four tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will count the number of times the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">left mouse button</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> has been pressed </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will count the number of times the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0006ff;\">middle mouse button</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> has been pressed </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font"
                        "-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will count the number of times the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0008ff;\">right mouse button</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> has been pressed </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will write the counts for all three mouse buttons to the console whenever one of these three mouse buttons is pressed</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Be sure to click in the area below", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "P03", nullptr));
        textBrowser_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Pull-down menus and toolbars</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">(25%)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:60"
                        "0;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will add a menu called </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Options</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to this application</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Add </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Qt/C++ statement(s) to</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> add the the action </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">NonModal</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> to the Options menu and main tool bar</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* Add </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Qt/C++ statement(s) </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">that will make a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0003;\">nonmodal</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> dialog appear when the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">NonModal</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> action is triggered </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent"
                        ":0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) that will make clicking of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Close</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> button on the pop-up dialog close only the pop-up dialog</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'"
                        "; font-size:13pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the main form itself or to create the pop-up dialog or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "P04", nullptr));
        textBrowser_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Configuring and Installation of an </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Event Filter</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">(20%)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete the following tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* In the</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> MainWindow class, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">install</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> an </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font"
                        "-weight:600; color:#0000ff;\">event filter</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> (not an event handler) to intercept certain key press events destined for the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">filteredEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> object below.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* The event filter should output to a label located on the status bar text that indi"
                        "cates the button pressed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">  ** </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000bff;\">Insert</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> if the insert button is pressed and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">  ** </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0900ff;\">Delete</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> if the delete button is pressed  </span></p>\n"
"<p "
                        "style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff001e;\">The delete button must also delete text as normal.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lu"
                        "cida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">All other text input into the text edit object below must appear as normal.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  the name of the object below is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">filteredEdit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; "
                        "text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the main form itself or to create the pop-up dialog or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        filteredEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt;\">The user must be able to input text into this </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">filteredEdit</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt;\"> object and edit the text. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt;\">Your event filtering must not break the ability to use the text edit object to type and delete text.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "P05", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
