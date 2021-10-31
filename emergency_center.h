#ifndef EMERGENCY_CENTER_H
#define EMERGENCY_CENTER_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "component.h"
#include <functional>

class Sensor;

class emergency_center : public Component {

private:
    std::string collectionName;

public:
    emergency_center(const std::string &collectionName);


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
    std::string printSensor() const override;
    void activateSensor() override;
    void testSnsr() override;
    void activateSensorbyLocation(std::string location) override;
    void deactivateSensor() override;
    void deactivateSensorbyLocation(std::string location) override;
    void operator++() override;
    void testSnsrbyType(SensorType type) override;
    void testCollectionbyName(std::string location);
    void activateCollectionbyName(std::string collectionName);
    void deactivateCollectionbyName(std::string collectionName);
    bool IsComposite() const override {
        return true;
      }
    void sensorsOrdredByID(std::function<bool (const std::shared_ptr<Component> &, const std::shared_ptr<Component> &)> compComponent);
    void giveOverviewofAllSensor(std::function<bool(const std::shared_ptr<Component> &, const std::shared_ptr<Component> &)> comp);
    std::vector<std::shared_ptr<Component> >getListOfSensorsInThisEmergCenter() const;

    const std::string &getCollectionName() const{return collectionName;};
};


#endif // EMERGENCY_CENTER_H
