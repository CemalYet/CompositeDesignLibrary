#include "evacuateneighbours.h"


EvacuateNeighbours::EvacuateNeighbours(AlarmLevel alarmLevel) : Action(alarmLevel)
{

}

void EvacuateNeighbours::action()
{
    std::cout<<"Evacuate Neighbours due to danger of explosion."<<std::endl;
}
