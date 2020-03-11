#ifndef HIGHSCOREDIALOG_H
#define HIGHSCOREDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>


namespace Ui {
class HighScoreDialog;
}

class HighScoreDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HighScoreDialog(QSqlDatabase db, int score, QWidget *parent = 0);
    ~HighScoreDialog();

private:
    QSqlTableModel *model;
    int score;

private slots:
    void addNewScore(void);

private:
    Ui::HighScoreDialog *ui;
};

#endif // HIGHSCOREDIALOG_H
