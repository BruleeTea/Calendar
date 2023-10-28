#ifndef CALENDAR_H
#define CALENDAR_H
#include "List.h"
#define MAX_ARR_SIZE 128
class Calendar
{
  public:
    Calendar(string= "CALENDAR:");
    ~Calendar();
    void print();
    void add(Event*);
    void setName(string&);
  private:
    string name;
    List myList;
};

#endif
