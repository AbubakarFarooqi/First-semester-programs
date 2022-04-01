#include <iostream>
using namespace std;
void filling(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "ENter " << i + 1 << " element : ";
        cin >> arr[i];
    }
}
void miniPeak(int arr[], int size)
{
    int NewArr[size];
    int count = 1;
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            NewArr[count] = arr[i];
            count++;
        }
    }
    cout << "Strictly Greater order" << endl;
    for (int i = 1; i < count; i++)
    {
        cout << NewArr[i] << endl;
    }
}
int main()
{
    int size;
    cout << "What is Size of Your array: ";
    cin >> size;
    int arr[size];
    filling(arr, size);
    miniPeak(arr, size);
} //..End of main