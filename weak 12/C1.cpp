#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int Matrix[3][3];
void Filling()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Value of row " << i << " and column " << j << " : ";
            cin >> Matrix[i][j];
        }
    }
}
void Printing()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << Matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
int main()
{
    Filling();
    system("cls");
    Printing();
} //..End of main