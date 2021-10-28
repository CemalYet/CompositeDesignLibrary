#ifndef COMPONENT_H
#define COMPONENT_H
#include<string>

class Component
{
public:
    Component();
    virtual std::string printSensor() const = 0;
    virtual void operator++() = 0;
    virtual void trigger() = 0;
};

#endif // COMPONENT_H


