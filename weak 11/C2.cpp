#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios::in);
    cout << "find frequency of ....";
    char chk;
    char temp;
    cin >> chk;
    int frequency = 0;
    while (!file.eof())
    {
        file >> temp;

        if (chk == temp)
            frequency++;
    }
    cout << frequency << endl;

} //..End of main