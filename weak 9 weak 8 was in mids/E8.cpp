#include <iostream>
using namespace std;
int arr[10];
void Filling()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter " << i + 1 << " value :";
        cin >> arr[i];
    }
}
int Largest_Num()
{
    int largest;
    largest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}
int main()
{
    Filling();
    cout << "Largest num  : " << Largest_Num() << endl;

} //..End of main