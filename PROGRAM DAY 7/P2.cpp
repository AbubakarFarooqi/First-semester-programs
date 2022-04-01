#include <iostream>
using namespace std;
int triangle(int sequence)
{
    int counter = 0;
    for (int i = 1; i <= sequence; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int sequence;
    cout << "ENter Triangle NUmber of the Sequence = ";
    cin >> sequence;
    cout << " The NUnmber Of Dots Are = " << triangle(sequence) << endl;

} //..End of main