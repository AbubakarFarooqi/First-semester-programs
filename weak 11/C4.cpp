#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
string name[100];
int age[100];
string school[100];
string college[100];
int matric[100];
int fsc[100];
int ecat[100];
void student_detail(int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name...";
        cin >> name[i];
        cout << "enter age...";
        cin >> age[i];
        cout << "School Name ";
        cin >> school[i];
        cout << "enter matric marks...";
        cin >> matric[i];
        cout << "Enter collgeg name...";
        cin >> college[i];
        cout << "enter fsc marks...";
        cin >> fsc[i];
        cout << "enter ecat marks..";
        cin >> ecat[i];
    }
}
void Writting_file(int size)
{
    fstream file("Student.txt", ios ::out);
    file << "Name\t"
         << "age\t"
         << "school\t"
         << "matric marks\t"
         << "college name\t"
         << "fsc marks\t"
         << "Ecat marks" << endl;
    for (int i = 0; i < size; i++)
    {
        file << name[i] << setw(5) << "\t" << age[i] << setw(3) << "\t" << school[i] << setw(6) << "\t" << matric[i] << setw(11) << "\t" << college[i] << setw(11) << "\t" << fsc[i] << setw(8) << "\t" << ecat[i] << setw(9) << endl;
    }
}
int main()
{
    cout << "how many student u have ...";
    int size;
    cin >> size;
    student_detail(size);
    Writting_file(size);

} //..End of main