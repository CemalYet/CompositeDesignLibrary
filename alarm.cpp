#include "alarm.h"

Alarm::Alarm(AlarmLevel alarmLevel) : Action(alarmLevel)
{}


void Alarm::action()
{
   std::cout << "DitDitDitDitDitDitDitDitDitDitDitDitDitDitDitDit"<<std::endl;
}


