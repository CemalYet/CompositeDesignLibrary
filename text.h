#ifndef TEXT_H
#define TEXT_H

#include "action.h"


class Text : public Action
{
public:
    //constructor
    Text(const std::string &recepientName, const std::string &content,const std::string &recepientNumber, AlarmLevel alarmLevel);
    //getters and setters
    const std::string &getRecepientName() const {return recepientName;};
    const std::string &getContent() const{return content;};
    const std::string &getRecepientNumber() const;
    void setRecepientName(const std::string &newRecepientName);
    void setContent(const std::string &newContent);
    void setRecepientNumber(const std::string &newRecepientNumber);
    //methods
    void action() override;




private:
    std::string recepientName;
    std::string content;
    std::string recepientNumber;

};

#endif // TEXT_H
