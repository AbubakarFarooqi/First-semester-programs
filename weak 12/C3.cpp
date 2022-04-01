#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
string BattleGround[5][5] = {
    {".", ".", ".", "*", "*"},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", ".", "*", "*", "."},
};
char Letter[] = {'A', 'B', 'C', 'D', 'E'};
int index_of_row(char input)
{
    for (int i = 0; i < 5; i++)
    {
        if (Letter[i] == input)
            return i;
    }
}
string Fire(string input)
{
    int row = index_of_row(input[0]);
    string temp(1, input[1]);
    int col = stoi(temp);
    if (BattleGround[row][col] == ".")
        return "splash!";
    if (BattleGround[row][col] == "*")
        return "BOOM!";
}
main()
{
    string input;
    cout << "ENter Input : ";
    cin >> input;
    cout << Fire(input) << endl;

} //..End of main