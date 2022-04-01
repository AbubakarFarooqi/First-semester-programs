#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "ENter an integer..";
    int x;
    cin >> x;
    fstream file("integer.txt", ios::out);
    file << x;

} //..End of main