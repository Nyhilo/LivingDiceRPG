/*

*/

#include "Monster.cpp"
#include "Weapon.cpp"
#include <vector>

class Player: public Monster
{
private:
    std::vector<Weapon> weapons;
public:
    Player(std::string Name, float Health, float Evasion, float Attack, std::vector<Weapon> Weapons);
);
    ~Player();
    
};