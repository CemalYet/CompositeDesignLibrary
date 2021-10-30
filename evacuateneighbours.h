#ifndef EVACUATENEIGHBOURS_H
#define EVACUATENEIGHBOURS_H

#include "action.h"
class EvacuateNeighbours: public Action
      {
        public:
            EvacuateNeighbours(AlarmLevel alarmLevel);
            void action() override;
      };
#endif // EVACUATENEIGHBOURS_H




