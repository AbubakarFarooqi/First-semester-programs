#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
void sqr(int *p)
{
    *p = pow(*p, 2);
}
int main()
{
    int x = 2;
    int *p;
    p = &x;
    sqr(p);
    cout << x << endl;

} //..End of main