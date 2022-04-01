#include <iostream>
using namespace std;
int arr[4];
void Filling()
{
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter " << i + 1 << "value : ";
        cin >> arr[i];
    }
}
float sum()
{
    float sum;
    for (int i = 0; i <= 4; i++)
        sum = sum + arr[i];
    return sum;
}
float average()
{
    float average = sum() / 5.0;
    return average;
}
int main()
{
    Filling();
    system("cls");
    cout << "The sum = " << sum() << endl;
    cout << "The Average  = " << average() << endl;

} //..End of main