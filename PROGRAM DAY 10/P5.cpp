#include <iostream>
using namespace std;
int arr[100];
void filling(int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "ENter " << i + 1 << " element : ";
        cin >> arr[i];
    }
}
void sorting(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            int temp = arr[j];
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
bool Cons(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] + 1 != arr[j + 1])
                return 0;
        }
    }
    return 1;
}
int main()
{
    int size;
    cout << "What is Size of Your array: ";
    cin >> size;
    filling(size);
    sorting(size);
    cout << Cons(size) << endl;

} //..End of main