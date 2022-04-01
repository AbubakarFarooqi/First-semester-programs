#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
void Swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int x = 1;
    int y = 2;
    cout << "x = 1" << endl
         << "y= 2" << endl;
    Swap(&x, &y);
    cout << "x = " << x << endl
         << "y= " << y << endl;

} //..End of main