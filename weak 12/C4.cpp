#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
char Ground[7][16] = {{'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

int main()
{
    cout << "enter Positions : ";
    int x, y;
    cin >> x >> y;
    bool flag = 1;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (i == y && j == x)
            {
                if (i >= 0 && i <= 4 && j > 0 && j <= 14)
                    flag = 0;
                cout << "0";
            }
            else
                cout << Ground[i][j];
        }
        cout << endl;
    }
    if (flag)
        cout << "fasle" << endl;
    else
        cout << "true" << endl;

} //..End of main