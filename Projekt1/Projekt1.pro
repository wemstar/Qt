#-------------------------------------------------
#
# Project created by QtCreator 2013-04-13T17:09:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projekt1
TEMPLATE = app
TRANSLATIONS +=statkipl_PL.ts

SOURCES += main.cpp\
        glowneokno.cpp \
    Gracz/easysi.cpp \
    Gracz/abstractplayer.cpp \
    Statki/abstractship.cpp \
    Gracz/realplayer.cpp \
    gra.cpp \
    Statki/jednomasztowiec.cpp \
    Statki/dwumasztowiec.cpp \
    Statki/trojmasztowiec.cpp \
    Statki/czteromasztowiec.cpp

HEADERS  += glowneokno.h \
    Gracz/easysi.h \
    Gracz/abstractplayer.h \
    Statki/abstractship.h \
    Gracz/abstractplayer.h \
    Gracz/realplayer.h \
    Gracz/easysi.h \
    gra.h \
    Statki/jednomasztowiec.h \
    Statki/dwumasztowiec.h \
    Statki/trojmasztowiec.h \
    Statki/czteromasztowiec.h

FORMS    += glowneokno.ui

RESOURCES += \
    zasoby.qrc
