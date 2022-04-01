#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
bool row_col_equality(int arr[][3], int colID, int rowID)
{
    int trasnpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trasnpose[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {

        if (trasnpose[colID][i] != arr[rowID][i])
            return 0;
    }
    return 1;
}
bool any_row_equal_col(int arr[][3], int colID)
{
    int trasnpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trasnpose[i][j] = arr[j][i];
        }
    }
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (trasnpose[colID][j] == arr[i][j])
            {
                count++;
            }
        }
        if (count == 3)
            return 1;
        else
            count = 0;
    }
    return 0;
}
bool any_row_equal_any_col(int arr[][3])
{
    int trasnpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trasnpose[i][j] = arr[j][i];
        }
    }
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[i][k] == trasnpose[j][k])
                {
                    count++;
                }
            }

            if (count == 3)
                return 1;
            else
                count = 0;
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {2, 4, 6}, {2, 3, 3}};
    // cout << row_col_equality(arr, 0, 0) << endl;
    // cout << any_row_equal_col(arr, 1) << endl;
    // cout << any_row_equal_any_col(arr) << endl;

    int x = 9;
    cout << x++;
} //..End of main