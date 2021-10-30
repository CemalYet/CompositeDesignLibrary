#include "coolingsprinkler.h"

CoolingSprinkler::CoolingSprinkler(AlarmLevel alarmLevel) : Action(alarmLevel)
{

}
void CoolingSprinkler::action()
{
   std::cout << "Cooling sprinkler system has been activated succesfully"<<std::endl;;
}

