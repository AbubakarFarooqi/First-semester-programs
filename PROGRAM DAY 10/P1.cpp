#include <iostream>
using namespace std;
void filling(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "ENter " << i + 1 << " element : ";
        cin >> arr[i];
    }
}
int LetterCount(char arr[], int size, char desired)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == desired)
            count++;
    }
    return count;
}
int main()
{
    cout << "How many Elements You wnat in your ARRAY : ";
    int size;
    cin >> size;
    char arr[size];
    filling(arr, size);
    cout << "Which Character You wnat To find : ";
    char desired;
    cin >> desired;
    cout << desired << "  occurs " << LetterCount(arr, size, desired) << " times in the array" << endl;

} //..End of main