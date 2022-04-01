#include<iostream>
#include<string.h>
using namespace std;

/* A student has to attend an exam at a particular time (for example, at 9:30 am). They arrive in
the exam room at a particular time of arrival (for example 9:40 am). It is considered that the
student has arrived on time if they have arrived at the time when the exam starts or up to half
an hour earlier. If the student has arrived more than 30 minutes earlier, the student has come
too early. If they have arrived after the time when the exam starts, they are late.
*/


/*Write a program that inputs the exam starting time and the time of student's arrival, and prints if the
student has arrived on time, if they have arrived early or if they are late, as well as how many hours or
minutes the student is early or late.
*/



int main()
{
	
    int exam_starting_hour , exam_starting_min; // Variables that store Time of exam starting
    int Arriving_Hour , Arriving_min; // Variables that store Arrival time
    
    // Input of Exam starting hours
    
    cout << "Enter the hour of Starting of Exam = ";
    cin  >> exam_starting_hour;
    
    // Input of Exam starting Minutes
    
    cout << "Enter the minutes of Starting of Exam = ";
    cin  >> exam_starting_min;
    
    // Input of Arrival Hours
    
    cout << "Enter Hour of Arival = ";
    cin  >> Arriving_Hour;
    
    // Input of Arrival Minutes
    
    cout << "Enter Minutes of Arival = ";
    cin  >> Arriving_min;
    
    int hour; // Variable that should be output as hour
	int min; // variable that should be output as minutes
	
    int Difference_BW_hours;    // variable that store differece between arrical hour and starting hour
	int Difference_BW_minutes; // variable that store difference between arrival minutes and starting minutes
	
	// Calculating Differences
	
    Difference_BW_hours    =     Arriving_Hour - exam_starting_hour;
    Difference_BW_minutes  =     Arriving_min - exam_starting_min;
    
    // Finding Total minutes From Above Differences
   
   	min = Difference_BW_minutes + (Difference_BW_hours*60);
    
    // Selection According to Difference Between Hours
    
    /* FIRST CHECK */
    
    if (  Difference_BW_hours > 0){
    	
    	/* IF DIFFERENCE BETWEEN HOURS IS GREATER THAN 0, STUDENT WILL BE LATE */
    	
    	
    	hour = min / 60;  // Finding Hours To be Shown on Console
		min = min % 60;	 // Finding Minutes To be Shown on Console
		
    	cout << "Late" << endl;
    	
    	// If True Than Hours will not be displayed Else They Will Displayed
    	
    	if ( hour == 0) 
    		cout << min << " minutess after the start";
    	else
    		cout << hour << ":" << min << " hours after the start";
    		
	}// Closing of First check IF
	
	/* SECOND CHECK */
	
	else if ( Difference_BW_hours == 0 ){
		
		/* IF DIFFERENCE BETWEEN HOURS IS EQUAL TO 0, STUDENT WILL BE EITHER LATE , ON TIME or EARLY */
		
		
		min = Arriving_min - exam_starting_min;
		
		
		if ( min == 0) // IF this is TRUE then Student Will ARRIVED exact ON TIME
			cout << " On Time ";
			
		else if ( min < 0){  // IF this is TRUE then STudent Will Eiher be EARLY or On TIME
		
			if ( (min*-1) > 30) // IF Student Arrived BEFORE 30 MInutes OF starting TIme
				cout << "Early" << endl << min*(-1) << " minutes befor the start";	
				
			else // IF Student is Arrived BetWeen 0 to 29 minutes (INCLUSIVE) Before Exam 
				cout << "On Time" << endl << min*(-1) << " minutes befor the start";
		} // Closing Of IF that Check Either Student IS Early Or on Time
		
		
		else if ( min > 0){ // IF that check Either Student is LAte OR NOT
			cout << "Late" << endl << min << " minutes after the start ";
			
		} // Closing of LATE check IF
		
	}// closing of Second CHeck IF
	
	
	/* THIRD CHECK */
		
	else if ( Difference_BW_hours < 0){ 
	
	/* IF DIFFERENCE BETWEEN HOURS IS LESS THAN 0, STUDENT WILL BE EITHER EARLY OR ON TIME */
		
		if ( min < 0) // IF this is True We will FInd ABSOLUTE value of MInutes
			min = min * -1;
			
		hour = min / 60;
		min = min % 60;
		if ( hour == 0){ // If True Than Hours will not be displayed Else They Will Displayed
			
		if ( min >=0 && min <= 30) // IF this is TRUE the Student Will be on Time ELSE He will BE EARLY
			cout << "On Time" << endl << min << " minutes befor the start";
		else
			cout << "Early" << endl << min << " minutes befor the start";
			
		} // CLosing OF not Display hour IF
		
		else if (hour > 0){ // If THIS is TRUW hour WILL ALSO DISPLAYED on Screen
		
			cout << "Early" << endl << hour << ":" << min << " hours befor the start";
			
		}// CLosing of HOur DISPLAY IF
		
	}// Closing Of Third Check IF

    

}// End of main
