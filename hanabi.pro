#-------------------------------------------------
#
# Project created by QtCreator 2015-10-26T12:46:12
#
#-------------------------------------------------

TARGET = hanabi

TEMPLATE = subdirs
SUBDIRS = logic \
          gui

# build must be last:
CONFIG += ordered
SUBDIRS += build
