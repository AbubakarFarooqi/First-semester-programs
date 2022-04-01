#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios ::in);
    int line = 0;
    string temp;
    while (!file.eof())
    {
        getline(file, temp);

        line++;
    }

    cout << line;
} //..End of main