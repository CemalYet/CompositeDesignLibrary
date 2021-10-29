#ifndef EMERGENCY_CENTER_H
#define EMERGENCY_CENTER_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "component.h"

class Sensor;

class emergency_center : public Component {


public:

    std::vector<std::shared_ptr<Component>> component;   //this collection is to test all functions that are used for "OVERVIEW"


    void add_sensor (std::shared_ptr<Component> component);
    void remove_sensor(std::shared_ptr<Component> cmp, int id);
    void giveOverviewAllSensorByLocation(std::string location);
    int getSensorByPosition(std::shared_ptr <Component> cmp);
    void giveOverviewAllSensorById(int id);
    void giveOverviewAllSensorByVendor(std::string vendor);
    void testAllSnsrbyLocation(std::string location);
    void giveOverviewAllSensor();
    void testSnsrbyLocation(std::string location) override;
    void testSnsrbyVendor(std::string vendor)override;
    void testSnsrbyType(SensorType type)override;
    std::string printSensor() const override;
    void activateSensor() override;
    void testSnsr() override;
    void activateSensorbyLocation(std::string location) override;
    void deactivateSensorbyLocation(std::string location) override;

    void sensorsOrdredByID(std::vector<std::shared_ptr<Component>> component);


};


#endif // EMERGENCY_CENTER_H
