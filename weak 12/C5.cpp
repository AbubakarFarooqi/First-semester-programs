#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int arr[4][3];
void filling()
{
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter Value of row " << i << " and column " << j << " : ";
                cin >> arr[i][j];
            }
        }
    }
}
int main()

{
    filling();
    int temp[3] = {-1, -1, -1};
    int mai = 0;
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        int k = i + 1;
        for (int j = 0; j < 3; j++)
        {
            count = 0;
            for (int z = 0; z < 3; z++)
            {
                int flag = 0;
                for (int l = 0; l < 3; l++)
                {
                    if (temp[l] == k)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
                if (arr[i][z] == arr[k][z])
                    count++;
            }
            if (count == 3)
            {
                static int index = 0;
                mai++;
                temp[index] = k;
                index++;
            }
            k++;
        }
    }
    if (mai != 0)
        mai++;
    cout << mai << endl;

} //..End of main