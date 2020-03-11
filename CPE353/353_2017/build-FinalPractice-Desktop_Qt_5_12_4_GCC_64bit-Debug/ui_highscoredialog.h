/********************************************************************************
** Form generated from reading UI file 'highscoredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCOREDIALOG_H
#define UI_HIGHSCOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HighScoreDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *highScoreLabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *HighScoreDialog)
    {
        if (HighScoreDialog->objectName().isEmpty())
            HighScoreDialog->setObjectName(QString::fromUtf8("HighScoreDialog"));
        HighScoreDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(HighScoreDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(HighScoreDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HighScoreDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(HighScoreDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout->addWidget(nameEdit);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HighScoreDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        highScoreLabel = new QLabel(HighScoreDialog);
        highScoreLabel->setObjectName(QString::fromUtf8("highScoreLabel"));

        horizontalLayout_2->addWidget(highScoreLabel);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cancelButton = new QPushButton(HighScoreDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        okButton = new QPushButton(HighScoreDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_3->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HighScoreDialog);

        QMetaObject::connectSlotsByName(HighScoreDialog);
    } // setupUi

    void retranslateUi(QDialog *HighScoreDialog)
    {
        HighScoreDialog->setWindowTitle(QApplication::translate("HighScoreDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("HighScoreDialog", "Name:", nullptr));
        label_2->setText(QApplication::translate("HighScoreDialog", "New High Score", nullptr));
        highScoreLabel->setText(QApplication::translate("HighScoreDialog", "0", nullptr));
        cancelButton->setText(QApplication::translate("HighScoreDialog", "Cancel", nullptr));
        okButton->setText(QApplication::translate("HighScoreDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HighScoreDialog: public Ui_HighScoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCOREDIALOG_H
