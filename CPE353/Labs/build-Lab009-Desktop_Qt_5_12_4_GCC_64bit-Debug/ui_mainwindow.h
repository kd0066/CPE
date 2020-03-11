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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiondavidsButton;
    QAction *actionhosButton;
    QAction *actionaleksbutton;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(341, 388);
        actiondavidsButton = new QAction(MainWindow);
        actiondavidsButton->setObjectName(QString::fromUtf8("actiondavidsButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/David_Coe.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondavidsButton->setIcon(icon);
        actionhosButton = new QAction(MainWindow);
        actionhosButton->setObjectName(QString::fromUtf8("actionhosButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/ho.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionhosButton->setIcon(icon1);
        actionaleksbutton = new QAction(MainWindow);
        actionaleksbutton->setObjectName(QString::fromUtf8("actionaleksbutton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/am.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionaleksbutton->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 341, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actiondavidsButton);
        mainToolBar->addAction(actionhosButton);
        mainToolBar->addAction(actionaleksbutton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actiondavidsButton->setText(QApplication::translate("MainWindow", "davidsButton", nullptr));
        actionhosButton->setText(QApplication::translate("MainWindow", "hosButton", nullptr));
        actionaleksbutton->setText(QApplication::translate("MainWindow", "aleksbutton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
