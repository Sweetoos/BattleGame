#ifndef UNIT_HPP
#define UNIT_HPP
#include <headers.hpp>

class cUnit
{
protected:
    uint UnitID;                      // unit ID
    std::string Race;                 // unit race
    int Experience;                   // current experience
    uint LVL;                         // current level
    int HP;                           // health points
    int AD;                           // attack damage
    int AP;                           // ability power
    int Armor;                        // armor
    int MR;                           // magic resistance
    int MS;                           // movement speed
    std::string UnitName;             // unit name
    std::list<std::string> Abilities; // abilities list
    uint VoiceNumber;                 // voice number after doing sth

public:
    cUnit();
    cUnit(std::string, int, int, int, int, int, int, std::string, std::list<std::string>);
    ~cUnit();
    void dotWaiting(char dot);
    uint getVoiceNum(int voicenum);
    // void createHero(int id);
};

#endif