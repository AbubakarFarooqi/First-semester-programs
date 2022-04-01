#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
struct StudentType
{
    string Fname;
    string Lname;
    int score;
    char grade;
};
char CalculateGrade(int score)
{
    if (score >= 90)
        return 'A';
    else if (score >= 60 && score < 90)
        return 'B';
    else
        return 'F';
}
void InputStudent(StudentType temp[], int &count)
{
    cout << "Enter First name  = ";
    cin >> temp[count].Fname;
    cout << "Enter Last name  = ";
    cin >> temp[count].Lname;
    cout << "Enter Scores  = ";
    cin >> temp[count].score;
    temp[count].grade = CalculateGrade(temp[count].score);
    CalculateGrade(temp[count].score);
    count++;
}
void HighestScore(StudentType temp[], int count)
{
    int highest = temp[0].score;
    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (temp[i].score > highest)
        {
            highest = temp[i].score;
            index = i;
        }
    }
    PrintHighestScore(temp, index);
}
void PrintHighestScore(StudentType temp[], int index)
{
    cout << temp[index].Fname << " " << temp[index].Lname << " got highest score of = " << temp[index].score;
}
int main()
{
    int StudentCount = 0;
    StudentType student[20];
    InputStudent(temp, count);

} //..End of main