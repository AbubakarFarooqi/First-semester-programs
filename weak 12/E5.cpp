#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
int Converter(string color)
{
    if (color == "Red")
        return 0;
    else if (color == "Black")
        return 1;
    else if (color == "Brown")
        return 2;
    else if (color == "Blue")
        return 3;
    else if (color == "Gray")
        return 4;
    else
        return 5;
}
int Sum_of_Specific_Cars(int col)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + cars[i][col];
    }
    return sum;
}
int main()
{
    string color;
    cout << "Enter Color : ";
    cin >> color;
    int col = Converter(color);
    if (col == 5)
        cout << "Wrong Input " << endl;
    else
        cout << "Total Cars of " << color << " color in the Stock are = " << Sum_of_Specific_Cars(col) << endl;

} //..End of main