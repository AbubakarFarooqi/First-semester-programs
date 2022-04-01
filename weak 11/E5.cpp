#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int roll;
    string name;
    float cgpa;
    char grade;
    cout << "ENter roll no ...";
    cin >> roll;
    cout << "ENter name ...";
    cin >> name;
    cout << "ENter cgpa ...";
    cin >> cgpa;
    cout << "ENter grade ...";
    cin >> grade;
    fstream file("result_card.txt", ios ::out);
    file << "RollNumber\tName\tCGPA\tGrade" << endl;
    file << roll << setw(10) << "\t" << name << "\t" << cgpa << "\t" << grade;

} //..End of main