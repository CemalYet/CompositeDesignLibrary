#ifndef COMPONENT_H
#define COMPONENT_H
#include<string>
#include "sensorTypeEnum.h"

class Component
{
public:
    Component();
    virtual std::string printSensor() const = 0;
    virtual void testSnsr()=0;
    virtual void testSnsrbyLocation(std::string location) =0;
    virtual void testSnsrbyVendor(std::string vendor)=0;
    virtual void testSnsrbyType(SensorType type)=0;
    virtual void activateSensor()=0;
    virtual void activateSensorbyLocation(std::string location)=0;
    virtual void deactivateSensor()=0;
    virtual void deactivateSensorbyLocation(std::string location)=0;
    virtual void operator++()=0;
    virtual bool IsComposite() const {
       return false;
     }

};

#endif // COMPONENT_H


