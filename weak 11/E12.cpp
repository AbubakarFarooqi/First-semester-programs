#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream line_read("integer.txt", ios ::in);
    int line = 0;
    char temp;
    while (1)
    {
        if (line_read.eof())
        {
            line--;
            break;
                }
        line_read >> temp;
        // cout << temp;
        // getch();

        line++;
    }
    line_read.close();
    cout << "number of lines  =  " << line << endl;
}