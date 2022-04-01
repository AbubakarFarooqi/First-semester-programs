#include <iostream>
using namespace std;
int arr[100];
void filling(int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "ENter " << i + 1 << " element : ";
        cin >> arr[i];
    }
}
bool isRepeatingCycle(int cycle, int size)
{
    int cycle_equal_index = (size / cycle);
    int cycle_not_equal_index = (size % cycle);
    int No_of_iteration = cycle_not_equal_index + cycle_equal_index;
    int j = 0;
    for (int i = 0; i < No_of_iteration; i++)
    {
        int temp[cycle];
        int count = 0;
        if (size - j >= cycle)
        {
            for (int l = 0; l < cycle; l++)
            {
                temp[count] = arr[j];
                j++;
                count++;
            }
        }
        else
        {
            for (int l = 0; l < cycle_not_equal_index; l++)
            {
                temp[count] = arr[j];
                j++;
                count++;
            }
        }

        for (int k = 0; k < count; k++)
        {
            if (temp[k] != arr[k])
                return 0;
        }
    }
    return 1;
}
int main()
{
    int size;
    cout << "What is Size of Your array: ";
    cin >> size;
    filling(size);
    int Length_of_Cycle;
    cout << "Enter Length of CYCLE : ";
    cin >> Length_of_Cycle;
    cout << isRepeatingCycle(Length_of_Cycle, size) << endl;

} //..End of main