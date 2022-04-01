#include<iostream>
#include<cmath>
using namespace std;
int main(){

    double number; // variable to Store the input number and its Square root
    
    // inputting number
    cout << "Enter a Number = ";
    cin  >> number;

    // finding sqrt

    number = pow(number , 0.5);

    // displaying output

    cout << "The squareroot of number is = " << number << endl; ;

}// End of Main