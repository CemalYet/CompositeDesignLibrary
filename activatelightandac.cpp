#include "activatelightandac.h"

ActivateLightAndAc::ActivateLightAndAc(AlarmLevel alarmLevel) : Action(alarmLevel)
{

}

void ActivateLightAndAc::action()
{
    std::cout <<"Turn on lights and Ac"<<std::endl;
}
