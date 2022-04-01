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
bool Find_Num(int number)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == number)
            return 1;
    }
    return 0;
}
int main()
{
    Filling();
    int num;
    system("cls");
    cout << "Enter Number Which YOu Want TO Find : ";
    cin >> num;
    if (Find_Num(num))
        cout << num << " is found in Array" << endl;
    else
        cout << num << " is not found in Array" << endl;

} //..End of main