#include <iostream>
using namespace std;
int sum()
{

    int sum = 0;
    for (int i = 1; i <= 5; i++)
        sum = sum + i;
    return sum;

} //end of sum
int main()
{
    cout << "The sum of numbers between 1 and 5 is = " << sum();

} //..End of main