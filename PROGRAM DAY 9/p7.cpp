#include <iostream>
using namespace std;
string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
bool Check_Valid_input(string Code)
{
    if (Code.length() > 4)
        return 0;
    for (int i = 0; i < 4; i++)
    {
        if (!(Code[i] >= 48 && Code[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}
int value_of_index(char code)
{
    return (code % 48);
}
int Selection_Of_Index_in_Move_Array(int index, char index_value)
{
    int output_index = index + value_of_index(index_value);
    if (output_index > 9)
        return (output_index % 9) - 1;
    else
        return output_index;
}
void Display_Output(string Output_Move)
{
    for (int i = 0; i < 4; i++)
    {
        //value_of_index(Output_Move[i]);

        cout << moves[Selection_Of_Index_in_Move_Array(i, Output_Move[i])] << endl;
        }
}
int main()
{
    string Code;
    cout << "Enter Code : ";
    cin >> Code;
    if (Check_Valid_input(Code))
    {
        Display_Output(Code);
    }
    else
        cout << "Invalid Input " << endl;

} //..End of main