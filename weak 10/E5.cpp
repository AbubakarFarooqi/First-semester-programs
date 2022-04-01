#include <iostream>
using namespace std;
int age[5];
string name[5];
void Filling()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Name And AGe of person " << i + 1;
        cin >> name[i] >> age[i];
    }
}
void sorting()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (age[j] < age[j + 1])
            {
                int temp;
                string tem;
                tem = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tem;
                temp = age[j];
                age[j] = age[j + 1];
                age[j + 1] = temp;
            }
        }
    }
}
void printing()
{
    cout << "Name\t\tAge" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << "\t\t" << age[i] << endl;
    }
}
int main()
{
    Filling();
    sorting();
    printing();

} //..End of main