#include "mygame.h"
#include "ui_mygame.h"

MyGame::MyGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyGame)
{
    ui->setupUi(this);
    score=0;
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,510,380);
    ui->graphicsView->setScene(scene);
    setCountDownTime();
    countDown = new QLCDNumber(this);
    countDown->setGeometry(30,10,190,60);
    countDown->setProperty("intValue",30);
    scoreNum = new QLCDNumber(this);
    scoreNum->setGeometry(280,10,190,60);
    //set timer
    QTimer *timer_count = new QTimer(this);
    timer_count->start(1000);
    connect(timer_count,SIGNAL(timeout()),this,SLOT(showNum()));
    //creat Taiko_j
    QTimer *timer_j = new QTimer(this);
    timer_j->start(2348);
    connect(timer_j,SIGNAL(timeout()),this,SLOT(createNewKo_J()));
    //creat Taiko_k
    QTimer *timer_k = new QTimer(this);
    timer_k->start(5000);
    connect(timer_k,SIGNAL(timeout()),this,SLOT(createNewKo_k()));

    //Taiko_j *ko = new Taiko_j();
    //Taiko_k *ko = new Taiko_k();
    startTimer(30000);
}
void MyGame::createNewKo_J()
{
    Taiko_j *ko_j = new Taiko_j();
    scene->addItem(ko_j);
}

void MyGame::createNewKo_k()
{
    Taiko_k *ko_k = new Taiko_k();
    scene->addItem(ko_k);
}
void MyGame::setCountDownTime()
{
    count=30;
}

void MyGame::showNum()
{
    countDown->display(--count);
}

void MyGame::timerEvent(QTimerEvent *event)
{
    (new ResultWindow(this))->show();
    killTimer(event->timerId());
}

MyGame::~MyGame()
{
    delete ui;
}
