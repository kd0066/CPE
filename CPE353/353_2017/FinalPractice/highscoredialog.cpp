#include "highscoredialog.h"
#include "ui_highscoredialog.h"
#include <QDebug>


HighScoreDialog::HighScoreDialog(QSqlDatabase db, int newScore, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HighScoreDialog)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);

    score = newScore;

    ui->highScoreLabel->setText(QString::number(newScore));

    connect(ui->cancelButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
}

HighScoreDialog::~HighScoreDialog()
{
    delete ui;
}

void HighScoreDialog::addNewScore()
{
    if(ui->nameEdit->text().isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Error Please Enter Your Name in the Name Line Edit");
        msgBox.exec();
        return;
    }
    QSqlQuery q;

    q.prepare("INSERT INTO highscore VALUES(:name , :score)");
    q.bindValue(":name", ui->nameEdit->text());
    q.bindValue(":score", score);

    if(!q.exec())
    {
        qDebug() << "Error unable to insert row";
    }
    else
    {
        //model->setQuery("SELECT * FROM highscore");
    }
}
