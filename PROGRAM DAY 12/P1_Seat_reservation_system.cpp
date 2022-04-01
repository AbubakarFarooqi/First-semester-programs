#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
char Seats[13][6] = {
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
};
string col_alpha[6] = {"A", "B", "C", "D", "E", "F"};
string Ticket;
string Desired_Seat;
int row;
int col;

void header()
{
    system("cls");
    cout << "/////////////////////////////////////////////////////////////////////////" << endl;
    cout << "//             Aeroplane  seat reservation system                      \\\\" << endl;
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
    cout << endl;
}
int Menu()
{
    header();
    cout << "Main MEnu > " << endl
         << endl;
    cout << "Press 1. For Reserving a Seat" << endl;
    cout << "Press 2. For Printing The Reserved Seats" << endl;
    cout << "Press 3. For Storing Current arrangement in FIle" << endl;
    cout << "Press 4. For Exit" << endl
         << endl;
    int option;
    cout << "ENter Your choice....";
    cin >> option;
    return option;
}
void User_Prompt()
{
    header();
    cout << "Enter Your Ticket type : ";
    cin >> Ticket;
    cout << "Enter your Desired Seats (such as 0A) : ";
    cin >> Desired_Seat;
}
int convert_alphabet_to_col_number(string source)
{
    for (int i = 0; i < 6; i++)
    {
        if (source == col_alpha[i])
            return i;
    }
    return -1;
}
int Extraction_of_row_and_col_from_string()
{
    int i = 0;
    string temp = "";
    while (Desired_Seat[i] >= 48 && Desired_Seat[i] <= 57)
    {
        temp = temp + Desired_Seat[i];
        i++;
    }
    row = stoi(temp);
    temp = "";
    while (Desired_Seat[i] != '\0')
    {
        temp = temp + Desired_Seat[i];
        i++;
    }
    col = convert_alphabet_to_col_number(temp);
    if (col == -1)
    {
        cout << "invalid input";
        getch();
        return 1;
    }
    return 0;
}
bool Validation()
{
    int flag = 0;
    if (Ticket == "first")
        flag = 1;
    else if (Ticket == "business")
        flag = 1;
    else if (Ticket == "economy")
        flag = 1;
    if (flag == 1)
    {
        if (Ticket == "first")
        {
            if (!(row >= 0 && row <= 1) || !(col >= 0 && col <= 5))
            {
                cout << "Invalid INput" << endl;
                getch();
                return 1;
            }
        }
        if (Ticket == "business")
        {
            if (!(row >= 2 && row <= 6) || !(col >= 0 && col <= 5))
            {
                cout << "Invalid INput" << endl;
                getch();
                return 1;
            }
        }
        if (Ticket == "economy")
        {
            if (!(row >= 7 && row <= 12) || !(col >= 0 && col <= 5))
            {
                cout << "Invalid INput" << endl;
                getch();
                return 1;
            }
        }
        if (Seats[row][col] == 'X')
        {
            cout << "Invalid INput" << endl;
            getch();
            return 1;
        }
    }
    else
        return 0;
    return 0;
}
void Printing()
{
    header();
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            cout << Seats[i][j] << "\t";
        }
        cout << endl;
    }
}
void filling()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (Seats[i][j] == 'X')
                continue;
            if (i == row && j == col)
            {
                Seats[i][j] = 'X';
            }
            else
                Seats[i][j] = '*';
        }
    }
}
void LoadSeatsFromFile(string fileName)
{
    fstream temp(fileName, ios::app);
    temp.close();
    fstream file(fileName, ios ::in);
}
int main()
{
    header();
    string flight;
    cout << "Enter Flight no : ";
    cin >> flight;
    flight = flight + ".txt";
    LoadSeatsFromFile(flight);
    while (1)
    {
        header();
        int option;
        option = Menu();
        if (option == 1)
        {
            User_Prompt();
            int chk = Extraction_of_row_and_col_from_string();
            if (chk)
                continue;
            if (Validation())
                continue;
            filling();
        }
        else if (option == 2)
            Printing();
        cout << endl
             << "press any key to continue..." << endl;
        getch();
    }

} //..End of main