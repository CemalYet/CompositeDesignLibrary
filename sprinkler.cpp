#include "sprinkler.h"


Sprinkler::Sprinkler(AlarmLevel alarmLevel) : Action(alarmLevel)
{}
void Sprinkler::action()
{
   std::cout << "Sprinkler system has been activated succesfully"<<std::endl;
}
