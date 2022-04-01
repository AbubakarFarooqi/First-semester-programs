#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
int Car_Row_Num(string type)
{
    if (type == "Suzuki")
        return 0;
    else if (type == "Toyota")
        return 1;
    else if (type == "Nissan")
        return 2;
    else if (type == "BMW")
        return 3;
    else if (type == "Audi")
        return 4;
    else
        return 5;
}
int Car_col_Num(string color)
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
int TotalCars_in_a_Batch(int row, int col)
{
    return cars[row][col];
}
int main()
{
    cout << "Enter Car Type : ";
    string type, color;
    cin >> type;
    cout << "Enter Color : ";
    cin >> color;
    int row = Car_Row_Num(type);
    int col = Car_col_Num(color);
    if (row == 5 || col == 5)
        cout << "Wrong Input" << endl;
    else
    {
        cout << "Total Cars of " << type << " " << color << " type are " << TotalCars_in_a_Batch(row, col) << endl;
    }

} //..End of main