#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
void Display_Cars()
{
    cout << setw(17) << "Red" << setw(8) << "Black" << setw(8) << "Brown" << setw(8) << "Blue" << setw(8) << "Gray" << setw(8) << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            cout << "Suzuki" << setw(8);
        }
        if (i == 1)
        {
            cout << "Toyota" << setw(8);
        }
        if (i == 2)
        {
            cout << "Nissan" << setw(8);
        }
        if (i == 3)
        {
            cout << "BMW" << setw(8);
        }
        if (i == 4)
        {
            cout << "Audi" << setw(8);
        }
        for (int j = 0; j < 5; j++)
        {
            cout << cars[i][j] << setw(8);
        }
        cout << endl;
    }
}
int main()
{
    Display_Cars();

} //..End of main