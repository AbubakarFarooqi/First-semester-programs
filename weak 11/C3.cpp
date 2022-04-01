#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    fstream file("english.txt", ios::app);
    file << endl
         << "azan";
    file.close();

} //..End of main