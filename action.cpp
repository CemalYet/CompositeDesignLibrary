#include "action.h"

static const char *enum_str[] =
        { "High level", "Medium level", "Low level" };

Action::Action(AlarmLevel alarmLevel)
    :alarmLevel{alarmLevel}
{
     //std::cout << "-------Alarm constructor has been called--------" << std::endl;
}

void Action::setAlarmLevel(const AlarmLevel &newAlarmLevel)
{
    alarmLevel = newAlarmLevel;
}
std::string getStringForEnum( int enum_val )
{
    std::string tmp(enum_str[enum_val]);
    return tmp;
}
