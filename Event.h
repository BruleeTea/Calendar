#ifndef EVENT_H
#define EVENT_H
#include "Date.h"
class Event
{
  public:
    Event(string= "unnamed",int=0, int=0, int=2000, int=0,int=0,int=0);
    virtual ~Event();
    void print();
    Date& getEventDate();
    int getEventPriority();
    void setEventDate(int,int,int,int,int);
    virtual bool lessThan(Event*);
  protected:
    string name;
    Date myDate;
    int priorites;
};

#endif
