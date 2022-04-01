#include <iostream>
#include "conio.h"
using namespace std;
int arr[1000];
void filling(int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter A value : ";
        cin >> arr[i];
    }
}
bool IsTrue(int size)
{
    int flag = 0;
    int temp[size - 1]; // it will store items without i-th index value
    for (int i = 0; i < size; i++)
    {
        int index = 0;
        for (int j = 0; j < size; j++)
        {
            if (j == i)
                continue;
            temp[index] = arr[j];
            index++;
        }

        for (int j = 0; j < size - 2; j++) // because last element has index size -1 and we have to check to size -2
        {
            if (temp[j] >= temp[j + 1])
            {
                // cout << "fuck";
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if (flag == 1)
            return flag;
    }
    return flag;
}
int main()
{
    int size;
    cout << "enter Size of Array : ";
    cin >> size;
    filling(size);
    cout << IsTrue(size) << endl;

} //..End of main