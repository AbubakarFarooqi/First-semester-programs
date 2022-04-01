#include<iostream>
#include<cmath>
using namespace std;
void Print_Number(int a , float b){

    //..Displaying output
    cout << "The int number is = " << a << endl;
    cout << "The Float Number is = " << b;
}// End of Print_Number

int main(){

    //..Declaring Variables
    int n1;
    float n2;

    //Inputing numbers

    cout << "Enter an Integer = " ;
    cin  >> n1;

    cout << "Enter a Float Number = " ;
    cin  >> n2;


    //..Calling Printing Number
    Print_Number(n1 , n2);
}// End of Main