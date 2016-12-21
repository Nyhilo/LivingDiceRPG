/*

*/

#include "Monster.h"

Monsters::Monster (td::string Name, float Health, float Evasion, float Attack)
{

}

~Monster ()
{

}

// void damage (Monster& monster);

//Setters and Getters
void Scanner::setName (std::string Name) { name = Name; }

void Scanner::setHealth (float Health) { health = Health; }

void Scanner::setEvasion (float Evasion) { evasion = Evasion; }

void Scanner::setAttack (float Attack) { attack = Attack; }


std::string Scanner::getName () { return name; }

float Scanner::getHealth () { return health; }

float Scanner::getEvasion () { return evasion; }

float Scanner::getAttack () { return attack; }  
