#include <iostream>
using namespace std;
//int i = 100;
int arr[5];
void Filling()
{
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
}
void Printing()
{
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    Filling();
    Printing();

} //..End of main