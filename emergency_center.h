#ifndef EMERGENCY_CENTER_H
#define EMERGENCY_CENTER_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "component.h"

class Sensor;

class emergency_center : public Component {

private:
    std::string location1 = "electronic lab";
    std::string location2 = "Chemistry lab";
    std::string vendor1 = "xyz";
    std::string vendor2 = "zyw";

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
    void testAllSnsrbyType(std::string type);
    void testAllSnsrbyVendor(std::string vendor);
    void printSensor() const;
    void operator++() const;
    void trigger() const;
    void sensorsOrdredByID(std::vector<std::shared_ptr<Component>> component);


};


#endif // EMERGENCY_CENTER_H
