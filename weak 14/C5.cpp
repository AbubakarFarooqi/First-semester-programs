#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
void chkSparse(int matrix[][3], int halfElements)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
                count++;
        }
    }
    if (count >= halfElements)
        cout << "its a sparse matrix";
    else
        cout << "it is not sparse";
}
int main()
{
    int matrix[3][3] = {{1, 6, 0}, {0, 0, 0}, {4, 0, 5}};
    int halfElements = (3 * 3) / 2;
    chkSparse(matrix, halfElements);
} //..End of main