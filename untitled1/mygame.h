#ifndef MYGAME_H
#define MYGAME_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLCDNumber>
#include "resultwindow.h"
#include "taiko_j.h"
#include "taiko_k.h"

namespace Ui {
class MyGame;
}

class MyGame : public QMainWindow
{
    Q_OBJECT
    friend class Taiko_j;
    friend class Taiko_k;
    friend class ResultWindow;

public:
    explicit MyGame(QWidget *parent = 0);
    ~MyGame();
    void timerEvent(QTimerEvent *event);
    void setCountDownTime();

public slots:
    void createNewKo_J();
    void createNewKo_k();
    void showNum();

private:
    Ui::MyGame *ui;
    QGraphicsScene *scene;
    QLCDNumber *countDown;
    QLCDNumber *scoreNum;
    int count;
    int score;
};

#endif // MYGAME_H
