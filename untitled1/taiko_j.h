#ifndef TAIKO_J_H
#define TAIKO_J_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QtEvents>
#include <QTimer>
#include "mygame.h"

class Taiko_j:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Taiko_j();
    void keyPressEvent(QKeyEvent *j_event);

public slots:
    void move();

};

#endif // TAIKO_J_H
