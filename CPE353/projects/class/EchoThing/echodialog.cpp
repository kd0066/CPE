#include "echodialog.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

EchoDialog::EchoDialog() {
    QVBoxLayout* mainLayoutPtr = new QVBoxLayout(this);
    QVBoxLayout* inputLayoutPtr = new QVBoxLayout;
    QGridLayout* echoLayoutPtr = new QGridLayout;
    QHBoxLayout* buttonLayoutPtr = new QHBoxLayout;

    setWindowTitle("Double Echo Dialog");

    mainLayoutPtr -> addLayout(inputLayoutPtr);
    mainLayoutPtr -> addStretch();
    mainLayoutPtr -> addLayout(echoLayoutPtr);
    mainLayoutPtr -> addStretch();
    mainLayoutPtr -> addLayout(buttonLayoutPtr);

    QLabel* inputlablePtr = new QLabel("Type your input below here");

    userinputLineEditPtr = new QLineEdit;
    userinputLineEditPtr -> setMaxLength(MAX);
    userinputLineEditPtr -> setFrame(true);

    inputLayoutPtr -> addWidget(inputlablePtr);
    inputLayoutPtr -> addWidget(userinputLineEditPtr);

    QLabel* firstLabelPtr = new QLabel("Echo me");
    QLabel* secondLabelPtr = new QLabel("Echo me... again?");

    echolabelPtr = new QLabel;
    echolabelPtr -> setFrameShape(QFrame::Box);
    echoLineEditPtr = new QLineEdit;
    echoLineEditPtr -> setReadOnly(true);
    echoLineEditPtr -> setMaxLength(MAX);
    echoLineEditPtr -> setFrame(true);

    echoLayoutPtr -> addWidget(firstLabelPtr, 0, 0);
    echoLayoutPtr -> addWidget(echoLineEditPtr, 0, 1);
    echoLayoutPtr -> addWidget(secondLabelPtr, 1, 0);
    echoLayoutPtr -> addWidget(echolabelPtr, 1, 1);

    clearMe = new QPushButton("Clear");
    quitMe = new QPushButton("Quit");

    clearMe -> setDefault(true);
    buttonLayoutPtr -> addWidget(clearMe);
    buttonLayoutPtr -> addStretch();
    buttonLayoutPtr -> addWidget(quitMe);

    connect(quitMe, SIGNAL(clicked()), this, SLOT(accept()));
    connect(clearMe, SIGNAL(clicked()), userinputLineEditPtr, SLOT(clear()));
    connect(userinputLineEditPtr, SIGNAL(textChanged(QString)), echolabelPtr, SLOT(setText(QString)));
    connect(userinputLineEditPtr, SIGNAL(textChanged(QString)), echoLineEditPtr, SLOT(setText(QString)));

}
