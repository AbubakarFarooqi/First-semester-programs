#include<iostream>
#include<cmath>
using namespace std;
string Checking_Alphabet(char alphabet){

    if (alphabet == 'A')
        return "You Have Entered Capital A";
    else if (alphabet == 'a')
        return "You Have Entered Small A";
    else
        return "You Have Neither Entered Capital A nor Small A";

}// end of Checking_Alphabet

int main(){

    //..Varibale to store character
    char alphabet;

    //inputing aplhabet
    cout << "Enter an aplhabet = ";
    cin  >> alphabet;

    // Calling Function + Displaying Output
    cout  << Checking_Alphabet( alphabet );
}// End of Main