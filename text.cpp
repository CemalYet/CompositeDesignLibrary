#include "text.h"


Text::Text(const std::string &recepientName, const std::string &content,const std::string &recepientNumber, AlarmLevel alarmLevel)
    : Action(alarmLevel),
    recepientName{recepientName},
    content{content},
    recepientNumber{recepientNumber}

{}

void Text::setRecepientName(const std::string &newRecepientName)
{
    recepientName = newRecepientName;
}

void Text::setContent(const std::string &newContent)
{
    content = newContent;
}

void Text::setRecepientNumber(const std::string &newsetRecepientNumber)
{
    recepientNumber = newsetRecepientNumber;
}

void Text::action()
{
   std::cout << "Text sent to recepient: "<<recepientName<<"\nNumber: "<<recepientNumber<<" \nContent :  "<<content <<std::endl;;
}
