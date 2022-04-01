#include <iostream>
using namespace std;
char code[] = {'a', 'b', 'c', 'd', 'e'};
float Discount[] = {0.25, .10, .20, .30, .50};
int Find_code(int Ucode)
{
    int i = 0;
    int index = 0;
    while (code[i] != '\0')
    {
        if (Ucode == code[i])
        {
            index = i;
            return index;
        }
        index++;
        i++;
    }
}
float Total_bill(float price, int items, int index)
{
    float discount = (price * items) * Discount[index];
    return ((price * items) - discount);
}
int main()
{
    float Total_price;
    int items;
    char Ucode;
    cout << "ENter Total Items : ";
    cin >> items;
    cout << "ENter Price per item  : ";
    cin >> Total_price;
    cout << "ENter Price code : ";
    cin >> Ucode;
    int index = Find_code(Ucode);
    cout << "Your Total Bill With Discoutn is " << Total_bill(Total_price, items, index) << endl;
    ;

} //..End of main