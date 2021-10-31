#ifndef ALARM_H
#define ALARM_H

#include "action.h"

class Alarm : public Action
{
public:
    Alarm(AlarmLevel alarmLevel);

    void action() override;
};

#endif // ALARM_H
