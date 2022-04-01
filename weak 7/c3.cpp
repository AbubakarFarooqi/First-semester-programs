#include <iostream>
using namespace std;
int HCF(int n1, int n2);
int LCM(int n1, int n2)
{

    return (n1 * n2) / HCF(n1, n2);
}
int HCF(int n1, int n2)
{

    int i = 1;
    int a = 1;
    while (a != 0)
    {
        if (n1 > n2)
        {
            a = n1 % n2;
            n1 = n2;
            if (a != 0)
                n2 = a;
        }
        else if (n2 > n1)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
            a = n1 % n2;
            n1 = n2;
            if (a != 0)
                n2 = a;
        }
    }
    return n1;
}
int main()
{
    int n1, n2;
    cout << "Enter first Number = ";
    cin >> n1;
    cout << "Enter Second NUmber = ";
    cin >> n2;
    cout << "HCF = " << HCF(n1, n2) << endl;
    cout << "LCM = " << LCM(n1, n2) << endl;

} //..End of main