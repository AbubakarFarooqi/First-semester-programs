#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
void Display_Cars()
{
    cout << setw(17) << "Suzuki" << setw(8) << "Toyota" << setw(8) << "Nissan" << setw(8) << "BMW" << setw(8) << "Audi" << setw(8) << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            cout << "Red" << setw(8);
        }
        if (i == 1)
        {
            cout << "Black" << setw(8);
        }
        if (i == 2)
        {
            cout << "Brown" << setw(8);
        }
        if (i == 3)
        {
            cout << "Blue" << setw(8);
        }
        if (i == 4)
        {
            cout << "Gray" << setw(8);
        }
        for (int j = 0; j < 5; j++)
        {
            cout << cars[j][i] << setw(8);
        }
        cout << endl;
    }
}
int main()
{
    Display_Cars();

} //..End of main