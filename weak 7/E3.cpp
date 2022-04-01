#include <iostream>
using namespace std;
void fibonacciSeries(int length)
{
    int sum = 0;
    int temp;
    int number = 1;
    cout << sum;
    for (int i = 1; i <= length - 1; i++)
    {
        temp = sum;

        sum = sum + number;
        number = temp;
        cout << " , " << sum;
    }
    cout << endl;
} // end of fibonacciSeries
int main()
{
    int length;
    cout << "How many numbers You want to Print in Fibonacci series = ";
    cin >> length;
    fibonacciSeries(length);

} //..End of main