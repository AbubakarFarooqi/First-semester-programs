#include<iostream>
using namespace std;

string Vechicle_Type (char code){

    if ( code == 'M')
        return "Motorcycle";

    else if ( code == 'E')
        return  "Electric";

    if ( code == 'S')
        return  "Sedan";

    else if ( code == 'V')
        return "Van";

    else if ( code == 'T')
       return  "Truck";


}// end of Vechicle_Type 
float taxCalculator( char type , float price ){

    if ( type == 'M')
        return ( price * (6.0 / 100.0));

    else if ( type == 'E')
        return ( price * (8.0 / 100.0));

    if ( type == 'S')
        return ( price * (10.0 / 100.0));

    else if ( type == 'V')
        return ( price * (12.0 / 100.0));


    else if ( type == 'T')
        return ( price * (15.0 / 100.0));

}//End of tacCalculator

int main(){

    float item_price ;     // variable to store vechicle price
    char code ;           // Variable to Stor vechicle Code
  
    float Tax_amount ;   // Variable to Store Tax_amount
    float Final_Price;   // Variable to Store Finnal Price

    string V_type;        // variable to store vechicle type

    // Inputting Data

    cout << "Enter Vechicle Code = ";
    cin  >> code;

    cout << "Enter Vechicle Price = ";
    cin  >> item_price;

    // Checking Vechicle Type

    V_type = Vechicle_Type(code);
    // Calculations

    Tax_amount = taxCalculator( code , item_price);
    Final_Price = item_price + Tax_amount;

    // Displaying output

    cout << "The Final Price On a Vechincle of Type " << V_type << " after adding the Tax is $" << Final_Price << endl;

}//End of main