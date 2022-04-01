#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    cout << "Total Red Cars = " << cars[0][0] + cars[1][0] + cars[2][0] + cars[3][0] + cars[4][0] << endl;

} //..End of main