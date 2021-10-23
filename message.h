#ifndef MESSAGE_H
#define MESSAGE_H

#include "action.h"


class Message : public Action
{
public:
    //cosnstructor
    Message(const std::string &recepient, const std::string &content, AlarmLevel alarmLevel);
    //getters and setters
    const std::string &getRecepient() const {return recepient;};
    const std::string &getContent() const{return content;};
    void setRecepient(const std::string &newRecepient);
    void setContent(const std::string &newContent);
    //methods
    void action() override;

private:
    std::string recepient;
    std::string content;
};

#endif // MESSAGE_H
