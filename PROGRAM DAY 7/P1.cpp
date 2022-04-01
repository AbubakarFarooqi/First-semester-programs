#include <iostream>
using namespace std;
void amplify(int num)
{

    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
            cout << i * 10;
        else
            cout << i;
        if (i == num)
            break;
        cout << " , ";
    }
} // end of amplify
int main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;
    if (num < 1)
        cout << "wrong input ";
    else
        amplify(num);

} //..End of main