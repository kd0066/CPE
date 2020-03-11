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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowser_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *imageLabel;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_10;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_5;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *button;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSlider *slider;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(947, 674);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

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
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textBrowser_8 = new QTextBrowser(tab);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));

        verticalLayout_6->addWidget(textBrowser_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        imageLabel = new QLabel(tab);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setMinimumSize(QSize(240, 180));
        imageLabel->setMaximumSize(QSize(240, 180));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        imageLabel->setFont(font1);
        imageLabel->setFrameShape(QFrame::Box);
        imageLabel->setAlignment(Qt::AlignCenter);
        imageLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(imageLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_4);

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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout);

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

        graphicsView = new QGraphicsView(tab_4);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setRenderHints(QPainter::HighQualityAntialiasing|QPainter::TextAntialiasing);

        verticalLayout_4->addWidget(graphicsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        button = new QPushButton(tab_4);
        button->setObjectName(QString::fromUtf8("button"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        button->setFont(font2);

        horizontalLayout_2->addWidget(button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);

        horizontalLayout_2->addWidget(label_2);

        slider = new QSlider(tab_4);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimum(1);
        slider->setMaximum(10);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider);

        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 947, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ExamIIIA", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Exam IIIA", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Directions:    No collaboration!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">You "
                        "may use the resources listed in the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Exam III study guide</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Use of any other resources will be considered cheating and will result in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">zero credit (0 points) </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">and additional penalties.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">When completing the tasks associated with each problem, you may only modify the files </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mainwindow.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">mainwindow.cpp</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">,</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> label.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">label.cpp </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px;"
                        " margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT modify </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">main.cpp </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">and </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">mainwindow.ui </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">(the form) or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-"
                        "top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">The text browser object at the top of each tab descibes the desired tasks associated with that tab -- you may need to </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff000f;\">scroll</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> down to read the complete description.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Your goal is to make your program's behavior match that of the sample solution!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">See directions sent via Canvas mail on how to execute a copy of the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">Visit the Assignment tab in Canvas to upload </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">YOUR ZIPPED SOURCE CODE FOLDER </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">as an attachment to your Canvas assignment submission.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#"
                        "0617f3;\">** Right click on </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">ExamIIIA</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> source code folder and select </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#aa00ff;\">COMPRESS</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">** Accept default options and click on </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#aa00ff;\">CREATE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\">** Submit ZIP file via Canvas</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">See submission instructions appearing on Canvas assignment page for Exam III.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0617f3;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Directions", nullptr));
        textBrowser_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Use </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">C++/Qt statements</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to receive and display an image file transmitted via </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">TCP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete all of the following tasks for full credit.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Scroll down to see all tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Test  your work with Netcat.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; font-style:italic; color:#ff0000;\">Start Netcat first!!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">nc  -l  127.0.0.1  5678  &lt;  IMAGE-FILENAME-GOES-HERE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Three sample images are included  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#aa00ff;\">bear.jpg</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#aa00ff;\">otter.jpg</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, and </span><span style=\" font-family:'.Lucida Grande UI"
                        "'; font-size:13pt; font-weight:600; color:#aa00ff;\">tiger.jpg</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* HINT: You may need to copy the images into your build directory</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add Qt/C++ statement(s) to perform the following tasks </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida G"
                        "rande UI'; font-size:13pt; font-weight:600;\">**  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">Read from</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> the</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\"> TCP socket </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">into a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QByteArray</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">**  Load image into </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-w"
                        "eight:600; color:#0000ff;\">QPixmap</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">**  Use </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QPainter</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> object to overlay image size in bytes in size 96 point text </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline;\">BEFORE</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> scaling and loading image into </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">imageLabel  </span><span style=\" font-family:'.Lu"
                        "cida Grande UI'; font-size:13pt; font-weight:600; color:#5c3566;\">(no credit if overlay is unreadable)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">**  Scale pixmap to 240 x 180</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">**  Load pixmap into </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">imageLabel</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font"
                        "-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  see </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QPainter</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> help for assisance with font</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  the object name is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">imageLabel</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  ==&gt; NO DATASTREAM OBJECTS &lt;==</sp"
                        "an></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p></body></html>", nullptr));
        imageLabel->setText(QApplication::translate("MainWindow", "DISPLAY IMAGE WITH IMAGE SIZE TEXT OVERLAY HERE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "P01", nullptr));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Use </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">C++/Qt statements</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to implement drag-and-drop of current contents (</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">TEXT or PIXMAP to and from</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weig"
                        "ht:600;\">) custom </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Label</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> objects.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete all of the following tasks for full credit.  </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Scroll down to see all tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fam"
                        "ily:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">*  Create a custom </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#800080;\">drag-and-drop Label class </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">that will allow transfer of </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">TEXT</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">PIXMAP</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> from one Label object to another Label object.  I have already created </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">label.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and </span><span s"
                        "tyle=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">label.cpp</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">*  Drag-and-drop of current Label object contents  (</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">TEXT </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">or </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">PIXMAP</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight"
                        ":600; color:#000000;\">) from one Label object to another Label object should work in </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">both directions</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">HINT:  place your code in the</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> Label </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">class</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "P02", nullptr));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Topic:  Use Qt/C++ statements to create a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">solar system model</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">Complete all of the following tasks for full credit.  </span><span style=\" font-family:'.Lucida Gr"
                        "ande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">Scroll down to see all tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Create a 400 x 300 </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsScene</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> object with a local origin at (200, 150) </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;"
                        "\">** Apply a black background to the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsScene</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Display contents of scene object using the view object that is already on the form</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add a </span><spa"
                        "n style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline;\">white circle</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> (bounded by a 200x200 square) centered about the origin</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#8f5902;\">yellow sun</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> with diameter </span><span style=\" font-family:'.Lucida Grande UI'; fo"
                        "nt-size:13pt; font-weight:600; color:#8f5902;\">sunD</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> centered about the origin</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#ff0000;\">red planet</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsEllipseItem</span><span style=\" font-family:'.Lucida "
                        "Grande UI'; font-size:13pt; font-weight:600;\"> to the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsScene </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">object with diameter </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">redD</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and orbit radius </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">redOrbit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI"
                        "'; font-size:13pt; font-weight:600;\">* Add a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#4e9a06;\">green planet</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsEllipseItem</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsScene</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> object diameter </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#4e9a06;\">greenD</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and orbit radius </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font"
                        "-weight:600; color:#4e9a06;\">greenOrbit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Add a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; text-decoration: underline; color:#0000ff;\">blue planet</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">QGraphicsEllipseItem</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> to the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; f"
                        "ont-weight:600; color:#0000ff;\">QGraphicsScene</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> object with diameter </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">blueD</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> and orbit radius </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">blueOrbit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Use a </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-wei"
                        "ght:600; color:#0000ff;\">QTimer </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">object to force the planets to orbit at the specified rates</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** The default rate of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">red planet</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">6 degrees</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> every 16.66667 msec </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-famil"
                        "y:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** The default rate of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#4e9a06;\">green planet</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> is </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#4e9a06;\">0.1 degrees</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> every 16.66667 msec </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** The default rate of the </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">blue planet</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> is </span><span style=\" font-family:'.Lucida Gr"
                        "ande UI'; font-size:13pt; font-weight:600; color:#0000ff;\">0.0083333</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"> degrees every 16.66667 msec</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Planets must start perfectly aligned as in sample solution</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inden"
                        "t:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">** Planet orbit rates must be match the sample solution</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* Slider must control rate of rotation rate of all planets from the default speed up to 10 times normal speed  (x1 = wall clock time)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* button should start/stop timer</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">* button text must reflect current state</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">HINT:  object names are </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">button</"
                        "span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600;\">, </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">graphicsView </span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\">and</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\"> slider</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#aa00ff;\">HINT:  you don't have to create a new custom datatype that inherits from QGraphicsItem</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0p"
                        "x; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#ff0000;\">Do NOT use the Designer tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:600; color:#000000;\"> zero credit (0 points).</span></p></body></html>", nullptr));
        button->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "x1", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "x10", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "P03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
