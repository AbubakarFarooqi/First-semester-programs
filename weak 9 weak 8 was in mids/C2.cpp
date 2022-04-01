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
int Smallest_Num()
{
    int Smallest;
    Smallest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < Smallest)
            Smallest = arr[i];
    }
    return Smallest;
}
int main()
{
    Filling();
    cout << "Smallest num  : " << Smallest_Num() << endl;

} //..End of main