#include "smokesensor.h"
#include <string>

SmokeSensor::SmokeSensor(const std::string &location, const std::string &vendor)
    :Sensor{location,vendor}
{

}

int SmokeSensor::getValue() const
{
    return value;
}

void SmokeSensor::setValue(const int &val)
{
    value = val;
}

long SmokeSensor::getThreshold() const
{
    return threshold;
}

void SmokeSensor::setThreshold(const long &tld)
{
    threshold = tld;
}

std::string SmokeSensor:: printSensor()const {
    return "Smoke sensor at location " + getLocation() +" with id "+ std::to_string(getId())+" by vendor: "+getVendor() +
            " is active= " +std::to_string(getIsActive());
}
