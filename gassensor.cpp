#include "gassensor.h"

#include <string>

Gassensor::Gassensor(const std::string &location, const std::string &vendor,const SensorType &type, const std::string &gasType):
    Sensor{location,vendor,type}, gasType{gasType}
{
}

std::string Gassensor::getGasType() const
{
    return gasType;
}

void Gassensor::setValue(int val)
{
    value = val;
}

int Gassensor::getValue() const
{
    return value;
}

void Gassensor::setTreshold(long val)
{
    treshold = val;
}

long Gassensor::getTreshold() const
{
    return treshold;
}

std::string Gassensor:: printSensor()const {
    return "Gas sensor at location " + getLocation() +" with id "+ std::to_string(getId())+ " and gasType: " + getGasType() +" by vendor: "+getVendor() +
            " is active= "+std::to_string(getIsActive());
}
