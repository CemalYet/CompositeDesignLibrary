#ifndef COMPONENT_H
#define COMPONENT_H
#include<string>

class Component
{
public:
    Component();
    virtual std::string printSensor() const = 0;
    virtual void testSnsr()=0;
    virtual void testSnsrbyLocation(std::string location) =0;
    virtual void testSnsrbyVendor(std::string vendor)=0;
    virtual void activateSensor()=0;
    virtual void activateSensorbyLocation(std::string location)=0;
    virtual void deactivateSensorbyLocation(std::string location)=0;

};

#endif // COMPONENT_H


