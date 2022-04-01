#include <iostream>
using namespace std;
void PatientInfo(int days)
{

    int doc = 7;
    int patient;
    int count = 1;
    int un_treated = 0;
    int treated = 0;
    int count_treated = 0;
    int count_un_treated = 0;
    for (int i = 1; i <= days; i++)
    {
        if (count == 3)
        {
            count = 0;
            if (count_un_treated > count_treated)
            {
                doc++;
            }
        }
        cout << "ENter The Patient Arrived : ";
        cin >> patient;
        //cout << "Enter The Patients Arrived in Day " << i;
        if (patient > doc)
        {
            un_treated = patient - doc;
            treated = patient - un_treated;
        }
        else
        {
            treated = patient;
            un_treated = 0;
        }
        count_treated = count_treated + treated;
        count_un_treated = count_un_treated + un_treated;
        ;
        count++;
    }
    cout << " treated  = " << count_treated << endl
         << "untreated  = " << count_un_treated << endl;
}
int main()
{
    int days;
    cout << "enter umber of days  = ";
    cin >> days;
    PatientInfo(days);

} //..End of main