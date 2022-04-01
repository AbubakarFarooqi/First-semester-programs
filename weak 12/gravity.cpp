#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'},
};
char temp[5][5];
bool gravity = false;
void displayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
}
void timeTick(int value)
{
    for (int i = 4; i >= 0; i--)
    {
        for (int k = 1; k <= value; k++)
        {
            for (int j = 0; j < 5; j++)
            {
                // if (i - k > 4)
                //     break;
                if (objects[i - k][j] == '#' && objects[i][j] == '-')
                {
                    // for (int z = i + k; z <)
                    objects[i - k][j] = '-';
                    objects[i][j] = '#';
                }
                else
                    continue;
            }
        }
    }
}
main()
{
    displayWorld();
    timeTick(3);
    cout << endl
         << endl;
    displayWorld();
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

} //..End of main