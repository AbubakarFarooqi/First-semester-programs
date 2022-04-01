#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
struct menuType
{
    string name;
    float price;
};
string ExtractionOfSpecificField(string source, int field)
{
    int comma = 1;
    string temp = "";
    for (int i = 0; i < source.length(); i++)
    {
        if (source[i] == ',')
        {
            comma++;
            i++;
        }
        if (comma == field)
            temp = temp + source[i];
    }
    return temp;
}
void getDataFromFile(menuType menu[])
{
    fstream file("menu.txt", ios ::in);
    int i = 0;
    while (!file.eof())
    {
        string temp;
        getline(file, temp);
        menu[i].name = ExtractionOfSpecificField(temp, 1);
        menu[i].price = stof(ExtractionOfSpecificField(temp, 2));
        i++;
    }
}
void DisplayOrders(int index[], menuType menu[], int orders)
{
    system("cls");
    cout << "You placed Folowing orders" << endl;
    double bill = 0;
    for (int i = 0; i < orders; i++)
    {
        cout << menu[index[i]].name << "\t" << menu[index[i]].price << endl;
        bill = bill + menu[index[i]].price;
    }
    cout << "your bill without tax is = " << bill;
}
void Menu(menuType menu[])
{
    double price = 0;
    int index[100];
    int orderCount = 0;
    int option;
    do
    {
        system("cls");
        cout << "Welcome to our Restraunt" << endl
             << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << i + 1 << " " << menu[i].name << "\t" << menu[i].price << endl;
        }
        cout << endl
             << "Press 9 to complete order" << endl;
        cout << "Your option...";
        cin >> option;
        if (option == 1)
        {
            index[orderCount] = 0;
            orderCount++;
        }
        if (option == 2)
        {
            index[orderCount] = 1;
            orderCount++;
        }
        if (option == 3)
        {
            index[orderCount] = 2;
            orderCount++;
        }
        if (option == 4)
        {
            index[orderCount] = 3;
            orderCount++;
        }
        if (option == 5)
        {
            index[orderCount] = 4;
            orderCount++;
        }
        if (option == 6)
        {
            index[orderCount] = 5;
            orderCount++;
        }
        if (option == 7)
        {
            index[orderCount] = 6;
            orderCount++;
        }
        if (option == 8)
        {
            index[orderCount] = 7;
            orderCount++;
        }
    } while (option != 9);
    DisplayOrders(index, menu, orderCount);
}
int main()
{
    menuType menu[8];
    getDataFromFile(menu);
    Menu(menu);
} //..End of main