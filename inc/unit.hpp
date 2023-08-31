#ifndef UNIT_HPP
#define UNIT_HPP
#include <headers.hpp>

class cUnit
{
protected:
    std::string Race;                 // unit race
    int HP;                           // health points
    int AD;                           // attack damage
    int AP;                           // ability power
    int Armor;                        // armor
    int MR;                           // magic resistance
    int MS;                           // movement speed
    std::string UnitName;             // unit name
    std::list<std::string> Abilities; // abilities list
    std::string Voice;                // voice after action

public:
    cUnit(std::string, int, int, int, int, int, int, std::string, std::list<std::string>);
    ~cUnit();
    void dotWaiting(char dot);
    void createHero(cUnit Hero);
};

#endif