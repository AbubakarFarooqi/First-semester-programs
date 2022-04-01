#include <iostream>
using namespace std;
bool stlength(string input)
{
    int index = 0;
    char temp = ' ';
    while (temp != '\0')
    {
        temp = input[index];
        index++;
    }
    index = index - 1;
    if (index % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    char input[66];
    cout << " Enter a String : ";
    cin >> input;
    cout << stlength(input) << endl;

} //..End of main