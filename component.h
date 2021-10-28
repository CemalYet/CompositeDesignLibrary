#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
public:
    Component();
    virtual void printSensor();
    virtual void operator++();
    virtual void trigger();
};

#endif // COMPONENT_H


