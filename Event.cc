#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"

Event::Event(string  n,int d, int m, int y, int h,int min,int p)
{
  name = n;
  setEventDate(d,m, y,h, min);
  priorites =p;
}
Event::~Event(){

}

void Event::setEventDate(int d, int m, int y, int h,int min){
    myDate.set(d,m,y,h,min);
}

void Event::print()
{
  cout<<name <<":\t "<< "Priority: "<<priorites;
  myDate.printLong();
}
//Gets Event date
Date& Event::getEventDate(){
    return myDate;
}
int Event::getEventPriority(){
    return priorites;
}
bool Event::lessThan(Event* e){
    if(priorites < e->getEventPriority())
        return true;
    return false;
}
