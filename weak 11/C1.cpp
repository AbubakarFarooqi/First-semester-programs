#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios::in);
    cout << "find locaion of ....";
    char chk;
    char temp;
    cin >> chk;
    int location = 0;
    while (!file.eof())
    {
        file >> temp;
        location++;
        if (chk == temp)
            break;
    }
    cout << location << endl;

} //..End of main