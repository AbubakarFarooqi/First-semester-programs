#include <iostream>
using namespace std;

void calculateYear(int human_year)
{

    int cat_year; // variable for cat_year
    int dog_year; // variable for dog_year

    if (human_year == 1)
    {

        cat_year = 15;
        dog_year = 15;
        cout << "Human Years = " << human_year << endl;
        cout << "Cat Years = " << cat_year << endl;
        cout << "Dog Year = " << dog_year << endl;
    }

    else if (human_year == 2)
    {

        cat_year = 15 + 9;
        dog_year = 15 + 9;
        cout << "Human Years = " << human_year << endl;
        cout << "Cat Years = " << cat_year << endl;
        cout << "Dog Year = " << dog_year << endl;
    }

    else if (human_year > 2)
    {

        int extra_year = human_year - 2;
        cat_year = 24 + (extra_year * 4);
        dog_year = 24 + (extra_year * 5);
        cout << "Human Years = " << human_year << endl;
        cout << "Cat Years = " << cat_year << endl;
        cout << "Dog Year = " << dog_year << endl;
    }

} //end of calculate year
int main()
{
    int human_year; // variable for year

    // inputting human year
    cout << "enter human year = ";
    cin >> human_year;

    // calling calculate_year
    calculateYear(human_year);

} //..End of main