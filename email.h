#ifndef EMAIL_H
#define EMAIL_H

#include "action.h"

class Email : public Action
{
public:
    //constructor
    Email(const std::string &recepientName, const std::string &recepientEmail, const std::string &content, AlarmLevel alarmLevel);
    //getters and setters
    const std::string &getRecepientName() const{return recepientName;};
    void setRecepientName(const std::string &newRecepientName);
    const std::string &getRecepientEmail() const{return recepientEmail;};
    void setRecepientEmail(const std::string &newRecepientEmail);
    const std::string &getContent() const{return content;};
    void setContent(const std::string &newContent);
    //methods
    void action() override;


private:
    std::string recepientName;
    std::string recepientEmail;
    std::string content;
};

#endif // EMAIL_H
