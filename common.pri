#Includes common configuration for all subdirectory .pro files.
INCLUDEPATH += . ..
WARNINGS += -Wall

QT       += core gui
CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib

# The following keeps the generated files at least somewhat separate 
# from the source files.
#UI_DIR = ../hanabi/uics
#MOC_DIR = ../hanabi/mocs
#OBJECTS_DIR = ../hanabi/objs
