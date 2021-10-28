#include <iostream>
#include <vector>
#include <sstream>
#include "emergency_center.h"
#include <string>
#include <algorithm>

//activate all sensor by location
//testall sensor without parameter
//Deactivate all sensors by Location
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



void emergency_center::testSnsrbyLocation(std::string type)
{
        for (auto & c : component) {
          if (c == component.back()) {
             c->testSnsrbyLocation(type);
          } else {
             c->testSnsrbyLocation(type);
          }
        }

}

void emergency_center::testSnsrbyVendor(std::string vendor)
{
    for (auto & c : component) {
      if (c == component.back()) {
         c->testSnsrbyLocation(vendor);
      } else {
         c->testSnsrbyLocation(vendor);
      }
    }
}


void emergency_center::operator++() {
    std::cout << "sensor is activated" << std::endl;
}

void emergency_center::trigger() {
    std::cout << "sensor is triggered" << std::endl;
}

void sensorsOrdredByID(std::vector<std::shared_ptr<Component>> cmp){
    std::sort(cmp.begin(), cmp.end());
}

