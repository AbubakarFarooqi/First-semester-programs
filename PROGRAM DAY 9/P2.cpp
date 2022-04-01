#include <iostream>
using namespace std;
int num[100];
string SevenBoom(int index)
{
    for (int i = 0; i < index; i++)
    {
        int place = 1;
        int temp;
        while (place <= num[i])
        {
            temp = (num[i] % (place * 10)) / place;
            if (temp == 7)
                return "BOOM!";
            place *= 10;
        }
    }
    return "there is no 7 in the array";
}
int main()
{
    cout << "How many numbers you want to input : ";
    int index;
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        cout << "enter " << i + 1 << " number : ";
        cin >> num[i];
    }
    cout << SevenBoom(index) << endl;

} //..End of main