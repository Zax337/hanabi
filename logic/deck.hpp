#ifndef DECK_HPP
#define DECK_HPP

#include <map>
#include <memory>
#include <vector>
#include <stack>
#include <../logic/player.hpp>

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

#endif // DECK_HPP
