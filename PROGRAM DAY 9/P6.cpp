#include <iostream>
using namespace std;
string Colors[100];
void filling(int index)
{
    for (int i = 0; i < index; i++)
    {
        cout << "ENter color for " << i + 1 << " square : ";
        cin >> Colors[i];
    }
}
int Check_Switches(int index)
{
    int switches = 0;
    for (int i = 0; i < index - 1; i++)
    {
        if (Colors[i] != Colors[i + 1])
            switches++;
    }
    return switches;
}
int Total_Time(int index, int switches)
{
    int Time = (2 * index) + switches;
    return Time;
}
int main()
{
    int index;
    cout << "How many Squares You want to color : ";
    cin >> index;
    int switches;
    filling(index);
    switches = Check_Switches(index);
    cout << "Total Time = " << Total_Time(index, switches) << endl;

} //..End of main