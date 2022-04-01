#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int check = 1 ;
	string fruitName; // variable to store frruit name
    string day;	// variable to store day
    int quantity; // variable to store number of fruits bought
    float price; // variale to store final price 
    
    // fruit input
    
    cout << "Enter Fruit Name = ";
    cin >> fruitName;
    
    // day input
    
    cout << "Enter Day Name = ";
    cin >> day;
    
    // quantity input
    
    cout << "Enter Quantity of Fruits = ";
    cin >> quantity;
    
    // Selection according to days and fruit name 
    if ( day == "sunday" || day == "saturday"){
    	if ( fruitName == "banana")
    		price = quantity * 2.70;
    	else if ( fruitName == "apple")
    		price = quantity * 1.25;
    	else if ( fruitName == "orange")
    		price = quantity * 0.90;
    	else if ( fruitName == "grapefruit")
    		price = quantity * 1.60;
    	else if ( fruitName == "kiwi")
    		price = quantity * 3;
    	else if ( fruitName == "pineapple")
    		price = quantity * 5.60;
    	else if ( fruitName == "grapes")
    		price = quantity * 4.20;
    	else{
		
    		cout << "Invalid Day or Fruit name";
    		check = 0;
    	}
    	// output
    	if ( check )
    		cout << "The Total Price is = " << price << "$";
	}//closing of weakend check if
	else if ( day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
		if ( fruitName == "banana")
    		price = quantity * 2.50;
    	else if ( fruitName == "apple")
    		price = quantity * 1.20;
    	else if ( fruitName == "orange")
    		price = quantity * 0.85;
    	else if ( fruitName == "grapefruit")
    		price = quantity * 1.45;
    	else if ( fruitName == "kiwi")
    		price = quantity * 2.70;
    	else if ( fruitName == "pineapple")
    		price = quantity * 5.50;
    	else if ( fruitName == "grapes")
    		price = quantity * 3.85;
    	else{
		
    		cout << "Invalid Day or Fruit name";
    		check = 0;
    	}
    	// output
    	if ( check )
    		cout << "The Total Price is = " << price << "$";
	}// closing of else if
	else 	
		cout << "Invalid Day or Fruit name";
	
	
    
    
	  
}// End of main
