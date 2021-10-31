#include <iostream>
#include <vector>
#include <sstream>
#include "emergency_center.h"
#include <string>
#include <algorithm>
#include "sensor.h"




//Print an overview of all sensors, alphabetically ordered by location
//Activate and test by sensortype
emergency_center::emergency_center(const std::string &collectionName) : collectionName(collectionName)
{}


//Add component in collection
void emergency_center::add_sensor(std::shared_ptr<Component> cmp)
{
    component.push_back(cmp);
}


//Print all sensor in the emergency center
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

//Test all sensors in emergencycenter
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

//Test all sensor only in given collection name
void emergency_center::testCollectionbyName(std::string collectionName)
{
    for (auto & c : component) {
        if(c->IsComposite()){
            if(dynamic_cast<emergency_center *>(c.get())->getCollectionName()==collectionName){
                c->testSnsr();
            }else{
                dynamic_cast<emergency_center *>(c.get())->testCollectionbyName(collectionName);
            }

        }

    }

}
//Activate all sensor only in given collection name
void emergency_center::activateCollectionbyName(std::string collectionName)
{
    for (auto & c : component) {
        if(c->IsComposite()){
            if(dynamic_cast<emergency_center *>(c.get())->getCollectionName()==collectionName){
                c->activateSensor();
            }else{
                dynamic_cast<emergency_center *>(c.get())->activateCollectionbyName(collectionName);
            }

        }

    }

}

//Deactive sensor only in given collection
void emergency_center::deactivateCollectionbyName(std::string collectionName)
{
    for (auto & c : component) {
        if(c->IsComposite()){
            if(dynamic_cast<emergency_center *>(c.get())->getCollectionName()==collectionName){
                c->deactivateSensor();
            }else{
                dynamic_cast<emergency_center *>(c.get())->deactivateCollectionbyName(collectionName);
            }

        }

    }

}


//Test All sensor in specific location
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

//Activate all sensors in emergency center
void emergency_center:: activateSensor(){
    for (auto & c : component) {
        if (c == component.back()) {
            c->activateSensor();
        } else {
            c->activateSensor();
        }
    }
}

//Activate all sensors in given location
void emergency_center:: activateSensorbyLocation(std::string location){
    for (auto & c : component) {
        if (c == component.back()) {
            c->activateSensorbyLocation(location);
        } else {
            c->activateSensorbyLocation(location);
        }
    }
}
//Deactivate all sensor in emergency center
void emergency_center:: deactivateSensor(){
    for (auto & c : component) {
        if (c == component.back()) {
            c->deactivateSensor();
        } else {
            c->deactivateSensor();
        }
    }
}


//Deactivate all sensor in given location
void emergency_center::deactivateSensorbyLocation(std::string location) {
    for (auto & c : component) {
        if (c == component.back()) {
            c->deactivateSensorbyLocation(location) ;
        } else {
            c->deactivateSensorbyLocation(location);
        }
    }
}


void emergency_center::sensorsOrdredByID(std::function<bool (const  std::shared_ptr<Component> &, const std::shared_ptr<Component> &)> compComponent){
    std::sort(component.begin(), component.end(),compComponent);
}

std::vector<std::shared_ptr<Component> > emergency_center::getListOfSensorsInThisEmergCenter() const
{
    std::vector<std::shared_ptr<Component>> sensors;
    for (auto & c : component) {
        if(c->IsComposite()){
            auto child_sensors= dynamic_cast<emergency_center*>(c.get())->getListOfSensorsInThisEmergCenter();
            for (auto & s : child_sensors) {
                sensors.push_back(s);
            }
        }else{
            sensors.push_back(c);
        }

    }
    return sensors;
}
void emergency_center::giveOverviewofAllSensor(std::function<bool(const std::shared_ptr<Component> &, const std::shared_ptr<Component> &)> comp)
{
    auto sensors=getListOfSensorsInThisEmergCenter();
    std::sort(sensors.begin(), sensors.end(), comp);
    for(auto &s :sensors){
        std::cout <<"Sensor with id ="<< dynamic_cast<Sensor*>(s.get())->getId()<<" at location "<<
                     dynamic_cast<Sensor*>(s.get())->getLocation()<<" by vendor " <<
                     dynamic_cast<Sensor*>(s.get())->getVendor()
                     <<std::endl;
    }
}

void emergency_center::operator++()
{
    activateSensor();
}


