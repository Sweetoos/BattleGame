#include "headers.hpp"
#include "races.hpp"

void raceHuman::VoiceHuman(int a)
{
    VoiceNumber = a;
    //HumanVoiceList.at(VoiceNumber) = getVoiceNum(VoiceNumber);
    std::cout << HumanVoiceList.at(VoiceNumber) << std::endl;
}
