#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
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
                static int k = j;
                string temp_order = "";

                getch();

                while (1)
                {
                    if (temp[k] == ',')
                        break;
                    temp_order = temp_order + temp[k];

                    k++;
                }

                int chk_order = stoi(temp_order);
                cout << chk_order;
                if (chk_order >= 5)
                    count++;
                j++;
                k += 1;
            }
        }
    }
    return count;
} //..End of main