#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T12:29:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mygame.cpp \
    resultwindow.cpp \
    taiko_j.cpp \
    taiko_k.cpp

HEADERS  += mainwindow.h \
    mygame.h \
    resultwindow.h \
    taiko_j.h \
    taiko_k.h

FORMS    += mainwindow.ui \
    mygame.ui \
    resultwindow.ui

RESOURCES += \
    pics.qrc
