#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float a , b , c; // Variables to store coefficients

    // Precaution For User
    cout << "Enter The Co-Effecients When Equation is in standard Form " << endl;

    // Input of Coefficient of x ^ 2

    cout << "Enter Co-effecient of x^2 = ";
    cin  >> a;

    // Input of Coeffecient  of x
    cout << "Enter Co-effecient of x = ";
    cin  >> b;

    // Input of Constant c
    cout << "Enter Constant Value = ";
    cin  >> c;

    // Finding Roots of Quadratic Equation

    float Root_1 , Root_2;

    Root_1 = (-b / (2 * a)) + (sqrt( pow(b , 2) - 4 * a * c) / (2 * a) );
    Root_2 = (-b / (2 * a)) - (sqrt( pow(b , 2) - 4 * a * c) / (2 * a) );

    // Displaying Output 

    cout << " X = "  << Root_1 << endl;
    cout << " X = "  << Root_2 << endl;


}// End of Main