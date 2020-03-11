#include "dialog.h"
#include "ui_dialog.h"
#include <QHBoxLayout>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    /* Qt-4 style connect statments */
    connect(ui->spinBoxQt4, SIGNAL(valueChanged(int)), this, SLOT(updateDial()));
    connect(ui->dialQt4, SIGNAL(sliderMoved(int)), this, SLOT(updateQt4Spin()));

    /* Qt-5 style connect statments */
    connect(ui->myButton, &QPushButton::clicked, this, [=](){this->toggleUpAndDown();});
    connect(ui->sliderQt5, &QSlider::sliderMoved, this, [=](){this->updateQt5Spin();});
    connect(ui->leftDial, &QSlider::sliderMoved, this, [=](){this->updateSumLabel();});
    connect(ui->rightSlider, &QSlider::sliderMoved, this, [=](){this->updateSumLabel();});
    connect(ui->cheerButton, &QPushButton::clicked, this, [=](){this->modalCheerButtonPressed();});
    connect(ui->emitButton, &QPushButton::clicked, this, [=](){this->emitButtonPressed();});
    //connect(ui->spinBoxQt5, &QSpinBox::valueChanged, ui->sliderQt5, static_cast<void (QSlider::*) (int)> (&QSlider::setTickPosition));

}

Dialog::~Dialog()
{
    delete ui;
}


/*
 * Toggles the text in myButton and myLabel between "Up" and "Down"
 */
void Dialog::toggleUpAndDown()
{
    if(ui->myButton->text() == "Up")
    {
        ui->myButton->setText("Down");
        ui->myLabel->setText("Down");
    }
    else
    {
        ui->myButton->setText("Up");
        ui->myLabel->setText("Up");
    }
}

/*
 * Updates the position of the dial to match the value in the QSpinBox on the same tab
 */
void Dialog::updateDial()
{
    ui->dialQt4->setSliderPosition(ui->spinBoxQt4->text().toInt());
}

/*
 * Updates the value in the QSpinBox to match the position of the dial when it is moved
 */
void Dialog::updateQt4Spin()
{
    ui->spinBoxQt4->setValue(ui->dialQt4->sliderPosition());
}


/*
 * Updates the value in the QSpinBox to match the position of the slider when it is moved
 */
void Dialog::updateQt5Spin()
{
    ui->spinBoxQt5->setValue(ui->sliderQt5->sliderPosition());
}

/*
 * Updates the position of the slider to match the value in the QSpinBox on the same tab
 */
void Dialog::updateSlider()
{
    ui->sliderQt5->setSliderPosition(ui->spinBoxQt5->text().toInt());
}

/*
 * Updates the SumLabel adding the positions of both sliders on the page
 */
void Dialog::updateSumLabel()
{
    ui->sumLabel->setText(QString::number(ui->leftDial->sliderPosition() + ui->rightSlider->sliderPosition()));
}

void Dialog::modalCheerButtonPressed()
{
    QDialog popUp;
    QLabel c("Go Chargers!");
    QPushButton popUpClose;
    popUpClose.setText("Close");
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(&c);
    layout->addWidget(&popUpClose);
    popUp.setLayout(layout);

    connect(&popUpClose, &QPushButton::clicked, &popUp, &QDialog::accept);
    popUp.exec();
}

void Dialog::emitButtonPressed()
{
    emit mySignal(ui->messageEdit->text());
}

void Dialog::sendMessage(QString message)
{
    qDebug() << message;
}
