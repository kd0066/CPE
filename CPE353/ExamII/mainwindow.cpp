#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "togglelabel.h"

#include <QKeyEvent>

static int count = 1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // HINT: P02 - event filtering
    ui->filteredEdit->textCursor().insertText("1  ");
    ui -> filteredEdit -> installEventFilter(this);
    ui -> statusBar -> showMessage("Ready");
    menu = menuBar() -> addMenu("File");
    a1 = new QAction("Save");
    a2 = new QAction("Load");
    menu -> addAction(a1);
    menu -> addAction(a2);
    connect(a2, SIGNAL(triggered()), this, SLOT(fileI()));
    connect(a1, SIGNAL(triggered()), this, SLOT(fileO()));
    ui -> usernameEdit -> setText("KD0066");
    connect(ui -> spawnButton, SIGNAL(clicked()), this, SLOT(button()));
    connect(ui -> applyButton, SIGNAL(clicked()), this, SLOT(regex()));

}

bool MainWindow::eventFilter(QObject *watched, QEvent *event) {
    QKeyEvent* key = static_cast<QKeyEvent*>(event);
    if (!watched || !event) return QMainWindow::eventFilter(watched, event);
    if(watched == ui -> filteredEdit && event -> type() == QEvent::KeyPress) {
        switch(key -> key()) {
            case Qt::Key_Enter:
            case Qt::Key_Return:        count++;
                                        s.setNum(count);
                                        ui -> filteredEdit -> append(s + "  ");
                                        ui -> statusBar -> showMessage(s);
                                        return true;
        }
    }
    return QMainWindow::eventFilter(watched, event);
}

void MainWindow::fileI() {
    QStringList list;
    QString filename = ui -> fileNameEdit -> text();
    ui -> fileNameEdit -> clear();
    QFile someFile(filename);
    if (!someFile.exists()) {
        QMessageBox msgBox;
        msgBox.setText("File does not exist -- Aborting load action");
        msgBox.exec();
    }

    else if(someFile.open( QIODevice::ReadOnly )) {
        qDebug() << "Error -- Unable to open file for input";
    }

    else {
        qDebug() << "File opened for input successfully";
    }
    QTextStream in(&someFile);
    QString someValue;

    while(!in.atEnd()) {
        s.setNum(count);
        someValue = in.readLine();
        list.append(someValue);
        qDebug() << someValue;
        ui -> filteredEdit -> moveCursor (QTextCursor::End);
        ui -> filteredEdit -> insertPlainText(someValue);
        ui -> filteredEdit -> append(s + "  ");
        count++;
        ui -> statusBar -> showMessage(s);
    }
}

void MainWindow::fileO() {
    QStringList l;
    QString filename = ui -> fileNameEdit -> text();
    ui -> fileNameEdit -> clear();
    QFile someFile(filename);

    if(!someFile.open( QIODevice::WriteOnly )) {
        QMessageBox msgBox;
        msgBox.setText("File not able to open for output");
        msgBox.exec();
    }

    QTextStream stream(&someFile);
    stream << ui -> filteredEdit -> toPlainText();
    someFile.close();


}

void MainWindow::button() {
    if (ui -> modalButton -> isChecked()) {
        QDialog* d = new QDialog();
        QHBoxLayout* layout = new QHBoxLayout;
        QLabel* l = new QLabel("KD0066");
        ToggleLabel* t = new ToggleLabel;
        d -> setLayout(layout);
        layout -> addWidget(l);
        layout -> addWidget(t);
        d -> exec();
        connect(ui -> closeButton, SIGNAL(clicked()), d, SLOT(accept()));
    }
    else if (ui -> nonmodalButton -> isChecked()) {
        QDialog* d = new QDialog();
        QHBoxLayout* layout = new QHBoxLayout;
        QLabel* l = new QLabel("KD0066");
        ToggleLabel* t = new ToggleLabel;
        d -> setLayout(layout);
        layout -> addWidget(l);
        layout -> addWidget(t);
        d -> show();
        connect(ui -> closeButton, SIGNAL(clicked()), d, SLOT(accept()));
    }
}

void MainWindow::regex() {
    QString string = ui -> regexEdit -> text();
    QRegExp rx(string);
    QValidator* validate = new QRegExpValidator(rx, this);
    ui -> protectedEdit -> setValidator(validate);
    ui -> protectedEdit -> clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

