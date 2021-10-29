#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H

#include <string>
#include"sensor.h"


class SmokeSensor : public Sensor
{
public:
    SmokeSensor(const std::string &location, const std::string &vendor, const SensorType &type);

    std::string printSensor() const override;
};

#endif // SMOKESENSOR_H
