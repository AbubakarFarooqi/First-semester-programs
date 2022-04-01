#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios::in);
    while (!file.eof())
    {
        string line;
        int count = 0;
        file >> line;
        for (int i = 0; line[i] != '\0'; i++)
        {
            count++;
        }
        if (count < 4)
            cout << line << endl;
    }
} //..End of main