#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
string customer[100];
int C_count = 0;
void Reading_From_File()
{
    fstream file("Customer.txt", ios::in);
    while (!file.eof())
    {
        getline(file, customer[C_count]);
        C_count++;
    }
    file.close();
}
string Find_Order(int index)
{
    string order = customer[index];
    int i = 0;
    string temp = "";
    while (1)
    {
        if (order[i] == ' ')
            break;
        i++;
    }
    i++;
    while (1)
    {
        if (order[i] == ' ')
            break;
        temp = temp + order[i];
        i++;
    }
    return temp;
}
int Find_Min_Order(int Min_price, int index)
{
    string temp = customer[index];
    int count = 0;
    for (int i = 0; i < temp.length(); i++)
    {
        if (temp[i] == '[')
        {
            int j = i + 1;
            while (1)
            {
                if (temp[j] == ']')
                    break;
                string temp_order = "";
                while (1)
                {
                    if (temp[j] == ',' || temp[j] == ']')
                        break;
                    temp_order = temp_order + temp[j];
                    j++;
                }
                int chk = stoi(temp_order);
                if (chk >= Min_price)
                    count++;
                if (temp[j] == ']')
                    break;
                j++;
            }
        }
    }
    return count;
}
void Pizza_Point(int Min_order, int Min_Price)
{
    int flag = 1;
    for (int i = 0; i < C_count; i++)
    {
        int Orders = stoi(Find_Order(i));
        int No_Min_Order = Find_Min_Order(Min_Price, i);
        if (Orders >= Min_order && No_Min_Order >= Min_order)
        {
            string temp = customer[i];
            cout << "\"";
            int k = 0;
            while (1)
            {
                if (temp[k] == ' ')
                    break;
                cout << temp[k];
                k++;
            }
            cout << "\"" << endl;
            flag = 0;
        }
    }
    if (flag == 1)
        cout << "\" \"" << endl;
}
int main()
{
    Reading_From_File();
    Pizza_Point(3, 120);

} //..End of main