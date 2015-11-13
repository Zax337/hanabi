#ifndef HANABI_LOGIC_DECK_HPP
#define HANABI_LOGIC_DECK_HPP

#include <logic/deck.fwd.hpp>
#include <logic/player.hpp>

#include <map>
#include <memory>
#include <vector>
#include <stack>

namespace hanabi {
namespace logic {

class Deck {
public:
  Deck();
  void draw(Player & player);
  void draw(Player & player, int);
private:
  class Card {
  public:
    Card();
    Card(Card const &) = delete;
  };
  typedef std::vector<std::unique_ptr<Card>> Hand;

  std::stack<std::unique_ptr<Card>> m_stack;
  std::map<Player, Hand> m_hands;
};

}
}

#endif // HANABI_LOGIC_DECK_HPP
