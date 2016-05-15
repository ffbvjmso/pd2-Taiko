#include "taiko_j.h"

Taiko_j::Taiko_j():QObject(),QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/pics/taiko_j_1.png"));
    setPos(500,111);
    setFlag(QGraphicsItem::ItemIsFocusable);
    QTimer *tmr = new QTimer(this);
    tmr->start(25);
    connect(tmr,SIGNAL(timeout()),this,SLOT(move()));
}
void Taiko_j::move()
{
    setPos((pos().x()-5),pos().y());
    if(this->pos().x()==60)
    {
        this->setFocus();
    }
}
void Taiko_j::keyPressEvent(QKeyEvent *j_event)
{
    if(j_event->key()==Qt::Key_J && this->pos().x()<60)
    {
        extern MyGame *game;
        game->score++;
        game->scoreNum->display(game->score);
        delete this;
    }
}
//void Taiko_j::addScore(MyGame *gam)
//{
    //gam->score++;
    //gam->scoreNum->display(gam->score);
//}
