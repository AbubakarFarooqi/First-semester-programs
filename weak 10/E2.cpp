#include <iostream>
using namespace std;
int RollNo[5] = {1, 2, 3, 4, 5};
float CGPA[5] = {1.1, 3.7, 4.1, 5.1, 1.3};

int main()
{
    int Roll;
    cout << "Enter Roll No : ";
    cin >> Roll;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (Roll == RollNo[i])
        {
            cout << "Roll No " << Roll << " Has CGPA " << CGPA[i];
            flag = 0;
            break;
        }
        else
            flag = 1;
    }
    if (flag)
        cout << "Cannot FInd Student" << endl;

} //..End of main