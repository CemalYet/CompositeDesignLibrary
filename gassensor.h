#ifndef GASSENSOR_H
#define GASSENSOR_H

#include "sensor.h"
#include <string>

class Gassensor : public Sensor
{
private:
    const std::string gasType;
    int value{0};
    long int treshold;

public:
    Gassensor(const std::string &location, const std::string &vendor, const SensorType &type, const std::string &gasType);
    std::string getGasType() const;
    void setValue(int val);
    int getValue() const;
    void setTreshold(long val);
    long getTreshold() const;
    std::string printSensor() const override;
};

#endif // GASSENSOR_H
