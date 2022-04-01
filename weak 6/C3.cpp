#include<iostream>
using namespace std;

float calculator(float n1 ,char oper ,float n2){

    //Function That Perform Basic Arithmatic Operations

    if( oper == '+')
        return n1 + n2;
    else if( oper == '-')
        return n1 - n2;
    else if( oper == '*')
        return n1 * n2;
    else if( oper == '/')
        return n1 / n2;
 
}//..End of Calculator

int main(){

    //..Varibales for numbers 

    float Number_1 , Number_2;

    //..Inputting Numbers

    cout << "Enter First Number = ";
    cin  >> Number_1;

    cout << "Enter Second Number = ";
    cin  >> Number_2;

    // Variable for operator
    char Operator;

    //..Inputting Operator
    cout << "Enter operator = ";
    cin  >> Operator;

    //..Calling Calculator Function

    cout << "The Result = " << calculator(Number_1 , Operator , Number_2);


}