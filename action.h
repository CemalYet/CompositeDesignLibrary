#ifndef ACTION_H
#define ACTION_H
#include <iostream>
#include <string>


enum class AlarmLevel {High, Medium, Low};
std::string getStringForEnum( int enum_val );


class  Action
{
public:
     // cosntructor
    Action (AlarmLevel alarmLevel);
    //getter and setters
    const AlarmLevel &getAlarmLevel() const{return alarmLevel;};
    void setAlarmLevel(const AlarmLevel &newAlarmLevel);
    //Abstract method
    virtual void action() = 0;

private:
     AlarmLevel alarmLevel;

};

#endif // ACTION_H
