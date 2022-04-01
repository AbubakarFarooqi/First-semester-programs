#include <iostream>
using namespace std;

// Function to find wheater a year is leap or not
string isleap(int year)
{

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
        return " year is leap";

    else if (year % 4 == 0 && year % 100 != 0)
        return " year is leap";

    if (year % 4 != 0)
        return " year is not leap";

    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
        return " year is not leap";

} // end of isleap
int main()
{
    int year; /// variable to store year

    cout << "Enter Year ";
    cin >> year;

    // Calling isleap and displaying output;

    cout << year << isleap(year);

} //..End of main