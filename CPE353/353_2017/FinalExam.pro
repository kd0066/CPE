#-------------------------------------------------
#
# Project created by QtCreator 2015-12-03T18:39:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FinalExam
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pacman.cpp \
    pellet.cpp

HEADERS  += mainwindow.h \
    pacman.h \
    pellet.h

FORMS    += mainwindow.ui
