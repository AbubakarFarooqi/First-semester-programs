#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
char Maze[24][71];
int Score = 0;
int Lives = 4;
//........................VERTICAL GHOST MOVEMENT...................

int Packman_X = 31;
int Packman_Y = 9;
int Ghost_X = 25;
int Ghost_Y = 19;
char PreviousPosition = ' ';

//....................................................................

//........................VERTICAL GHOST MOVEMENT...................
int Ghost_2X = 22;
int Ghost_2Y = 14;
int increment_2 = -1;
char PreviousPosition_2 = ' ';
//....................................................................

//........................HORIZONTAL GHOST MOVEMENT...................
int Ghost_3X = 50;
int Ghost_3Y = 16;
int increment_3 = -1;
char PreviousPosition_3 = ' ';
//....................................................................

//........................ GHOST Follow PAckman MOVEMENT..............

int Ghost_4X = 10;
int Ghost_4Y = 6;
char PreviousPosition_4 = ' ';

//....................................................................
void gotoxy(int x, int y)
{
    COORD cursorPosition;
    cursorPosition.X = x;
    cursorPosition.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}
void ReadMaze()
{
    fstream file("maze.txt", ios ::in);
    for (int i = 0; i < 24; i++)
    {
        string temp;
        getline(file, temp);
        for (int j = 0; j < 71; j++)
        {
            Maze[i][j] = temp[j];
        }

        //  = temp;
    }
}
void moveLeft()
{
    if ((Packman_X - 1 < 68 && Packman_X - 1 > 1))
    {
        if (!(Maze[Packman_Y][Packman_X - 1] == '|' || Maze[Packman_Y][Packman_X - 1] == '%'))
        {
            gotoxy(Packman_X, Packman_Y);
            cout << " ";
            Packman_X--;
            gotoxy(Packman_X, Packman_Y);
            SetConsoleTextAttribute(color, 10);
            cout << "P";
            if (Maze[Packman_Y][Packman_X] == '.')
            {
                Maze[Packman_Y][Packman_X] = ' ';
                Score++;
            }
        }
    }
}
void moveRight()
{
    if ((Packman_X + 1 < 68 && Packman_X + 1 > 1))
    {
        if (!(Maze[Packman_Y][Packman_X + 1] == '|' || Maze[Packman_Y][Packman_X + 1] == '%'))
        {
            gotoxy(Packman_X, Packman_Y);
            cout << " ";
            Packman_X++;
            gotoxy(Packman_X, Packman_Y);
            cout << "P";
            if (Maze[Packman_Y][Packman_X] == '.')
            {
                Maze[Packman_Y][Packman_X] = ' ';
                Score++;
            }
        }
    }
}
void moveUp()
{

    if ((Packman_Y - 1 < 23 && Packman_Y - 1 > 0))
    {
        if (!(Maze[Packman_Y - 1][Packman_X] == '|' || Maze[Packman_Y - 1][Packman_X] == '%'))
        {
            gotoxy(Packman_X, Packman_Y);
            cout << " ";
            Packman_Y--;
            gotoxy(Packman_X, Packman_Y);
            cout << "P";
            if (Maze[Packman_Y][Packman_X] == '.')
            {
                Maze[Packman_Y][Packman_X] = ' ';
                Score++;
            }
        }
    }
}
void moveDown()
{
    if ((Packman_Y + 1 < 23 && Packman_Y + 1 > 0))
    {
        if (!(Maze[Packman_Y + 1][Packman_X] == '|' || Maze[Packman_Y + 1][Packman_X] == '%'))
        {
            gotoxy(Packman_X, Packman_Y);
            cout << " ";
            Packman_Y++;
            gotoxy(Packman_X, Packman_Y);
            cout << "P";
            if (Maze[Packman_Y][Packman_X] == '.')
            {
                Maze[Packman_Y][Packman_X] = ' ';
                Score++;
            }
        }
    }
}
void DisplayMaze()
{
    SetConsoleTextAttribute(color, 9);
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 71; j++)
        {
            if (Maze[i][j] == '.')
                SetConsoleTextAttribute(color, 14);
            else
                SetConsoleTextAttribute(color, 9);
            cout << Maze[i][j];
        }
        cout << endl;
    }
}
int GhostDirection()
{
    srand(time(0));
    return 1 + (rand() % 4);
}
void RandomGhostMovement()
{
    int Direction = GhostDirection();
    if (Direction == 1)
    {
        if (!(Maze[Ghost_Y][Ghost_X - 1] == '%' || Maze[Ghost_Y][Ghost_X - 1] == '|' || Maze[Ghost_Y][Ghost_X - 1] == '#'))
        {
            gotoxy(Ghost_X, Ghost_Y);
            if (PreviousPosition == '.')
            {
                SetConsoleTextAttribute(color, 14);
            }
            cout << PreviousPosition;
            SetConsoleTextAttribute(color, 15);
            Ghost_X--;
            PreviousPosition = Maze[Ghost_Y][Ghost_X];
            gotoxy(Ghost_X, Ghost_Y);
            cout << "G";
        }
    }
    else if (Direction == 2)
    {
        if (!(Maze[Ghost_Y][Ghost_X + 1] == '%' || Maze[Ghost_Y][Ghost_X + 1] == '|' || Maze[Ghost_Y][Ghost_X + 1] == '#'))
        {
            gotoxy(Ghost_X, Ghost_Y);
            if (PreviousPosition == '.')
            {
                SetConsoleTextAttribute(color, 14);
            }
            cout << PreviousPosition;
            SetConsoleTextAttribute(color, 15);
            Ghost_X++;
            PreviousPosition = Maze[Ghost_Y][Ghost_X];
            gotoxy(Ghost_X, Ghost_Y);
            cout << "G";
        }
    }
    else if (Direction == 3)
    {
        if (!(Maze[Ghost_Y + 1][Ghost_X] == '%' || Maze[Ghost_Y + 1][Ghost_X] == '|' || Maze[Ghost_Y + 1][Ghost_X] == '#'))
        {

            gotoxy(Ghost_X, Ghost_Y);
            if (PreviousPosition == '.')
            {
                SetConsoleTextAttribute(color, 14);
            }
            cout << PreviousPosition;
            SetConsoleTextAttribute(color, 15);
            Ghost_Y++;
            PreviousPosition = Maze[Ghost_Y][Ghost_X];
            gotoxy(Ghost_X, Ghost_Y);
            cout << "G";
        }
    }
    else if (Direction == 4)
    {
        if (!(Maze[Ghost_Y - 1][Ghost_X] == '%' || Maze[Ghost_Y - 1][Ghost_X] == '|' || Maze[Ghost_Y - 1][Ghost_X] == '#'))
        {
            gotoxy(Ghost_X, Ghost_Y);
            if (PreviousPosition == '.')
            {
                SetConsoleTextAttribute(color, 14);
            }
            cout << PreviousPosition;
            SetConsoleTextAttribute(color, 15);
            Ghost_Y--;
            PreviousPosition = Maze[Ghost_Y][Ghost_X];
            gotoxy(Ghost_X, Ghost_Y);
            cout << "G";
        }
    }
}
void GhostFollowPackman()
{
    int DirectionArray[4] = {10000, 10000, 10000, 10000};
    // index = 0 for left
    // index = 1 for right
    // index = 2 for up
    // index = 3 for down
    if (!(Maze[Ghost_4Y][Ghost_4X + 1] == '|' || Maze[Ghost_4Y][Ghost_4X + 1] == '#' || Maze[Ghost_4Y][Ghost_4X + 1] == '%'))
    {
        DirectionArray[0] = (pow(((Ghost_4X + 1) - Packman_X), 2) + pow((Ghost_4Y - Packman_Y), 2));
    }
    if (!(Maze[Ghost_4Y][Ghost_4X - 1] == '|' || Maze[Ghost_4Y][Ghost_4X - 1] == '#' || Maze[Ghost_4Y][Ghost_4X - 1] == '%'))
    {
        DirectionArray[1] = (pow(((Ghost_4X - 1) - Packman_X), 2) + pow((Ghost_4Y - Packman_Y), 2));
    }
    if (!(Maze[Ghost_4Y - 1][Ghost_4X] == '|' || Maze[Ghost_4Y - 1][Ghost_4X] == '#' || Maze[Ghost_4Y - 1][Ghost_4X] == '%'))
    {
        DirectionArray[2] = (pow(((Ghost_4X)-Packman_X), 2) + pow(((Ghost_4Y - 1) - Packman_Y), 2));
    }
    if (!(Maze[Ghost_4Y + 1][Ghost_4X] == '|' || Maze[Ghost_4Y + 1][Ghost_4X] == '#' || Maze[Ghost_4Y + 1][Ghost_4X] == '%'))
    {
        DirectionArray[3] = (pow(((Ghost_4X)-Packman_X), 2) + pow(((Ghost_4Y + 1) - Packman_Y), 2));
    }
    // finding shortest distance
    int Shortest_index = 0;
    int temp = DirectionArray[0];
    for (int i = 1; i < 4; i++)
    {
        if (!(temp < DirectionArray[i]))
        {
            temp = DirectionArray[i];
            Shortest_index = i;
        }
    }
    if (Shortest_index == 0 && (Ghost_4X - Packman_X) != 0)
    {
        gotoxy(Ghost_4X, Ghost_4Y);
        if (PreviousPosition_4 == '.')
        {
            SetConsoleTextAttribute(color, 14);
        }
        cout << PreviousPosition_4;
        SetConsoleTextAttribute(color, 12);
        //  if (DirectionArray[0] > 0)
        Ghost_4X++;

        PreviousPosition_4 = Maze[Ghost_4Y][Ghost_4X];
        gotoxy(Ghost_4X, Ghost_4Y);
        cout << "G";
    }
    else if (Shortest_index == 1 && (Ghost_4X - Packman_X) != 0)
    {

        gotoxy(Ghost_4X, Ghost_4Y);
        if (PreviousPosition_4 == '.')
        {
            SetConsoleTextAttribute(color, 14);
        }
        cout << PreviousPosition_4;
        SetConsoleTextAttribute(color, 12);
        // if (DirectionArray[1] > 0)
        Ghost_4X--;

        PreviousPosition_4 = Maze[Ghost_4Y][Ghost_4X];
        gotoxy(Ghost_4X, Ghost_4Y);
        cout << "G";
    }
    else if (Shortest_index == 2 && (Ghost_4Y - Packman_Y) != 0)
    {
        gotoxy(Ghost_4X, Ghost_4Y);
        if (PreviousPosition_4 == '.')
        {
            SetConsoleTextAttribute(color, 14);
        }
        cout << PreviousPosition_4;
        SetConsoleTextAttribute(color, 12);
        //  if (DirectionArray[2] > 0)
        Ghost_4Y--;

        PreviousPosition_4 = Maze[Ghost_4Y][Ghost_4X];
        gotoxy(Ghost_4X, Ghost_4Y);
        cout << "G";
    }
    else if (Shortest_index == 3 && (Ghost_4Y - Packman_Y) != 0)
    {
        gotoxy(Ghost_4X, Ghost_4Y);
        if (PreviousPosition_4 == '.')
        {
            SetConsoleTextAttribute(color, 14);
        }
        cout << PreviousPosition_4;
        SetConsoleTextAttribute(color, 12);
        // if (DirectionArray[3] > 0)
        Ghost_4Y++;

        PreviousPosition_4 = Maze[Ghost_4Y][Ghost_4X];
        gotoxy(Ghost_4X, Ghost_4Y);
        cout << "G";
    }

    // Out of mind

    // else
    // {
    //     if (Maze[Ghost_4Y + 1][Ghost_4Y] == '|' || Maze[Ghost_4Y + 1][Ghost_4Y] == '%' || Maze[Ghost_4Y + 1][Ghost_4Y] == '#' || Maze[Ghost_4Y - 1][Ghost_4Y] == '|' || Maze[Ghost_4Y - 1][Ghost_4Y] == '%' || Maze[Ghost_4Y - 1][Ghost_4Y] == '#')
    //     {
    //         if (Maze[Ghost_4Y][Ghost_4X + 1] == '|' || Maze[Ghost_4Y][Ghost_4X + 1] == '%' || Maze[Ghost_4Y][Ghost_4X + 1] == '#')
    //         {
    //             while (1)
    //             {
    //                 gotoxy(Ghost_4X, Ghost_4Y);
    //                 if (PreviousPosition_4 == '.')
    //                 {
    //                     SetConsoleTextAttribute(color, 14);
    //                 }
    //                 cout << PreviousPosition_4;
    //                 SetConsoleTextAttribute(color, 12);
    //                 // if (DirectionArray[1] > 0)
    //                 Ghost_4X--;

    //                 PreviousPosition_4 = Maze[Ghost_4Y][Ghost_4X];
    //                 gotoxy(Ghost_4X, Ghost_4Y);
    //                 cout << "G";
    //                 if (!(Maze[Ghost_4Y][Ghost_4X] == '|' || Maze[Ghost_4Y][Ghost_4X] == '%' || Maze[Ghost_4Y][Ghost_4X] == '#'))
    //                     break;
    //             }
    //         }
    //         else if (Maze[Ghost_4Y][Ghost_4X - 1] == '|' || Maze[Ghost_4Y][Ghost_4X - 1] == '%' || Maze[Ghost_4Y][Ghost_4X - 1] == '#')
    //         {
    //             while (1)
    //             {
    //                 gotoxy(Ghost_4X, Ghost_4Y);
    //                 if (PreviousPosition_4 == '.')
    //                 {
    //                     SetConsoleTextAttribute(color, 14);
    //                 }
    //                 cout << PreviousPosition_4;
    //                 SetConsoleTextAttribute(color, 12);
    //                 // if (DirectionArray[1] > 0)
    //                 Ghost_4X++;

    //                 PreviousPosition_4 = Maze[Ghost_4Y][Ghost_4X];
    //                 gotoxy(Ghost_4X, Ghost_4Y);
    //                 cout << "G";
    //                 if (!(Maze[Ghost_4Y][Ghost_4X] == '|' || Maze[Ghost_4Y][Ghost_4X] == '%' || Maze[Ghost_4Y][Ghost_4X] == '#'))
    //                     break;
    //             }
    //         }
    //     }
    // }
}
void VerticalGhostMovement()
{
    gotoxy(Ghost_2X, Ghost_2Y);
    if (PreviousPosition_2 == '.')
    {
        SetConsoleTextAttribute(color, 14);
    }
    cout << PreviousPosition_2;
    SetConsoleTextAttribute(color, 11);
    if (Ghost_2Y == 1)
    {
        increment_2 = +1;
    }
    if (Ghost_2Y == 22)
    {
        increment_2 = -1;
    }
    Ghost_2Y += increment_2;
    PreviousPosition_2 = Maze[Ghost_2Y][Ghost_2X];
    gotoxy(Ghost_2X, Ghost_2Y);
    cout << "G";
}
void HorizontalGhostMovement()
{
    gotoxy(Ghost_3X, Ghost_3Y);
    if (PreviousPosition_3 == '.')
    {
        SetConsoleTextAttribute(color, 14);
    }
    cout << PreviousPosition_3;
    SetConsoleTextAttribute(color, 13);
    if (Ghost_3X == 2)
    {
        increment_3 = +1;
    }
    if (Ghost_3X == 67)
    {
        increment_3 = -1;
    }
    Ghost_3X += increment_3;
    PreviousPosition_3 = Maze[Ghost_3Y][Ghost_3X];
    gotoxy(Ghost_3X, Ghost_3Y);
    cout << "G";
}
void GameOut()
{
    int flag = 0;
    if (Packman_X == Ghost_X && Packman_Y == Ghost_Y)
    {
        flag = 1;
        Lives--;
    }
    if (Packman_X == Ghost_2X && Packman_Y == Ghost_2Y)
    {
        flag = 1;
        Lives--;
    }
    if (Packman_X == Ghost_3X && Packman_Y == Ghost_3Y)
    {
        flag = 1;
        Lives--;
    }
    if (Packman_X == Ghost_4X && Packman_Y == Ghost_4Y)
    {
        flag = 1;
        Lives--;
    }
    if (flag)
    {
        gotoxy(Packman_X, Packman_Y);
        cout << " ";
        Packman_X = 31;
        Packman_Y = 9;
        gotoxy(Packman_X, Packman_Y);
        cout << "P";
    }
}
int main()
{
    ReadMaze();
    DisplayMaze();
    int ControlGhost = 1;
    while (Lives != 0)
    {
        int CallPowerEnergizer = 0;
        if (ControlGhost % 2 == 0)
        {
            RandomGhostMovement();
            GhostFollowPackman();
            VerticalGhostMovement();
            HorizontalGhostMovement();
        }
        if (GetAsyncKeyState(VK_LEFT))
            moveLeft();
        if (GetAsyncKeyState(VK_RIGHT))
            moveRight();
        if (GetAsyncKeyState(VK_UP))
            moveUp();
        if (GetAsyncKeyState(VK_DOWN))
            moveDown();
        GameOut();

        gotoxy(0, 24);
        SetConsoleTextAttribute(color, 10);
        cout << "Score = " << Score;
        gotoxy(30, 24);
        cout << "Lives = " << Lives;
        Sleep(50);
        ControlGhost++;
        if (Lives == 0)
        {
            break;
        }
        if (Score == 466)
            break;
    }
    char x;
    cin >> x;

} //..End of main