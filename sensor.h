#ifndef SENSOR_H
#define SENSOR_H

#include "component.h"
#include<string>
#include<memory>
#include<vector>

class Action;
static int global_id;
class Sensor : public Component
{
private:
    bool isActive {false};
    int id;
    std::string location;
    const std::string vendor;
    std::vector<std::shared_ptr<Action>> actions;

public:
    Sensor(const std::string &location, const std::string &vendor);
    std::string getLocation() const;
    void setLocation(const std::string &value);
    std::string getVendor() const;
    void addAction(std::shared_ptr<Action> action);

    virtual std::string printSensor() const = 0;

    void operator++();
    void operator--();

    std::vector<std::shared_ptr<Action> > getActions() const;
    bool getIsActive() const;
    int getId() const;
    void trigger();
    void setId(int value);

};

std::ostream & operator<<(std::ostream & os, const Sensor & s);

#endif // SENSOR_H
