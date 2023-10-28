#include <iostream>
#include <iomanip>
using namespace std;

#include "WorkEvent.h"
#include "Event.h"
WorkEvent::WorkEvent(string  n,int d, int m, int y, int h,int min, int p)
   :Event(n,d,m,y,h,min,p) 
{ 

}
bool WorkEvent::lessThan(Event* e){
    if (getEventPriority()<e->getEventPriority())
        return true;
    return false;
}
