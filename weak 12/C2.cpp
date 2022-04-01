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
bool CheckingIdentity()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (Matrix[i][j] != 1)
                    return 0;
            }
            else if (Matrix[i][j] != 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    Filling();
    if (CheckingIdentity())
        cout << "The Matrix is Identity " << endl;
    else
        cout << "The Matrix is not Identity " << endl;

} //..End of main