#include "motionsensor.h"
#include <iostream>
#include <string>
#include <ctime>
#include "action.h"


Motionsensor::Motionsensor(const std::string &location, const std::string &vendor, const SensorType &type, int startTimeHour, int startTimeMinutes, int endTimeHour, int endTimeMinutes)
    :Sensor(location,vendor,type), startTimeinHour{startTimeHour}, startTimeinMinutes{startTimeMinutes}, endTimeinHour{endTimeHour}, endTimeinMinutes{endTimeMinutes}
{

}
Motionsensor::Motionsensor(const std::string &location, const std::string &vendor,const SensorType &type)
    :Sensor(location,vendor,type)
{

}

Motionsensor::Motionsensor(int activationRange, int startTimeinHour, int startTimeinMinutes, int endTimeinHour, int endTimeinMinutes, const std::string &location, const std::string &vendor,const SensorType &type)
    : Sensor(location, vendor,type),
    activationRange(activationRange),
    startTimeinHour(startTimeinHour),
    startTimeinMinutes(startTimeinMinutes),
    endTimeinHour(endTimeinHour),
    endTimeinMinutes(endTimeinMinutes)
{}


int Motionsensor::getActivationRange() const
{
    return activationRange;
}

void Motionsensor::setActivationRange(const int &value)
{
    activationRange = value;
}

int Motionsensor::getStartTimeinMinutes() const
{
    return startTimeinMinutes;
}

void Motionsensor::setStartTimeinMinutes(const int &value)
{
    startTimeinMinutes = value;
}

int Motionsensor::getEndTimeinHour() const
{
    return endTimeinHour;
}

void Motionsensor::setEndTimeinHour(const int &value)
{
    endTimeinHour = value;
}

int Motionsensor::getStartTimeinHour() const
{
    return startTimeinHour;
}

void Motionsensor::setStartTimeinHour(const int &value)
{
    startTimeinHour = value;
}

int Motionsensor::getEndTimeinMinutes() const
{
    return endTimeinMinutes;
}

void Motionsensor::setEndTimeinMinutes(const int &value)
{
    endTimeinMinutes = value;
}


std::string Motionsensor:: printSensor()const {

    return "Motion sensor at location " +getLocation() +"with id "+std::to_string(getId())+" by vendor: " +getVendor() +
            " with activation range "+std::to_string(activationRange) +" meter and is "+ "active= "+std::to_string(getIsActive())+" ,and will be active only between "
            +std::to_string(getStartTimeinHour())+" : "+std::to_string(getEndTimeinMinutes())+ " and " +std::to_string(getEndTimeinHour())+ " : "+std::to_string(getEndTimeinMinutes());
}
