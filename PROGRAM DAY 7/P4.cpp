#include <iostream>
using namespace std;
void Percentage(int number)
{

    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int temp;
    for (int i = 1; i <= number; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
            count2++;
        if (temp % 3 == 0)
            count3++;
        if (temp % 4 == 0)
            count4++;
    }
    float per;
    per = ((float)count2 / (float)number) * 100.0;
    cout << "Percentage of NUmber exactly divisible by 2 = " << per << " %" << endl;

    per = ((float)count3 / (float)number) * 100.0;
    cout << "Percentage of NUmber exactly divisible by 3 = " << per << " %" << endl;

    per = ((float)count4 / (float)number) * 100.0;
    cout << "Percentage of NUmber exactly divisible by 4 = " << per << " %" << endl;
}
int main()
{
    int number;
    cout << "Enter a NUmber = ";
    cin >> number;
    if (number < 1 || number > 1000)
        cout << "Wrong INput !";
    else
        Percentage(number);

} //..End of main