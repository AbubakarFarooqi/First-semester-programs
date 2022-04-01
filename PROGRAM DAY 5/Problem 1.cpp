#include<iostream>
using namespace std;

/*Write a C++ program to print the appropriate activity depending on the variable temperature and humidity
value. The table below assumes that the temperature can only be warm and cold, and the humidity can
only be dry and humid.*/

int main()
{
    string temperature , humidity; // variables that store status to temperature and humidity
    // temperature input
    cout << "Enter Status Of Temperature = ";
    cin >> temperature;
    // humidity input
    cout << "Enter Status Of Humidity = ";
    cin >> humidity;
    // Selection Part
    if ( temperature == "warm" && humidity == "dry" )
        cout << "Play tennis";

    if ( temperature == "warm" && humidity == "humid" )
        cout << "Swim";

    if ( temperature == "cold" && humidity == "dry" )
        cout << "Play basketball";

    if ( temperature == "cold" && humidity == "humid" )
        cout << "Wactch TV";

}// End of main