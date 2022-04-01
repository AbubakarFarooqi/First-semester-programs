#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{

    int x;

    fstream file("integer.txt", ios::in);
    file >> x;
    cout << x << endl;

} //..End of main