#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include <string>
#include "sensor.h"

class Motionsensor: public Sensor
{
private:
    int activationRange{0};
    int startTimeinHour{0};
    int startTimeinMinutes{0};
    int endTimeinHour{0};
    int endTimeinMinutes{0};

public:
    Motionsensor(const std::string &location, const std::string &vendor,const SensorType &type, int startTimeHour, int startTimeMinutes, int endTimeHour, int endTimeMinutes);
    Motionsensor(const std::string &location, const std::string &vendor,const SensorType &type);
    Motionsensor(int activationRange, int startTimeinHour, int startTimeinMinutes, int endTimeinHour, int endTimeinMinutes, const std::string &location, const std::string &vendor,const SensorType &type);
    int getActivationRange() const;
    void setActivationRange(const int &value);

    int getStartTimeinMinutes() const;
    void setStartTimeinMinutes(const int &value);

    int getEndTimeinHour() const;
    void setEndTimeinHour(const int &value);

    int getStartTimeinHour() const;
    void setStartTimeinHour(const int &value);

    int getEndTimeinMinutes() const;
    void setEndTimeinMinutes(const int &value);

    std::string printSensor() const override;
};

#endif // MOTIONSENSOR_H
