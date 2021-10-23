#ifndef COOLINGSPRINKLER_H
#define COOLINGSPRINKLER_H

#include "action.h"

class CoolingSprinkler : public Action
{
public:
    //cosntructor
    CoolingSprinkler(AlarmLevel alarmLevel);
    //methods
    void action() override;
};

#endif // COOLINGSPRINKLER_H
