#include "logic/player.hpp"

namespace hanabi {
namespace logic {

Player::Player()
{

}

bool Player::operator <(Player const & rhs) const {
   return m_name.compare(rhs.m_name);
}

}
}
