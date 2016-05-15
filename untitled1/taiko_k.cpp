#include "taiko_k.h"

Taiko_k::Taiko_k():QObject(),QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/pics/taiko_k.jpg"));
    setPos(500,111);
    setFlag(QGraphicsItem::ItemIsFocusable);
    QTimer *tmr = new QTimer(this);
    tmr->start(25);
    connect(tmr,SIGNAL(timeout()),this,SLOT(move()));

}
void Taiko_k::move()
{
    setPos((pos().x()-5),pos().y());
    if(this->pos().x()==60)
    {
        this->setFocus();
    }
}
void Taiko_k::keyPressEvent(QKeyEvent *j_event)
{
    if(j_event->key()==Qt::Key_K && this->pos().x()<60)
    {
        extern MyGame *game;
        game->score++;
        game->scoreNum->display(game->score);
        delete this;
    }
}
