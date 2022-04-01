#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;
const int rows = 7;
const int col = 7;
char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};
int User = 1;
void header()
{
    cout << "////////////////////////////////////////" << endl;
    cout << "              Tic Tac Toe            " << endl;
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
    cout << endl
         << "________________________________________" << endl
         << endl;
}

void display()
{
    HANDLE console_color;
    console_color = GetStdHandle(
        STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(
        console_color, 7);
    header();
    int numbering_along_y_axis = 0;

    SetConsoleTextAttribute(
        console_color, 3);
    cout << "        ";
    cout << "     A   B   C" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "        ";
        SetConsoleTextAttribute(
            console_color, 7);
        cout << "   ";
        for (int j = 0; j < 13; j++)
            cout << "-";
        cout << endl;
        for (int j = 0; j < 3; j++)
        {

            if (j == 0)
            {
                SetConsoleTextAttribute(
                    console_color, 3);
                cout << "        ";
                cout << numbering_along_y_axis << " ";
                numbering_along_y_axis++;
            }
            SetConsoleTextAttribute(
                console_color, 7);

            cout << " |";
            SetConsoleTextAttribute(
                console_color, 2);

            cout << " " << board[i][j];
        }
        SetConsoleTextAttribute(
            console_color, 7);
        cout << " |";
        cout
            << endl;
    }
    cout << "   ";
    cout << "        ";
    for (int j = 0; j < 13; j++)
        cout << "-";
    cout << endl;
}

string User_Input()
{

    string Input;
    cout << "Player " << User << " its Your Turn : ";
    if (User == 1)
    {
        cin >> Input;
    }
    else
    {
        cin >> Input;
    }
    return Input;
}

void Filling_Of_Board()
{
    while (1)
    {
        string Input = User_Input();
        string temp(1, Input[0]);
        int row = stoi(temp);
        int col;
        char col_alpha = Input[1];
        // if (board[row][col] == 'x' || board[row][col] == 'o')
        // {
        //     board[row][col] = ' ';
        // }
        // else
        {
            if (col_alpha == 'A')
                col = 0;
            else if (col_alpha == 'B')
                col = 1;
            else if (col_alpha == 'C')
                col = 2;

            if (!(board[row][col] == 'o' || board[row][col] == 'x'))
            {
                if (User == 1)
                {
                    board[row][col] = 'x';
                    User = 2;
                }
                else if (User == 2)
                {
                    board[row][col] = 'o';
                    User = 1;
                }
                break;
            }
        }
    }
}

int chkRow()
{
    int count = 0;
    int count_0;
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        count_0 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'x')
                count++;
            else if (board[i][j] == 'o')
                count_0++;
        }
        if (count == 3)
            return 1;
        else if (count_0 == 3)
            return 2;
    }

    return 0;
}

int chkCol()
{

    int count = 0;
    int count_0;
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        count_0 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (board[j][i] == 'x')
                count++;
            else if (board[j][i] == 'o')
                count_0++;
        }
        if (count == 3)
            return 1;
        else if (count_0 == 3)
            return 2;
    }

    return 0;
}
int chkDiagonal()
{
    int count = 0;
    int count_0 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (board[i][j] == 'x')
                    count++;
                else if (board[i][j] == 'o')
                    count_0++;
            }
            if (count == 3)
                return 1;
            else if (count_0 == 3)
                return 2;
        }
    }
    count = 0;
    count_0 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                if (board[i][j] == 'x')
                    count++;
                else if (board[i][j] == 'o')
                    count_0++;
            }
            if (count == 3)
                return 1;
            else if (count_0 == 3)
                return 2;
        }
    }
    return 0;
}
int main()
{
    // cls
    bool flag = 1;
    int loopCounter = 1;
    while (loopCounter <= 9)
    {
        system("cls");
        display();
        if (chkDiagonal() || chkRow() || chkCol())
        {
            system("cls");
            display();
            if (User == 1)
                User = 2;
            else
                User = 1;

            cout
                << endl;

            HANDLE console_color;
            console_color = GetStdHandle(
                STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(
                console_color, 3);
            cout << "Player " << User << " Wins !";
            flag = 0;
            break;
        }
        // else if (chkDiagonal() == 2)
        // {
        //     cout << endl;
        //     cout << "Player 2 Wins !";
        //     break;
        // }
        Filling_Of_Board();
        loopCounter++;
    }
    if (flag)
    {
        system("cls");
        display();
        cout << endl
             << "GAME DRAW!";
    }
    getch();

} //..End of main