#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int chr;
    int *p;
    p = &chr;
    cout << "enter a number  = ";
    cin >> *p;
    cout << "you enter  =  " << *p;

} //..End of main