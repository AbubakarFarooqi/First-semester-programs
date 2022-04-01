#include <iostream>
using namespace std;
int marks[5];
string name[5];
void filling_Marks()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "ENter Marks of " << i + 1 << " student : ";
        cin >> marks[i];
    }
}
void filling_Name()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "ENter Name of " << i + 1 << " student : ";
        cin >> name[i];
    }
}
void Printing_of_Parallel_Arrays()
{
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << " Got " << marks[i] << " Congrats " << endl;
    }
}
int main()
{
    filling_Marks();
    filling_Name();
    Printing_of_Parallel_Arrays();

} //..End of main