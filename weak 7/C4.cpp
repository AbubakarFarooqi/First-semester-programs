#include <iostream>
using namespace std;
void PrintTriangle(int rows)
{

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int row;
    cout << "Enter NUmber of rows : ";
    cin >> row;
    system("cls");
    PrintTriangle(row);

} //..End of main