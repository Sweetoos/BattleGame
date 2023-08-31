#ifndef RACES_HPP
#define RACES_HPP
#include <headers.hpp>

class raceHuman: private cUnit
{
    int honor; //bonus bar for human race
};

class raceBarbarian: private cUnit
{
    int rage; //bonus bar for barbarians
};

#endif