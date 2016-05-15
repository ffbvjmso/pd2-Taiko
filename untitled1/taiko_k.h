#ifndef TAIKO_K_H
#define TAIKO_K_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QtEvents>
#include <QTimer>
#include "mygame.h"

class Taiko_k:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Taiko_k();
    void keyPressEvent(QKeyEvent *k_event);

public slots:
    void move();
};

#endif // TAIKO_K_H
