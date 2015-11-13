#ifndef HANABI_LOGIC_PLAYER_HPP
#define HANABI_LOGIC_PLAYER_HPP

#include <string>

namespace hanabi {
namespace logic {

class Player
{
public:
   Player();
   bool operator<(Player const &) const;
private:
   std::string m_name;
};

}
}

#endif // HANABI_LOGIC_PLAYER_HPP
