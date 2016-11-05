QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DESTDIR = $$PWD/../../bin
TARGET = rtsim

TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    simserver.cpp \
    simclient.cpp

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h \
    simserver.h \
    simclient.h
