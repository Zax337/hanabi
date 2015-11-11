#ifndef PLAYER_HPP
#define PLAYER_HPP

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

#endif // PLAYER_HPP
