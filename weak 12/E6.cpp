#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
int TotalCars()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = sum + cars[i][j];
        }
    }
    return sum;
}
int main()
{
    cout << "Total Cars = " << TotalCars() << endl;
} //..End of main