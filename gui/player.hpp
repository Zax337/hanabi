#ifndef HANABI_GUI_PLAYER_HPP
#define HANABI_GUI_PLAYER_HPP

#include "gui/player.fwd.hpp"
#include <QFrame>

namespace hanabi {
namespace gui {

class Player : public QFrame
{
public:
   explicit Player(QWidget * parent = 0);
};

}
}

#endif /* HANABI_GUI_PLAYER_HPP */
