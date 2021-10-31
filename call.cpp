#include "call.h"



call::call(const std::string &recepientName, const std::string &recepientNumber, AlarmLevel alarmLevel) : Action(alarmLevel),
    recepientName(recepientName),
    recepientNumber(recepientNumber)
{}

void call::setRecepientName(const std::string &newRecepientName)
{
    recepientName = newRecepientName;
}

void call::setRecepientNumber(const std::string &newRecepientNumber)
{
    recepientNumber = newRecepientNumber;
}
void call::action()
{
   std::cout << "Calling: "<<recepientName<<"\n to number: "<<recepientNumber <<std::endl;;
}
