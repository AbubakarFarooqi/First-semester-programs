#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int beach(string place)
{
    int count = 0;
    int i = 0;
    for (i = 0; i < place.length(); i++)
    {

        if (i == 0)
        {
            if (place[i] == '0' && place[i + 1] == '0')
            {
                place[i] = '1';
                count++;
            }
        }
        else if (i == place.length() - 1)
        {
            if (place[i] == '0' && place[i - 1] == '0')
            {
                place[i] = '1';
                count++;
            }
        }
        else if (place[i] == '0' && place[i - 1] == '0' && place[i + 1] == '0')
        {
            place[i] = '1';
            count++;
        }
    }
    if (i == 1)
        count++;
    return count;
}
int main()
{
    cout << "ENter Places : ";
    string place;
    cin >> place;
    cout << beach(place) << endl;

} //..End of main