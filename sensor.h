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

    std::string printSensor() const override=0;

    void operator++();
    void operator--();

    std::vector<std::shared_ptr<Action> > getActions() const;
    bool getIsActive() const;
    int getId() const;
    void trigger();
    void testSnsr() override;
    void testSnsrbyLocation(std::string location) override;
    void testSnsrbyVendor(std::string vendor) override;
    void activateSensor() override;
    void activateSensorbyLocation(std::string location) override;
    void deactivateSensorbyLocation(std::string location) override;


};

std::ostream & operator<<(std::ostream & os, const Sensor & s);

//function objects
class OrderById
{
    public:
    bool operator()(const std::shared_ptr<Sensor> &s1, const std::shared_ptr<Sensor> &s2){
        return s1->getId()<s2->getId();
    }

};

class OrderByVendor{
    public:
    bool operator()(const std::shared_ptr<Sensor> &s1, const std::shared_ptr<Sensor> &s2){
        return s1->getVendor()<s2->getVendor();
    }

};
class OrderByLocation{
    public:
    bool operator()(const std::shared_ptr<Sensor> &s1, const std::shared_ptr<Sensor> &s2){
        return s1->getLocation()<s2->getLocation();
    }

};




#endif // SENSOR_H
