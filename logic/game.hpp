#ifndef HANABI_LOGIC_GAME_HPP
#define HANABI_LOGIC_GAME_HPP

#include "logic/game.fwd.hpp"
#include "logic/deck.fwd.hpp"
#include "logic/player.fwd.hpp"
#include "gui/game.fwd.hpp"

#include <QWidget>

#include <memory>
#include <vector>

namespace hanabi {
namespace logic {

class Game
{
public:
   Game();

private:
   std::vector<Player *> m_players;
   std::auto_ptr<Deck> m_deck;
   std::auto_ptr<gui::Game> m_widget;
};

}
}

#endif // HANABI_LOGIC_GAME_HPP
