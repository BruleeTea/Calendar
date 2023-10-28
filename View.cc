#include <iostream>
using namespace std;
#include <string>

#include "View.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"
#include "Calendar.h"

#define MAX_ARR_SIZE  128

int View::mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add event" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}

void View::readEvent(string& name, int& day, int& month, int& year,int& hour,int& min, int& p)
{
    cout << "Name:  ";
    cin  >> name;     
    cout << "Day:   ";
    cin >> day;       
    cout << "Month: ";
    cin >> month;    
    cout << "Year: ";
    cin >> year;     
    cout << "Hour: ";
    cin >> hour;        
    cout << "Minute:  ";
    cin  >> min; 
    cout <<"Priority: ";
    cin >> p;
}
bool View::readEventType(){
    string t= "";
    cout << "Work or School(W)(S): ";
    cin >> t;
    if (t.compare("W")){
            return true;
            }
    else if (t.compare("S")){
        return false;
        }

    return NULL;
}
void View::print(Calendar& c)
{
    c.print();
}
