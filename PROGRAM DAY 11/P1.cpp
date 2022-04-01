#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;
string input;
void Reading_From_File()
{
    fstream file("cake.txt", ios::in);
    getline(file, input);
    file.close();
}
string Extract_Data_From_String(int field)
{
    int count = 0;
    string extracted_Data = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ',')
            count++;
        if (count == field - 1)
        {
            int k = i + 1;
            if (field == 1)
                k = i;
            while (1)
            {
                if (input[k] == ',' || input[k] == '\0')
                    break;
                extracted_Data = extracted_Data + input[k];
                k++;
            }
            return extracted_Data;
        }
    }
}

void getBirthdayCake(string name, int age)
{
    if (age % 2 == 0)
    {
        for (int i = 0; i < name.length() + 13; i++)
        {
            cout << "#";
        }
        cout << endl
             << "#" << age << " HB " << name << "! " << age << " #" << endl;
        for (int i = 0; i < name.length() + 13; i++)
        {
            cout << "#";
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < name.length() + 13; i++)
        {
            cout << "*";
        }
        cout << endl
             << "*" << age << " HB " << name << "! " << age << " *" << endl;
        for (int i = 0; i < name.length() + 13; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    Reading_From_File();
    int age = stoi(Extract_Data_From_String(2));
    string name = Extract_Data_From_String(1);
    getBirthdayCake(name, age);

} //..End of main