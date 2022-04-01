#include<iostream>
#include<cmath>
using namespace std;
int main(){

    double number; // variable to Store the input number and its sine
    
    // inputting number
    cout << "Enter a Number = ";
    cin  >> number;

    // finding Sine

    number = sin(number);

    // displaying output

    cout << "The Sine of number is = " << number << endl; ;

}// End of Main