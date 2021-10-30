#ifndef ACTIVATELIGHTANDAC_H
#define ACTIVATELIGHTANDAC_H



#include "action.h"
class ActivateLightAndAc :public Action
{
public:
    ActivateLightAndAc(AlarmLevel alarmLevel);
    void action() override;
};

#endif // ACTIVATELIGHTANDAC_H




