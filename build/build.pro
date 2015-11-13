TEMPLATE = app

QT       += core gui
CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += . ..
SOURCES += main.cpp

LIBS += -L../logic -L../gui -llogic -lgui

# Will build the final executable in the main project directory.
TARGET = ../hanabi
