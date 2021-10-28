#include <iostream>
#include <vector>
#include <sstream>
#include "emergency_center.h"
#include <string>
#include <algorithm>


//std::vector<Component> sensor(20);




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


void emergency_center::testAllSnsrbyLocation(std::string location)
{

   /* for (auto & sensor : component ){
        if (location1 == location) {
            std::cout<<"this location"<< location << "'s sensors will be activated " << std::endl;
            sensor->operator++();
            sensor->trigger();
        }

        if (location2 == location) {
            std::cout<<"this location"<< location << "contains " << std::endl;
            sensor->operator++();
            sensor->trigger();
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



void emergency_center::testAllSnsrbyType(std::string type)
{

}

void emergency_center::testAllSnsrbyVendor(std::string vendor)
{
    /*for (auto & sensor : component ){
        if (vendor1 == vendor) {
            std::cout<<"this Vendor: "<< vendor << "'s sensors will be activated " << std::endl;
            sensor->operator++();
            sensor->trigger();
        }

        if (vendor2 == vendor) {
            std::cout<<"this Vendor: "<< vendor << "contains " << std::endl;
            sensor->operator++();
            sensor->trigger();
        }
    }
    */
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

