#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
void abc(fstream *f)
{
    char x;
    *f >> x;
    cout << x << endl;
}
// void abc(fstream f)
// {
//     char x;
//     f >> x;
//     cout << x << endl;
// }
int main()
{

    char x;
    fstream file("character.txt", ios::in);

    abc(&file);
    // abc(file)

} //..End of main
