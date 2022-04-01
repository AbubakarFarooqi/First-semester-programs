#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit)
{
    int place_num;
    int frequency = 0;

    for (int p = 1; p <= number; p = p * 10)
    {

        //  cout << p << "      ";
        place_num = (number % (p * 10)) / p;
        //cout << place_num << endl;
        if (place_num == digit)
            frequency = frequency + 1;
    }
    return frequency;
}
int main()
{

    int number;
    int digit;
    cout << "Enter a numnber = ";
    cin >> number;
    cout << "Which Digit Frequency you want to find = ";
    cin >> digit;
    cout << "The digit occurs " << frequencyChecker(number, digit) << " times in " << number;
} //..End of main