#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
bool BorderChk(int x1, int x2, int y1, int y2, int x, int y)
{
    if ((x == x1 || x == x2) && (y >= y1 && y <= y2))
    {
        cout << "Border" << endl;
        return 0;
    }
    else if ((y == y1 || y == y2) && (x >= x1 && x <= x2))
    {
        cout << "Border" << endl;
        return 0;
    }
    return 1;
}
bool insideChk(int x1, int x2, int y1, int y2, int x, int y)
{
    if (y > y1 && y < y2 && x > x1 && x < x2)
    {
        cout << "inside" << endl;
        return 0;
    }
    return 1;
}
int main()
{
    int X1, X2, Y1, Y2, x, y;
    cout << "Enter X1 : ";
    cin >> X1;
    cout << "ENter Y1 : ";
    cin >> Y1;
    cout << "ENter X2 : ";
    cin >> X2;
    cout << "ENter Y2 : ";
    cin >> Y2;
    cout << "ENter x : ";
    cin >> x;
    cout << "ENter y : ";
    cin >> y;
    // bool flag;
    if (BorderChk(X1, X2, Y1, Y2, x, y))
    {
        if (insideChk(X1, X2, Y1, Y2, x, y))
            cout << "Outside" << endl;
    }

} //..End of main