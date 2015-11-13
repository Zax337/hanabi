! include( ../common.pri ) {
    error( "Couldn't find the common.pri file!" )
}

SOURCES += card.cpp \
           mainwindow.cpp \
           player.cpp \
           game.cpp

HEADERS += card.hpp \
           mainwindow.hpp \
           player.hpp \
           game.hpp \
    card.fwd.hpp \
    game.fwd.hpp \
    mainwindow.fwd.hpp \
    player.fwd.hpp

#FORMS    += \
#   game.ui \
#    mainwindow.ui
