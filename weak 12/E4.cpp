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
int TotalCars_in_a_Batch(int row)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + cars[row][i];
    }
    return sum;
}
int main()
{
    cout << "Enter Car Type : ";
    string type;
    cin >> type;
    int row = Car_Row_Num(type);
    if (row == 5)
        cout << "Wrong Input" << endl;
    else
    {
        cout << "Total Cars of " << type << " type are " << TotalCars_in_a_Batch(row) << endl;
    }

} //..End of main