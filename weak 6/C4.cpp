#include<iostream>
using namespace std;

string Eligibility ( int age){

    if(age >= 18)   
        return "You Are Eligible For Vote";
    else
        return "You Are Not Eligible For Vote";

}//..end of Eligibility

int main(){

    int age; // Variable that store age

    // inputting age
    cout << "Enter age of Person = ";
    cin  >> age;

    // Displaying Output and Calling Funciton

    cout << Eligibility(age);


}// End of main()