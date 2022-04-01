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
    fstream file("english.txt", ios ::in);
    string input[line];
    int i = 0;
    while (!file.eof())
    {
        getline(file, input[i]);
        cout << input[i];
        cout << endl;
        i++;
    }

} //..End of main