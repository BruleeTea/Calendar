#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H

#include <string>
#include "Event.h"
using namespace std;

class SchoolEvent : public Event
{
  public:
    SchoolEvent(string= "unnamed",int=0, int=0, int=2000, int=0,int=0,int =0);
    bool lessThan(Event*);


  private:
};

#endif

