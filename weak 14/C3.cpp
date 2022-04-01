#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
void merge(int arr1[], int arr2[], int iterations)
{

    int arr3[iterations];
    for (int i = 0; i < iterations; i++)
    {
        if (i < 4)
        {
            arr3[i] = arr1[i];
            continue;
        }
        static int count = 0;
        arr3[i] = arr2[count];
        count++;
    }
    for (int i = 0; i < iterations; i++)
    {
        cout << arr3[i] << endl;
    }
}
int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {5, 6, 7, 8};
    int iterations = (sizeof(arr1) / sizeof(arr1[0])) + (sizeof(arr2) / sizeof(arr2[0]));
    merge(arr1, arr2, iterations);
} //..End of main