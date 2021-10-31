#ifndef CALL_H
#define CALL_H

#include "action.h"

class call : public Action
{
public:
    call(const std::string &recepientName, const std::string &recepientNumber, AlarmLevel alarmLevel);
    //methods
    void action() override;
    const std::string &getRecepientName() const {return recepientName;};
    void setRecepientName(const std::string &newRecepientName);
    const std::string &getRecepientNumber() const  {return recepientNumber;};
    void setRecepientNumber(const std::string &newRecepientNumber);

private:
    std::string recepientName;
    std::string recepientNumber;
};

#endif // CALL_H
