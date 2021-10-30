#include "sensor.h"
#include"action.h"
#include <iostream>
#include <sstream>


std::vector<std::shared_ptr<Action> > Sensor::getActions() const
{
    return actions;
}

bool Sensor::getIsActive() const
{
    return isActive;
}

int Sensor::getId() const
{
    return id;
}

void Sensor::trigger()
{
    if(getIsActive()){
        for( auto &act: actions){
            act->action();
        }
    }
}

std::string Sensor::getVendor() const
{
    return vendor;
}

SensorType Sensor::getType() const
{
    return type;
}

Sensor::Sensor(const std::string &location, const std::string &vendor, const SensorType &type): location{location}, vendor{vendor},type{type}
{
    id=++global_id;
}


std::string Sensor::getLocation() const
{
    return location;
}

void Sensor::setLocation(const std::string &value)
{
    location = value;
}


void Sensor::addAction(std::shared_ptr<Action> action)
{
    actions.push_back(action);
}

/*std::string Sensor::printSensor() const
{
    std::cout<<"Sensor id"<<id<<std::endl;
}*/

void Sensor::testSnsr()
{
   trigger();
}


void Sensor::testSnsrbyLocation(std::string location)
{
   if(location==this->location){
       trigger();
   }
}

void Sensor::testSnsrbyVendor(std::string vendor)
{
   if(vendor==this->vendor){
       trigger();
   }
}

void Sensor::testSnsrbyType(SensorType type)
{
    if(type==this->type){
        trigger();
    }
}

void Sensor::activateSensor()
{
  operator++();
}

void Sensor::activateSensorbyLocation(std::string location)
{
  if(location==this->location){
     operator++();
  }

}
void Sensor::deactivateSensorbyLocation(std::string location){
    if(location==this->location){
       operator--();
    }
}


void Sensor::operator++()
{
  isActive = true;
}

void Sensor::operator--()
{
  isActive = false;
}

std::ostream &operator<<(std::ostream &os, const Sensor &s)
{
  os << s.printSensor() << std::endl;
  return os;
}

