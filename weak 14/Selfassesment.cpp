#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
struct timetype
{
    int hr;
    double min;
    int sec;
};
struct tourtype
{
    string city;
    int distance;
    timetype traveltime;
};
void printTour(tourtype temp)
{
    cout << "Travelling city  = " << temp.city << endl;
    cout << "Travelling distance  = " << temp.distance << endl;
    cout << "Travelling timr  = " << temp.traveltime.hr << "hr " << temp.traveltime.min << "min " << temp.traveltime.sec << "sec" << endl;
}
tourtype InputInTour()
{
    tourtype temp;
    cout << "Enter Your Travelling city = ";
    cin >> temp.city;
    cout << "ENter Travelling DIstance = ";
    cin >> temp.distance;
    cout << "ENter Travelling Time in hour = ";
    cin >> temp.traveltime.hr;
    cout << "ENter Travelling Time in min = ";
    cin >> temp.traveltime.min;
    cout << "ENter Travelling Time in sec = ";
    cin >> temp.traveltime.sec;
    return temp;
}
void InputUsingReference(tourtype &temp)
{
    cout << "Enter Your Travelling city = ";
    cin >> temp.city;
    cout << "ENter Travelling DIstance = ";
    cin >> temp.distance;
    cout << "ENter Travelling Time in hour = ";
    cin >> temp.traveltime.hr;
    cout << "ENter Travelling Time in min = ";
    cin >> temp.traveltime.min;
    cout << "ENter Travelling Time in sec = ";
    cin >> temp.traveltime.sec;
}
int main()
{
    tourtype destination;
    destination.city = "Chicago";
    destination.distance = 550;
    destination.traveltime.hr = 9;
    destination.traveltime.min = 30;
    destination.traveltime.sec = 0;
    printTour(destination);
    cout << endl
         << endl;
    destination = InputInTour();
    printTour(destination);
    cout << endl
         << endl;
    InputUsingReference(destination);
    printTour(destination);

} //..End of main