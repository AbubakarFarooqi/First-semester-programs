#include <iostream>
using namespace std;
int num[100];
void Filling(int index)
{
    for (int i = 0; i < index; i++)
    {
        cout << "Enter " << i + 1 << " value : ";
        cin >> num[i];
    }
}
int Even_Odd_Transformation(int index, int times)
{
    for (int i = 0; i < times; i++)
    {
        for (int j = 0; j < index; j++)
        {
            if (num[j] % 2 == 0)
                num[j] = num[j] - 2;
            else
                num[j] = num[j] + 2;
        }
    }
}
void Printing(int index)
{
    system("cls");
    for (int i = 0; i < index; i++)
    {
        cout << num[i] << endl;
    }
}
int main()
{
    int index;
    cout << "How many numbers you want in your array : ";
    cin >> index;
    int times;
    cout << "How many Times You want Even Odd Transformation : ";
    cin >> times;
    Filling(index);
    Even_Odd_Transformation(index, times);
    Printing(index);

} //..End of main