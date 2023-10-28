#include <iostream>
using namespace std;
#include <string>

#include "View.h"
#include "Calendar.h"
#include "Control.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"

#define MAX_ARR_SIZE  128

int Control::launch()
{
    bool menuSelection;
    int day,month,year,hour,min,p;
    string name;
    bool t;
    string calName ="Work Calendar";
    wCal.setName(calName);
    calName ="School Calendar";
    sCal.setName(calName); 
    while(1){
        menuSelection = calView.mainMenu();
        if (!menuSelection)
            break;
        else if (menuSelection){
            calView.readEvent(name, day,month, year,hour,min,p);
            //curBookptr = new Book(id, title, author, year);
            t = calView.readEventType();
            if(!t){
                w = new WorkEvent(name, day,month, year,hour,min,p);
                wCal.add(w); 
            }
            else if(t) {
                s = new SchoolEvent(name, day,month, year,hour,min,p); 
                sCal.add(s);
            }
        }
    }
    calView.print(wCal);
    calView.print(sCal);

    return 0;
}

