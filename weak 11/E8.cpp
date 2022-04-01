#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{

    float x;

    fstream file("float.txt", ios::in);
    file >> x;
    cout << x << endl;

} //..End of main