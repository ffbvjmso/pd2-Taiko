#include "mainwindow.h"
#include "mygame.h"
#include <QApplication>

MainWindow *w;
MyGame *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    w = new MainWindow();
    w->show();

    return a.exec();
}
