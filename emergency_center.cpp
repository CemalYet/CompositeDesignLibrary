#include <iostream>
#include <vector>
#include <sstream>
#include "emergency_center.h"
#include <string>
#include <algorithm>
#include "sensor.h"




//Print an overview of all sensors, alphabetically ordered by location
//Activate and test by sensortype

void emergency_center::add_sensor(std::shared_ptr<Component> cmp)
{
    component.push_back(cmp);
}


void emergency_center::giveOverviewAllSensorByLocation(std::string location)
{
/*
    for (auto & sensor : component ){
        if (location1 == location) {
            std::cout<<"this location"<< location << "contains " << std::endl;
            sensor->printSensor();
        }

        if (location2 == location) {
            std::cout<<"this location"<< location << "contains " << std::endl;
            sensor->printSensor();
        }
    }
    */
}


void emergency_center::giveOverviewAllSensorById(int id)
{
   /* Component sensor;
    std::cout<<"this ID"<< id << "contains " << std::endl;
    sensor.printSensor();
    */
}

void emergency_center::giveOverviewAllSensorByVendor(std::string vendor)
{
   /* for (auto & sensor : component ){
        if (vendor1 == vendor) {
            std::cout<<"this location"<< vendor << "contains " << std::endl;
            sensor->printSensor();
        }

        if (vendor2 == vendor) {
            std::cout<<"this location"<< vendor << "contains " << std::endl;
            sensor->printSensor();
        }
    }
    */
}

void emergency_center::giveOverviewofAllSensor(std::function<bool(const std::shared_ptr<Sensor> &, const std::shared_ptr<Sensor> &)> comp)
{

   auto sensors=getListOfSensorsInThisEmergCenter();
   std::sort(sensors.begin(), sensors.end(), comp);
   for(auto &s :sensors){
       s->printSensor();
   }
}



std::string emergency_center::printSensor() const {
    std::string result;
        for (auto & c : component) {
          if (c == component.back()) {
            result += c->printSensor();
          } else {
            result += c->printSensor()+ " +";
          }
        }
        return "SensorCollection has ( " + result + " )\n";
      }


void emergency_center::testSnsr()
{
        for (auto & c : component) {
          if (c == component.back()) {
             c->testSnsr();
          } else {
             c->testSnsr();
          }
        }

}

void emergency_center::testSnsrbyLocation(std::string location)
{
        for (auto & c : component) {
          if (c == component.back()) {
             c->testSnsrbyLocation(location);
          } else {
             c->testSnsrbyLocation(location);
          }
        }

}

void emergency_center::testSnsrbyVendor(std::string vendor)
{
    for (auto & c : component) {
      if (c == component.back()) {
         c->testSnsrbyVendor(vendor);
      } else {
         c->testSnsrbyVendor(vendor);
      }
    }
}

void emergency_center::testSnsrbyType(SensorType type)
{
    for (auto & c : component) {
      if (c == component.back()) {
         c->testSnsrbyType(type);
      } else {
         c->testSnsrbyType(type);
      }
    }
}

void emergency_center:: activateSensor(){
    for (auto & c : component) {
      if (c == component.back()) {
         c->activateSensor();
      } else {
         c->activateSensor();
      }
    }
}


void emergency_center:: activateSensorbyLocation(std::string location){
    for (auto & c : component) {
      if (c == component.back()) {
         c->activateSensorbyLocation(location);
      } else {
         c->activateSensorbyLocation(location);
      }
    }
}
void emergency_center::deactivateSensorbyLocation(std::string location) {
    for (auto & c : component) {
      if (c == component.back()) {
         c->deactivateSensorbyLocation(location) ;
      } else {
         c->deactivateSensorbyLocation(location);
      }
    }
}

void emergency_center::operator++()
{
    activateSensor();
}

std::vector<std::shared_ptr<Sensor> > emergency_center::getListOfSensorsInThisEmergCenter() const
{
    std::vector<std::shared_ptr<Sensor>> sensors;
    for (auto & c : component) {
        std::shared_ptr<emergency_center> composite(dynamic_cast<emergency_center*>(c.get()));
        if (  composite != nullptr){
          auto child_sensors=composite->getListOfSensorsInThisEmergCenter();
          for (auto & s : child_sensors) {
                  sensors.push_back(s);
          }
        }else{
          std::shared_ptr<Sensor> s(dynamic_cast<Sensor*>(c.get()));
          sensors.push_back(s);
        }

    }
    return sensors;
}


void emergency_center::sensorsOrdredByID(std::vector<std::shared_ptr<Component>> cmp){
    std::sort(cmp.begin(), cmp.end());
}

