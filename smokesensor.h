#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H

#include <string>
#include"sensor.h"


class SmokeSensor : public Sensor
{
public:
    SmokeSensor(const std::string &location, const std::string &vendor);

    std::string printSensor() const override;
};

#endif // SMOKESENSOR_H
