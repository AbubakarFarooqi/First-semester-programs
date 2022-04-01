#include <iostream>
using namespace std;

int main()

{
    int index;
    int index_Marks;
    cout << " How Many Students You Have : ";
    cin >> index;
    cout << " How Many Subject Each Student Have  : ";
    cin >> index_Marks;
    string name[index];
    for (int i = 0; i < index; i++)
    {
        cout << "Enter NAme of " << i + 1 << " STudent : ";
        cin >> name[i];
    }
    int marks[index_Marks];
    float avg[index_Marks];
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index_Marks; j++)
        {
            cout << "Enter MArks of " << j + 1 << " subject of student " << i + 1 << " : ";
            cin >> marks[j];
        }
        float sum = 0;
        for (int j = 0; j < index_Marks; j++)
        {
            sum = sum + marks[j];
        }
        avg[i] = (sum / index_Marks);
    }

    cout << "Name\t\tAvg" << endl;
    for (int i = 0; i < index; i++)
    {
        cout << name[i] << "\t\t" << avg[i] << endl;
    }
} //..End of main