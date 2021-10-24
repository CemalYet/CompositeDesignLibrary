#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H

#include <string>
#include"sensor.h"


class SmokeSensor : public Sensor
{
public:
    SmokeSensor(const std::string &location, const std::string &vendor);
    int getValue() const;
    void setValue(const int &val);

    long getThreshold() const;
    void setThreshold(const long &tld);
    std::string printSensor() const override;

private:
    int value;
    long int threshold;
};

#endif // SMOKESENSOR_H
