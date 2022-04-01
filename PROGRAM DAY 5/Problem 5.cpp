#include<iostream>
#include<string.h>
using namespace std;

/*Write a program that calculates and prints the bill for a cellular telephone company. The company offers
two types of service: regular and premium. Its rates vary, depending on the type of service. The rates are
computed as follows:
Regular service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are $0.20
per minute.
Premium service: $25.00 plus:
? For calls made during the day., the first 75 minutes are free; charges for more than 75 minutes are
$0.10 per minute.
? For calls made during the night, the first 100 minutes are free; charges for more than 100 minutes
are $0.05 per minute.
Your program should prompt the user to enter a service code (type char), and the number of minutes the
service was used.
A service code of r or R means regular service; a service code of p or P
means premium service. Treat any other character as an error. Your program
should output the type of service, the number of minutes the telephone service was used, and the
amount due from the user.
For the premium service, the customer may be using the service during the
day and the night(d or D for day and n or N for night). Therefore, to calculate the bill, you must
ask the user to input the number of minutes the service was used during the day and the number
of minutes the service was used during the night.

*/

int main()
{
    char service_code; // variable to store type of service i.e premium or regular
    int minutes; // it stores the number of minutes used
    float bill; // It stores the final bill
    

    // input of minutes
    
    cout << "Enter Number of Minutes The Service was Used = ";
    cin >> minutes;
    
    // input of service type
    
    cout << "Enter Service Code 'r' for regular and 'p' for premium = ";
    cin >> service_code;
    
    // Selection starts from below
    
    if ( service_code == 'r' || service_code == 'R'){
    	
    	int charge_minutes; // variable that store minutes on which extra charges are charged
    	charge_minutes = minutes - 50;
    	
    	// condition to check either extra charges should be charged or not
    	if ( charge_minutes > 0){
    		
    		bill = 10 + (charge_minutes * 0.20);
    		
		}// end of charge minutes check if
		
		else{
			
			bill = 10;
		}// end of charge minutes check else
    	cout << "The Charges Are " << bill <<"$";
	} // end of regular code check if
	
	else if ( service_code == 'p' || service_code == 'P'){
		
		string time; // variable to store time of using the service
		
		// input of time 
		cout << "In which Time You were Using the Service i.e \"day\" or \"night\"= ";
		cin >> time;
		
		// Selection According to Time of using
		if ( time == "day" ){
			
		int charge_minutes; // variable that store minutes on which extra charges are charged
    	charge_minutes = minutes - 75;
    	
    	// condition to check either extra charges should be charged or not
    	if ( charge_minutes > 0){
    		
    		bill = 25 + (charge_minutes * 0.10);
    		}// end of charge minutes check if
		else{
			
			bill = 25;
		}// end of charge minutes check else
			
		} //closing of time check if
		else if ( time == "night"){
			
			int charge_minutes; // variable that store minutes on which extra charges are charged
    		charge_minutes = minutes - 100;
    	
    	// condition to check either extra charges should be charged or not
    	if ( charge_minutes > 0){
    		
    		bill = 25 + (charge_minutes * 0.05);
    		}// end of charge minutes check if
		else{
			
			bill = 25;
		}// end of charge minutes check else
		
		}// end of charge minutes check else
			cout << "The Charges Are " << bill <<"$";
	}// closing of premimium code check if
	else
		cout << "error";
	
	// output 
	

	  
}// End of main
