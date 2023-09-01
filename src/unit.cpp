#include "headers.hpp"
#include "unit.hpp"

cUnit::cUnit()
{
    Race = "human";
    HP = 100;
    AD = 5;
    AP = 0;
    Armor = 0;
    MR = 0;
    MS = 10;
    UnitName = "None";
    Abilities = {};
}

cUnit::cUnit(std::string r, int hp, int ad, int ap, int armor, int mr, int ms, std::string uname, std::list<std::string> abils)
{
    Race = r; // race
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
        sleep(0.2);
    }
}

uint cUnit::getVoiceNum(int voicenum)
{
    VoiceNumber = voicenum;
    return VoiceNumber;
}

// void cUnit::createHero(int id)
// {
//     std::vector<cUnit> Hero;
//     Hero[id];
// }
