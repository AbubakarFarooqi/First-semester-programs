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
void reverse()
{
    system("cls");
    for (int i = 9; i >= 0; i--)
    {

        cout << arr[i] << "  ";
    }
}
int main()
{
    Filling();
    reverse();

} //..End of main