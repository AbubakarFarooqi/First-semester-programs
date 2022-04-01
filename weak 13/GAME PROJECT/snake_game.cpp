#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;
const int MAZE_ROW = 20;
const int MAZE_COL = 40;
int Snake_Y = 10;
int Snake_X = 20;
int Food_X = 5;
int Food_Y = 5;
int Tail_X[MAZE_COL];
int Tail_Y[MAZE_ROW];
int Tail_Counter = 0;
int Score = 0;
char chk_Prev_Character = 'r';
void gotoxy(int x, int y)
{
    COORD cursorPosition;
    cursorPosition.X = x;
    cursorPosition.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}
char Maze[MAZE_ROW][MAZE_COL] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                                 {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};
void DisplayMaze()
{
    for (int i = 0; i < MAZE_ROW; i++)
    {
        for (int j = 0; j < MAZE_COL; j++)
        {
            cout << Maze[i][j];
        }
        cout << endl;
    }
    cout << "Score = " << Score;
}
bool BorderCollision()
{
    if (Snake_X == 0)
    {
        Maze[Snake_Y][Snake_X] = '#';
        Maze[Snake_Y][Snake_X + 1] = '0';
        return 0;
    }
    if (Snake_X == MAZE_COL - 1)
    {
        Maze[Snake_Y][Snake_X] = '#';
        Maze[Snake_Y][Snake_X - 1] = '0';
        return 0;
    }
    if (Snake_Y == 0)
    {
        Maze[Snake_Y][Snake_X] = '#';
        Maze[Snake_Y + 1][Snake_X] = '0';
        return 0;
    }
    if (Snake_Y == MAZE_ROW - 1)
    {
        Maze[Snake_Y][Snake_X] = '#';
        Maze[Snake_Y - 1][Snake_X] = '0';
        return 0;
    }
    return 1;
}
bool Movement()
{
    bool flag = 1;
    if (GetAsyncKeyState(VK_UP))
    {
        if (chk_Prev_Character != 'd')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_Y--;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
            chk_Prev_Character = 'u';
            flag = 0;
            // getch();
            for (int i = Tail_Counter; i > 0; i--)
            {
                gotoxy(Tail_X[i], Tail_Y[i]);
                cout << "o";
                getch();
                // Maze[Tail_Y[i]][Snake_X] = ' ';
                // Maze[Tail_Y[i] - 1][Snake_X] = 'o';
            }
        }
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
        if (chk_Prev_Character != 'u')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_Y++;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
            chk_Prev_Character = 'd';
            flag = 0;
            // getch();
        }
    }
    if (GetAsyncKeyState(VK_LEFT))
    {
        if (chk_Prev_Character != 'r')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_X--;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
            chk_Prev_Character = 'l';
            flag = 0;
            // getch();
        }
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
        if (chk_Prev_Character != 'l')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_X++;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
            chk_Prev_Character = 'r';
            flag = 0;
            // getch();
        }
    }
    if (flag)
    {
        if (chk_Prev_Character == 'u')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_Y--;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
        }
        if (chk_Prev_Character == 'd')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_Y++;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
        }
        if (chk_Prev_Character == 'l')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_X--;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
        }
        if (chk_Prev_Character == 'r')
        {
            gotoxy(Snake_X, Snake_Y);
            cout << " ";
            Snake_X++;
            gotoxy(Snake_X, Snake_Y);
            cout << "0";
        }
    }
    return BorderCollision();
}
void FoodSnakeCollision()
{
    if (Snake_X == Food_X && Snake_Y == Food_Y)
    {

        Score++;
        if (Tail_Counter != 0)
        {

            for (int i = Tail_Counter; i >= 0; i--)
            {
                Tail_X[i + 1] = Tail_X[i];
                Tail_Y[i + 1] = Tail_Y[i];
            }
        }
        Tail_Counter++;
        Tail_X[0] = Snake_X;
        Tail_Y[0] = Snake_Y;
        srand(time(NULL));
        Food_X = 1 + rand() % 38;
        Food_Y = 1 + rand() % 18;
        gotoxy(Food_X, Food_Y);
        cout << "*";
        // if (!(Food_X == 0 || Food_X > MAZE_COL - 2 || Food_Y == 0 || Food_Y > MAZE_ROW - 2 || Food_X == Snake_X || Food_Y == Snake_Y))
        // {
        //  Maze[Food_Y][Food_X] = '*';
        //   break;
        // }
    }
}
int main()
{
    system("cls");
    DisplayMaze();
    gotoxy(5, 5);
    cout << "*";
    gotoxy(20, 10);
    cout << "0";
    while (1)
    {
        // system("cls");

        FoodSnakeCollision();
        bool gameover = Movement();

        if (!gameover)
            break;

        // DisplayMaze();
        Sleep(100);
    }
    system("cls");
    DisplayMaze();
    getch();

} //..End of main