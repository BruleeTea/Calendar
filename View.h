#ifndef VIEW_H
#define VIEW_H
#define MAX_ARR_SIZE 128

#include "Event.h"
#include "Calendar.h"

using namespace std;

class View
{
  public:
    int mainMenu();
    void readEvent(string&, int&, int&, int&,int&,int&,int&);
    bool readEventType();
    void print(Calendar&);

  private:
    int day;
    int month;
    int year;
    int hour;
    int min;
    int p;
    string name;

};

#endif

