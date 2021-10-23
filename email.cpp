#include "email.h"

Email::Email(const std::string &recepientName, const std::string &recepientEmail, const std::string &content, AlarmLevel alarmLevel) : Action(alarmLevel),
    recepientName(recepientName),
    recepientEmail(recepientEmail),
    content(content)
{}

void Email::setRecepientName(const std::string &newRecepientName)
{
    recepientName = newRecepientName;
}

void Email::setRecepientEmail(const std::string &newRecepientEmail)
{
    recepientEmail = newRecepientEmail;
}

void Email::setContent(const std::string &newContent)
{
    content = newContent;
}


void Email::action()
{
   std::cout << "Email sent to recepient: "<<recepientName<<"\nto Email adress "<<recepientEmail<<" \nContent :  "<<content <<std::endl;;
}

