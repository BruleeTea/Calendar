#ifndef CONTROL_H
#define CONTROL_H
#define MAX_ARR_SIZE 128

#include "View.h"
#include "Calendar.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"
using namespace std;

class Control
{
  public:
    int launch();
    WorkEvent* w;
    SchoolEvent* s;

  private:
    View calView;
    Calendar wCal;
    Calendar sCal;
};

#endif

