! include( ../common.pri ) {
    error( "Couldn't find the common.pri file!" )
}

SOURCES += deck.cpp \
    player.cpp \
    game.cpp \

HEADERS  +=  deck.hpp \
    player.hpp \
    game.hpp
