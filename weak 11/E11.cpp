#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream line_read("english.txt", ios ::in);
    int line = 0;
    string temp;
    while (!line_read.eof())
    {
        getline(line_read, temp);
        line++;
    }
    line_read.close();
    cout << "number of lines  =  " << line << endl;
}