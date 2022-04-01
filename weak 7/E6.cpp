#include <iostream>
using namespace std;
void Validate()
{
    int value;
    cout << "Please enter a Positive Number: ";
    cin >> value;
    while (value <= 0)
    {

        cout << "Error: " << value << " is not a Positive Number." << endl;
        cout << "Please enter a Positive Number: ";
        cin >> value;
    }
}
main()
{
    Validate();
    cout << "Program Ends" << endl;
}
