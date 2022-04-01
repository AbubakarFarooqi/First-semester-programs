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
void Scalar_Product(int number)
{
    system("cls");
    for (int i = 0; i < 10; i++)
    {

        cout << arr[i] << "\t\t" << number * arr[i] << endl;
    }
}
int main()
{
    Filling();
    int num;
    system("cls");
    cout << "Enter Number Which YOu Want TO Find : ";
    cin >> num;
    Scalar_Product(num);

} //..End of main