#-------------------------------------------------
#
# Project created by QtCreator 2013-04-07T18:15:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestMianWindow
TEMPLATE = app

TRANSLATIONS = I18n_pl.ts

SOURCES += main.cpp\
        testmain.cpp

HEADERS  += testmain.h

FORMS    += testmain.ui

RESOURCES += \
    Reso.qrc

OTHER_FILES += \
    I18n_pl.qm
