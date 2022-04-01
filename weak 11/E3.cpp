#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "ENter an chararcter..";
    char x;
    cin >> x;
    fstream file("character.txt", ios::out);
    file << x;

} //..End of main