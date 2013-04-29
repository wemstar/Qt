#-------------------------------------------------
#
# Project created by QtCreator 2013-04-13T17:09:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projekt1
TEMPLATE = app


SOURCES += main.cpp\
        glowneokno.cpp \
    Gracz/easysi.cpp \
    Gracz/abstractplayer.cpp \
    Widgety/newgamewidget.cpp \
    Widgety/polestatki.cpp \
    Statki/abstractship.cpp \
    Gracz/realplayer.cpp \
    gra.cpp \
    Statki/jednomasztowiec.cpp

HEADERS  += glowneokno.h \
    Gracz/easysi.h \
    Gracz/abstractplayer.h \
    Widgety/newgamewidget.h \
    Widgety/polestatki.h \
    Statki/abstractship.h \
    Gracz/abstractplayer.h \
    Gracz/realplayer.h \
    Gracz/easysi.h \
    gra.h \
    Statki/jednomasztowiec.h

FORMS    += glowneokno.ui \
    Widgety/newgamewidget.ui \
    Widgety/polestatki.ui

RESOURCES += \
    zasoby.qrc
