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
int FindOdd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }
}
int main()
{
    int size;
    cout << "What is Size of Your array: ";
    cin >> size;
    int arr[size];
    filling(arr, size);
    cout << FindOdd(arr, size) << " occurs Odd Number Of Times" << endl;

} //..End of main