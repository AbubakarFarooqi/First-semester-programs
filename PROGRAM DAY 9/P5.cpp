#include <iostream>
using namespace std;
int Common_Character(string st1, string st2)
{
    int i = 0;
    int count = 0;
    while (st1[i] != '\0')
    {
        int j = 0;
        while (st2[j] != '\0')
        {
            if (st1[i] == st2[j])
            {
                count++;
                st2[j] = '/';
                break;
            }
            j++;
        }
        i++;
    }
    return count;
}
int main()
{
    string st1, st2;
    cout << "Enter First String : ";
    cin >> st1;
    cout << "Enter Second String : ";
    cin >> st2;
    cout << "Comman Characters = " << Common_Character(st1, st2) << endl;

} //..End of main