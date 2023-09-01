#ifndef RACES_HPP
#define RACES_HPP
#include <headers.hpp>

class raceHuman : public cUnit
{
private:
    int honor; // bonus bar for human race
    std::vector<std::string> HumanVoiceList = {
        "On duty!",
        "Ready to combat",
        "For Valor!",          // after attacking
        "I will not forfeit!", // after getting damage
    };

public:
    void VoiceHuman(int a);
};

class raceBarbarian : private cUnit
{
private:
    int rage; // bonus bar for barbarians
};

#endif