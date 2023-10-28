#ifndef WORKEVENT_H
#define WORKEVENT_H

#include <string>
#include "Event.h"

using namespace std;

class WorkEvent : public Event
{
  public:
    WorkEvent(string= "unnamed",int=0, int=0, int=2000, int=0,int=0, int=0);
    bool lessThan(Event*);


  private:
};

#endif

