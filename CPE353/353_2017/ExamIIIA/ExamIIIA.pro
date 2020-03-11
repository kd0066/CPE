#-------------------------------------------------
#
# Project created by QtCreator 2015-10-23T19:23:08
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExamIIIA
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    danddlabel.cpp

HEADERS  += mainwindow.h \
    danddlabel.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc

DISTFILES += \
    bear.jpg \
    otter.jpg \
    tiger.jpg
