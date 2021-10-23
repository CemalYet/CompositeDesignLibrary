#include "message.h"


Message::Message(const std::string &recepient, const std::string &content, AlarmLevel alarmLevel)
    : Action(alarmLevel),
    recepient{recepient},
    content{content}
{}

void Message::setRecepient(const std::string &newRecepient)
{
    recepient = newRecepient;
}

void Message::setContent(const std::string &newContent)
{
    content = newContent;
}

void Message::action()
{
   std::cout << "Message sent to recepient: "<<getRecepient()<<" \nContent :  "<<content<<"\nAlarm :"<<getStringForEnum((int)getAlarmLevel()) <<std::endl;;
}

