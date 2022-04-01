#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios ::in);
    int count = 0;
    while (1)
    {
        char temp;
        string line;
        file >> temp;
        if (temp == 'T')
            continue;
        getline(file, line);
        count++;
        if (file.eof())
            break;
    }
    cout << "Lines  = " << count << endl;

} //..End of main