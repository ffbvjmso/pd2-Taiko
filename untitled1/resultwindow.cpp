#include "resultwindow.h"
#include "ui_resultwindow.h"

ResultWindow::ResultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ResultWindow)
{
    ui->setupUi(this);
    result = new QLCDNumber(this);
    result->setGeometry(110,90,200,80);
    extern MyGame *game;
    result->display(game->score);
}

ResultWindow::~ResultWindow()
{
    delete ui;
}

void ResultWindow::on_pushButton_2_clicked()
{
    exit(1);
}

void ResultWindow::on_pushButton_clicked()
{
    extern MainWindow *w;
    w->show();
    extern MyGame *game;
    game->close();
    this->close();
}
