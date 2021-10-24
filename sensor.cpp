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

Sensor::Sensor(const std::string &location, const std::string &vendor): location{location}, vendor{vendor}
{
}


std::string Sensor::getLocation() const
{
    return location;
}

void Sensor::setLocation(const std::string &value)
{
    location = value;
}

std::string Sensor::getVendor() const
{
    return vendor;
}


void Sensor::addAction(std::shared_ptr<Action> action)
{
    actions.push_back(action);
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

