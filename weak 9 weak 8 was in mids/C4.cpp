#include <iostream>
using namespace std;
int main()
{
    string wor;
    cout << "Enter a string : ";
    cin >> wor;
    int index = wor.length();
    char word[index];
    // Filling of Char Arrray with String Elements

    for (int i = 0; i <= index; i++)
    {
        word[i] = wor[i];
    }

    //Increment in Each element of Char array
    for (int i = 0; i < index; i++)
    {
        word[i] = word[i] = word[i] + 1;
    }

    // Printing of CHar array
    cout << word << endl;

} //..End of main