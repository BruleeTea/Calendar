#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Calendar.h"

Calendar::Calendar(string n)
{
    name = n;
}
Calendar::~Calendar(){
}
//Adds new event into the calendar
void Calendar::add(Event* e){
    myList.add(e);

}
//Prints Calendar
void Calendar::print()
{
    cout <<"\n\t"<< name << endl;
    myList.print();
}
void Calendar::setName(string& n){
    name=n;
}
