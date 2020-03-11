#include "dialog.h"
#include "ui_dialog.h"

#include "mydialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    /* both Qt 4 and Qt 5 connect statements */

    /* Qt 4*/
    //connect(ui->closeButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
    //connect(ui->modalButton, SIGNAL(clicked(bool)), this, SLOT(modalButtonPressed()));
    //connect(ui->nonmodalButton, SIGNAL(clicked(bool)), this, SLOT(nonmodalButtonPressed()));
    //connect(ui->customButton, SIGNAL(clicked(bool)), this, SLOT(customButtonPressed()));

    /*Qt 5*/
    connect(ui->closeButton, &QPushButton::clicked, this, [=](){this->accept();});
    connect(ui->modalButton, &QPushButton::clicked, this, [=](){this->modalButtonPressed();});
    connect(ui->nonmodalButton, &QPushButton::clicked, this, [=]{this->nonmodalButtonPressed();});
    connect(ui->customButton, &QPushButton::clicked, this, [=](){this->customButtonPressed();});
}

Dialog::~Dialog()
{
    delete ui;
}

/*
 * Creates a statically allocated dialog
 */
void Dialog::modalButtonPressed()
{
    QDialog d;
    QLabel l("Hello");
    QLabel w("world");
    QLabel m("Modal");
    QVBoxLayout *layout = new QVBoxLayout;
    d.setLayout(layout);
    layout->addWidget(&l);
    layout->addStretch();
    layout->addWidget(&w);
    layout->addStretch();
    layout->addWidget(&m);

    d.exec();
}

/*
 * Creates dynamically allocated dialogs
 */
void Dialog::nonmodalButtonPressed()
{
    QDialog *d = new QDialog;
    QLabel *l   = new QLabel("Hello");
    QLabel *w   = new QLabel("World");
    QLabel *m   = new QLabel("Non-modal");

    QVBoxLayout *layout = new QVBoxLayout;
    d->setLayout(layout);
    layout->addWidget(l);
    layout->addStretch();
    layout->addWidget(w);
    layout->addStretch();
    layout->addWidget(m);

    d->show();
}

void Dialog::customButtonPressed()
{
    MyDialog *md = new MyDialog;

    md->exec();
}

