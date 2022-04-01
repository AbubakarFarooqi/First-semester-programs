#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
int change(int &num)
{
    num = 200;
}
int main()
{
    int num = 100;
    cout << "brfore" << num;
    change(num);
    cout << "After" << num;

} //..End of main