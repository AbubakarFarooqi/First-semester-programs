#include <iostream>
using namespace std;
string streak[4];
string testJacpot()
{
    for (int i = 0; i < 3; i++)
    {
        if (streak[i] != streak[i + 1])
            return "false";
    }
    return "true";
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Give Your Input : ";
        cin >> streak[i];
    }
    cout << testJacpot() << endl;

} //..End of main