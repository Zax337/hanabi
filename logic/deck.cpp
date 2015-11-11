#include "logic/deck.hpp"

namespace hanabi {
namespace logic {


Deck::Card::Card()
{

}

template<class Q>
typename Q::value_type pop(Q& q) {
    auto result = std::move(q.top());
    q.pop();
    return result;
}

void Deck::draw(Player & player) {
   auto hand = m_hands.find(player);
   if(hand != m_hands.end()) {
     hand->second.push_back(pop(m_stack));
   }
}

void Deck::draw(Player & player, int nb) {
   for(;nb > 0; --nb) {
      draw(player);
   }
}

}
}
