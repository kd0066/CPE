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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *leftLabel;
    QDial *leftDial;
    QSpacerItem *horizontalSpacer_3;
    QDial *rightDial;
    QLabel *rightLabel;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(629, 723);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(14);
        textBrowser->setFont(font1);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        leftLabel = new QLabel(Dialog);
        leftLabel->setObjectName(QString::fromUtf8("leftLabel"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        leftLabel->setFont(font2);
        leftLabel->setFrameShape(QFrame::WinPanel);

        horizontalLayout_2->addWidget(leftLabel);

        leftDial = new QDial(Dialog);
        leftDial->setObjectName(QString::fromUtf8("leftDial"));
        leftDial->setMaximum(5);
        leftDial->setValue(1);

        horizontalLayout_2->addWidget(leftDial);

        horizontalSpacer_3 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        rightDial = new QDial(Dialog);
        rightDial->setObjectName(QString::fromUtf8("rightDial"));
        rightDial->setMaximum(5);
        rightDial->setValue(5);

        horizontalLayout_2->addWidget(rightDial);

        rightLabel = new QLabel(Dialog);
        rightLabel->setObjectName(QString::fromUtf8("rightLabel"));
        rightLabel->setFont(font2);
        rightLabel->setFrameShape(QFrame::WinPanel);

        horizontalLayout_2->addWidget(rightLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Quiz01 - Section02", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">DIRECTIONS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Add the missing C++/Qt statements to exactly mimic behavior of sample solution.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">All connect statements must be </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">manually written Qt4-style connect statements only</span><span style=\" font-size:11pt; font-weight:600;\">. </span><span style=\" font-size:11pt; font-weight:600; color:#ff0000;\"> </span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#ff0000;\">Failure to follow these directions will result in ZERO credit! -- This rule overrides any score output by the autograder.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Su"
                        "bmit both  </span><span style=\" font-size:11pt; font-weight:600; color:#ff0000;\">dialog.h</span><span style=\" font-size:11pt; font-weight:600;\"> and </span><span style=\" font-size:11pt; font-weight:600; color:#ff0000;\">dialog.cpp </span><span style=\" font-size:11pt; font-weight:600;\"> each time you submit your work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">** Initialize </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">leftLabel</span><span style=\" font-size:11pt; font-weight:600;\"> and </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">leftDial</span><span style=\" font-size:11pt; font-weight:600;\"> to </span><span style=\""
                        " font-size:11pt; font-weight:600; color:#cc0000;\">0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">** Initialize </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">rightLabel</span><span style=\" font-size:11pt; font-weight:600;\"> and </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">rightDial</span><span style=\" font-size:11pt; font-weight:600;\"> to </span><span style=\" font-size:11pt; font-weight:600; color:#cc0000;\">5</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">** </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">leftLabel</span><span style=\" font-size:11pt; font-weight:600;\"> value must always match</span><span style=\" font-size:11pt; font-weight:600; color:"
                        "#0000ff;\"> leftDial </span><span style=\" font-size:11pt; font-weight:600;\">value</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">**</span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\"> rightLabel </span><span style=\" font-size:11pt; font-weight:600;\">value must always match </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">rightDial</span><span style=\" font-size:11pt; font-weight:600;\"> value</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">** both dials must </span><span style=\" font-size:11pt; font-weight:600; text-decoration: underline; color:#0000ff;\">always</span><span style=\" font-size:11pt; font-weight:600;\"> sum to </span><span style=\" font-size:11pt; font-weight:600; color:#cc000"
                        "0;\">5</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Widget Names:  </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">leftLabel</span><span style=\" font-size:11pt; font-weight:600;\">, </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">leftDial</span><span style=\" font-size:11pt; font-weight:600;\">, </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">rightLabel</span><span style=\" font-size:11pt; font-weight:600;\">, </span><span style=\" font-size:11pt; font-weight:600; color:#0000ff;\">rightDial</span></p></body></html>", nullptr));
        leftLabel->setText(QString());
        rightLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
