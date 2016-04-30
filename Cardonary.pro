#-------------------------------------------------
#
# Project created by QtCreator 2016-04-28T14:01:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cardonary
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp

HEADERS  += mainwindow.h \
    game.h

FORMS    += mainwindow.ui \
    game.ui

RESOURCES += \
    Images/images.qrc
