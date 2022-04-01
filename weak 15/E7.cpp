#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
struct laptopType
{
    string manufacturerName;
    string model;
    float processor;
    int RAM;
    int hardDrive;
    int generation;
    int price;
    laptopType *next = NULL;
};
laptopType *HEAD = NULL;
laptopType *getLastRecord(laptopType *temp)
{
    laptopType *retrn = temp;
    while (retrn->next != NULL)
    {
        retrn = retrn->next;
    }
    return retrn;
}
void AddDataInList(string manu, string model, float pro, int ram, int hdd, int gen, int price)
{
    laptopType *Record = new laptopType;
    Record->generation = gen;
    Record->hardDrive = hdd;
    Record->manufacturerName = manu;
    Record->model = model;
    Record->price = price;
    Record->processor = pro;
    Record->RAM == ram;
    if (HEAD == NULL)
        HEAD = Record;
    else
    {
        laptopType *temp = getLastRecord(HEAD);
        temp->next = Record;
    }
}
void InputData()
{
    laptopType temp;
    cout << "Enter Manufacturer Name = ";
    cin >> temp.manufacturerName;
    cout << "ENter Model = ";
    cin >> temp.model;
    cout << "Enter Processor Name = ";
    cin >> temp.processor;
    cout << "ENter RAM = ";
    cin >> temp.RAM;
    cout << "Enter Hard Drive  = ";
    cin >> temp.hardDrive;
    cout << "ENter Generation  = ";
    cin >> temp.generation;
    cout << "ENter Price = ";
    cin >> temp.price;
    AddDataInList(temp.manufacturerName, temp.model, temp.processor, temp.RAM, temp.hardDrive, temp.generation, temp.price);
}
void DisplayData(laptopType *temp)
{
    cout << "Manufacturer Name = " << temp->manufacturerName << endl
         << "Model = " << temp->model << endl
         << "Processor Name = " << temp->processor << endl
         << "RAM = " << temp->RAM << endl
         << "Hard Drive  = " << temp->hardDrive << endl
         << "Generation  = " << temp->generation << endl
         << "Price = " << temp->price << endl;
}
void SearchModel(string Source)
{
    laptopType *temp = HEAD;
    bool isFound = false;
    while (1)
    {
        if (temp->model == Source)
        {
            isFound = true;
            break;
        }
        if (temp->next == NULL)
            break;
        temp = temp->next;
    }
    if (isFound)
        cout << "FOund";
    else
        cout << "not FOund";
}
int main()
{
    while (1)
    {
        cout << "DO you want to add data : ";
        char in;
        cin >> in;
        if (in == 'y')
            InputData();
        else
            break;
    }
    // laptopType *temp = HEAD;
    // while (1)
    // {
    //     system("cls");
    //     DisplayData(temp);
    //     getch();
    //     if (temp->next == NULL)
    //         break;
    //     temp = temp->next;
    // }
    cout << "which model u want to search = ";
    string source;
    cin >> source;
    SearchModel(source);
    getch();

} //..End of main