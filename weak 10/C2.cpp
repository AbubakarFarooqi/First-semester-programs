#include <iostream>
#include <conio.h>
using namespace std;
string Questions[4] = {"1+1 = ? ", "1+2 = ? ", "1+3 = ? ", "1+4 = ? "};
string op1[4] = {"2", "2", "4", "3"};
string op2[4] = {"3", "4", "5", "6"};
string op3[4] = {"4", "3", "8", "5"};
string User_Name[3];
char correct[4]{'a', 'c', 'a', 'c'};
char User_Options[4];
float Marks[3];
void Header()
{
    system("cls");
    cout << ".............................MATHEMATICS QUIZ................................." << endl;
}
char Display(int index)
{
    Header();
    cout << Questions[index] << endl;
    cout << "a) " << op1[index] << "\t"
         << "b) " << op2[index] << "\t"
         << "C) " << op3[index] << endl;
    char answer;
    cout << "Your Option...";
    cin >> User_Options[index];
}
void Calculation_Of_Marks(int index)
{
    float sum = 0;
    int correct_answers = 0;
    for (int i = 0; i < 4; i++)
    {
        if (User_Options[i] == correct[i])
        {
            sum = sum + 10;
            correct_answers++;
        }
    }
    Marks[index] = (sum - (10 * .25) * (4 - correct_answers));
}

void Display_Correct()
{
    Header();
    for (int i = 0; i < 4; i++)
    {
        cout << Questions[i] << endl;
        if (User_Options[i] == correct[i])
            cout << "your answer is correct" << endl;
        else
            cout << "Your option is incorrect , Correct answer is " << correct[i] << endl;
    }
}
void Sorting_Marks()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            float temp = Marks[j];
            if (Marks[j] < Marks[j + 1])
            {
                Marks[j] = Marks[j + 1];
                Marks[j + 1] = temp;
                string tem;
                tem = User_Name[j];
                User_Name[j] = User_Name[j + 1];
                User_Name[j + 1] = tem;
            }
        }
    }
}

void Final_Result()
{
    Header();
    cout << "NAME OF STUDENT  \tMARKS OBTAINED" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << User_Name[i] << "\t\t\t    " << Marks[i] << endl;
    }
}
int main()
{

    for (int i = 0; i < 3; i++)
    {
        Header();
        cout << "ENter Your Name : ";
        cin >> User_Name[i];
        for (int index = 0; index < 4; index++)
        {

            Display(index);
        }
        Calculation_Of_Marks(i);
        Display_Correct();
        getch();
    }
    Sorting_Marks();
    Final_Result();

} //..End of main