#ifndef GAME_HPP
#define GAME_HPP

#include "deck.hpp"
#include "player.hpp"
#include "../gui/game.hpp"

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
   std::unique_ptr<Deck> m_deck;
   std::unique_ptr<gui::Game> m_widget;
};

}
}

#endif // GAME_HPP
