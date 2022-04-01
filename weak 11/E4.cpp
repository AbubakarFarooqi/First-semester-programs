#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "ENter a float num..";
    float x;
    cin >> x;
    fstream file("float.txt", ios::out);
    file << x;

} //..End of main