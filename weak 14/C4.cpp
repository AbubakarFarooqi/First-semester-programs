#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
void rotateArray(int arr[], int rotationIndex, int size)
{
    int temp[rotationIndex];
    for (int i = 0; i < rotationIndex; i++)
    {
        temp[i] = arr[i];
    }
    int j = 0;
    for (int i = rotationIndex; i < size; i++)
    {
        arr[j] = arr[i];
        j++;
    }
    j = 0;
    for (int i = size - rotationIndex; i < size; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    rotateArray(arr, 4, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

} //..End of main