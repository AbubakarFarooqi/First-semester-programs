#include <iostream>
using namespace std;
int total_Digits(int num)
{

    int p = 1;
    int total = 0;
    while (p <= num)
    {
        total = total + 1;
        p = p * 10;
    }
    return total;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << "Total digits in number  = " << total_Digits(num) << endl;

} //..End of main
