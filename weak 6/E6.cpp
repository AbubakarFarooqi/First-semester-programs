#include<iostream>
#include<cmath>
using namespace std;
float Addition(float a , float b){

    return a+b ;
}// End of Addition

int main(){

    //..Declaring Variables
    float n1;
    float n2;

    //Inputing numbers

    cout << "Enter an First Number = " ;
    cin  >> n1;

    cout << "Enter a Second Number = " ;
    cin  >> n2;


    //..Calling Addition Funciton
    cout << "The Addition of Numbers = " << Addition(n1 , n2);

}// End of Main