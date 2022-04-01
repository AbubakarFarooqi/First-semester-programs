#include<iostream>
using namespace std;

void Maximum_Number( int a , int b , int c , int d ){

    if ( a > b && a > c && a > d)
        cout << a << " is Maximum number "<< endl;

    else if ( b > a && b > c && b > d)
        cout << b << " is Maximum number "<< endl;

    else if ( c > a && c > b && c > d)
        cout << c << " is Maximum number "<< endl;

    else if ( d > a && d > b && d > c)
        cout << d << " is Maximum number " << endl;


}//End of Maximum_Number


void Minimum_Number( int a , int b , int c , int d ){

    if ( a < b && a < c && a < d)
        cout << a << " is Minimum number "<< endl;

    else if ( b < a && b < c && b < d)
        cout << b << " is Minimum number "<< endl;

    else if ( c < a && c < b && c < d)
        cout << c << " is Minimum number "<< endl;

    else if ( d < a && d < b && d < c)
        cout << d << " is Minimum number " << endl;


}//End of Minimum_Number

int main(){

    //..Varibales for numbers 

    int n1 , n2 , n3 , n4;

    // inputting numbers

    cout << "Enter First number = " ;
    cin  >> n1;

    cout << "Enter Second number = " ;
    cin  >> n2;  

    cout << "Enter Third number = " ;
    cin  >> n3;

    cout << "Enter FOurth number = " ;
    cin  >> n4;

    Maximum_Number(n1 , n2 , n3 , n4);
    Minimum_Number(n1 , n2 , n3 , n4);

}//End of main