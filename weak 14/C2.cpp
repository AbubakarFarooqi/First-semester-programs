#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
int main()
{
    int x;
    cout << "neter number = ";
    cin >> x;
    int *p = &x;
    print(p);

} //..End of main