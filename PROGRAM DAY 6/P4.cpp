#include <iostream>
using namespace std;

// Function to find wheater a year is leap or not
int isleap(int year)
{

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
        return 1;

    else if (year % 4 == 0 && year % 100 != 0)
        return 1;

    if (year % 4 != 0)
        return 0;

    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
        return 0;

} //End of isleap

int leap_counter(int first_year, int second_year)
{

    int counter = 0;
    if (isleap(first_year))
        counter++;
    if (isleap(first_year + 1))
        counter++;
    if (isleap(first_year + 2))
        counter++;
    if (isleap(first_year + 3))
        counter++;
    if (isleap(first_year + 4))
        counter++;
    if (isleap(first_year + 5))
        counter++;
    if (isleap(first_year + 6))
        counter++;
    if (isleap(first_year + 7))
        counter++;
    if (isleap(first_year + 8))
        counter++;
    if (isleap(first_year + 9))
        counter++;

    return counter;
} //end of leap_counter
int main()
{
    int first_year, second_year; // variable that take years

    // inpitting years
    cout << "Enter first year = ";
    cin >> first_year;

    cout << "Enter second year = ";
    cin >> second_year;

    // checking difference
    if (first_year - second_year < 0)
        cout << "leap year between " << first_year << " and " << second_year << " are " << leap_counter(first_year, second_year) << endl;

    else
        cout << "leap year between " << first_year << " and " << second_year << " are " << leap_counter(second_year, first_year) << endl;

} //..End of main