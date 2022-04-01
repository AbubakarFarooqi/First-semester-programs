#include <iostream>
using namespace std;
int main()
{
    string in = "Hello";
    int i = in.length();
    for (int j = i; j >= 0; j--)
        cout << in[j];
    cout << endl;
} //..End of main