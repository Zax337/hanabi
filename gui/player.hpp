#ifndef GUI_PLAYER_HPP
#define GUI_PLAYER_HPP

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

#endif /* GUI_PLAYER_HPP */
