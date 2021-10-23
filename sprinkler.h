#ifndef SPRINKLER_H
#define SPRINKLER_H

#include "action.h"

class Sprinkler : public Action
{
public:
    //constructor
    Sprinkler(AlarmLevel alarmLevel);
    //method
    void action() override;
};

#endif // SPRINKLER_H
