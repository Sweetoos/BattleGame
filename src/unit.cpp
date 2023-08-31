#include "unit.hpp"

cUnit::cUnit(std::string r, int hp, int ad, int ap, int armor, int mr, int ms, std::string uname, std::list<std::string> abils)
{
    Race = r;
    HP = hp;
    AD = ad;
    AP = ap;
    Armor = armor;
    MR = mr;
    MS = ms;
    UnitName = uname;
    Abilities = abils;
}

cUnit::~cUnit()
{
}

void cUnit::dotWaiting(const char dot = '.')
{
    for (uint32_t i = 0; i < 3; i++)
    {
        std::cout << dot;
        sleep(1);
    }
}

void cUnit::createHero(cUnit Hero)
{
    
}
