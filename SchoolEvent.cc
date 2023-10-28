#include <iostream>
#include <iomanip>
using namespace std;
#include "SchoolEvent.h"
#include "Event.h"

SchoolEvent::SchoolEvent(string  n,int d, int m, int y, int h,int min,int p)
   :Event(n,d,m,y,h,min,p) 
{ 
  
}
bool SchoolEvent::lessThan(Event* e){
        if(getEventDate().lessThan(e->getEventDate()))
            return true;
        return false;
}

