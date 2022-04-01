#include<iostream>
using namespace std;

/*Write a program that asks the user which country he/she lives in. If the country is not “Germany” or
“Australia”, the program should print out “You should come to visit these sometime!”.
*/

int main()
{
    string CountryName; // variable to store country name
    // country name input
    cout << "Enter The Name Of Country in Which You Live = ";
    cin >> CountryName;
    // Condition To check wheater the country is other than Australia and Germany
    if ( CountryName != "Germany" && CountryName != "Australia")
    	cout << "You should come to visit these sometime!";
    

}// End of main
