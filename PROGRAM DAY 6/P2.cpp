#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate Volume of pyramid
double PyramidVolume(float Length, float Width, float Height, string unit)
{

    // finding volume
    double volume = (1 / 3.0) * Length * Width * Height;

    // conversion according to unit
    if (unit == "centimeters")
    {

        volume = volume * pow(10, 6);
        return volume;
    }
    else if (unit == "milimeters")
    {

        volume = volume * pow(10, 9);
        return volume;
    }
    else if (unit == "kilometers")
    {

        volume = volume * pow(10, -9);
        return volume;
    }
    else if (unit == "meters")
        return volume;

} // end of PyramidVolume
int main()
{
    // DATA STRUCTURES for UNIT and elements of PYRAMID
    float length, width, height;
    string unit;

    // inputting elements of pyarmid
    cout << "Enter Height of pyaramid ";
    cin >> height;

    cout << "Enter width of pyaramid ";
    cin >> width;

    cout << "Enter length of pyaramid ";
    cin >> length;

    cout << "Enter unit in which you want output ";
    cin >> unit;

    // displaying output
    cout << PyramidVolume(length, width, height, unit) << " cubic " << unit << endl;

} //..End of main