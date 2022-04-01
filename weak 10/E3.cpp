#include <iostream>
using namespace std;
int Roll[] = {1, 2, 3, 4, 5};
int marks[] = {121, 432, 243, 25234, 12123};
int Highest_Marks()
{
    int size = sizeof(marks) / sizeof(marks[0]);
    int temp = marks[0];
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (temp < marks[i])
        {
            temp = marks[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    Highest_Marks();
    cout << "Roll NO " << Roll[Highest_Marks()] << " Got Higest Marks " << marks[Highest_Marks()];
} //..End of main