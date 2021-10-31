#ifndef SENSOR_H
#define SENSOR_H

#include "component.h"
#include<string>
#include<memory>
#include<vector>
#include "sensorTypeEnum.h"


class Action;
static int global_id;
class Sensor : public Component
{
private:
    bool isActive {false};
    int id;
    SensorType type;
    std::string location;
    const std::string vendor;
    std::vector<std::shared_ptr<Action>> actions;

public:
    Sensor(const std::string &location, const std::string &vendor , const SensorType &type);
    std::string getLocation() const;
    void setLocation(const std::string &value);
    std::string getVendor() const;
    void addAction(std::shared_ptr<Action> action);

    std::string printSensor() const override=0;

    void operator++() override;
    void operator--();

    std::vector<std::shared_ptr<Action> > getActions() const;
    bool getIsActive() const;
    int getId() const;
    void trigger();
    void testSnsr() override;
    void testSnsrbyLocation(std::string location) override;
    void testSnsrbyVendor(std::string vendor) override;
    void testSnsrbyType(SensorType type) override;
    void activateSensor() override;
    void activateSensorbyLocation(std::string location) override;
    void deactivateSensor() override;
    void deactivateSensorbyLocation(std::string location) override;


    SensorType getType() const;
};

std::ostream & operator<<(std::ostream & os, const Sensor & s);

//function objects
class OrderById
{
    public:
    bool operator()(const std::shared_ptr<Component> &s1, const std::shared_ptr<Component> &s2){
        return dynamic_cast<Sensor*>(s1.get())->getId()<dynamic_cast<Sensor*>(s2.get())->getId();
    }

};

class OrderByVendor{
    public:
    bool operator()(const std::shared_ptr<Component> &s1, const std::shared_ptr<Component> &s2){
        return dynamic_cast<Sensor*>(s1.get())->getVendor()<dynamic_cast<Sensor*>(s2.get())->getVendor();
    }

};
class OrderByLocation{
    public:
    bool operator()(const std::shared_ptr<Component> &s1, const std::shared_ptr<Component> &s2){
        return dynamic_cast<Sensor*>(s1.get())->getLocation()<dynamic_cast<Sensor*>(s2.get())->getLocation();
    }

};




#endif // SENSOR_H
