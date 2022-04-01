#include <iostream>
using namespace std;
void PrintTable(int number)
{

    for (int i = 0; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }
}
int main()
{
    PrintTable(24);
    cout << endl
         << endl;
    PrintTable(50);
    cout << endl
         << endl;
    PrintTable(29);
    cout << endl
         << endl;

} //..End of main