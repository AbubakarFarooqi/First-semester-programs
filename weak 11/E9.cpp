#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios ::in);

    char x;
    while (!file.eof())
    {
        file >> x;
        if (file.eof())
            break;
        cout << x;
    }
    cout << endl;

} //..End of main