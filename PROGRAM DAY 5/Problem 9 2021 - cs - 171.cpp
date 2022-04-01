#include<iostream>
using namespace std;
int main()
{
	int h; 	  // Variable to store value of h which is length , breadth and height of one block
	int x,y; // variables to Store Coordinates of Point
	
	// Input of h
	
	cout << "Enter Value of h = ";
	cin  >> h;
	
	// Input of abscicca
	
	cout << "Enter value of x Coordinate = ";
	cin  >> x;
	
	// Input of Ordinate
	
	cout << "Enter Value of y Coordinate = ";
	cin  >> y;
	
	// CHECKING EITHER POINT IS ON THE BOREDER OR NOT
	
	if ( x == 0 && (y >= 0 && y <= h))
		cout << "The Point is On The Border of The Figure";
		
	else if ( (x == h || x == 2 * h) && y >= h && y <= 4 * h )
		cout << "The Point is On The Border of The Figure";
		
	else if ( x == 3 * h && ( y >= 0 && y <= h ))
		cout << "The Point is On The Border of The Figure";
		
	else if ( x > 0 && x < h && y == h )
		cout << "The Point is On The Border of The Figure";
		
	else if ( x > 2 * h && x < 3 * h && y == h)
		cout << "The Point is On The Border of The Figure";
		
	else if ( x >= 0  && x <= 3 * h && y == 0)
		cout << "The Point is On The Border of The Figure";
		
	else if ( x >= h && x <= 2 * h && y == 4 * h)
		cout << "The Point is On The Border of The Figure";
	
		
	// CHECKING EITHER POINT IS INSIDE THE FIGURE OR NOT
		
	else if ( x >= 0 && x <= 3 * h && y >= 0 && y <= h)
		cout << "The Point Is INSIDE the Figure";
	else if ( x >= h && x <= 2 * h && y >= 0 && y <= 4 * h)
		cout << "The Point Is INSIDE the Figure";
		
	// IF OUR FIRST TWO CHECKS FALSE THEN POINT IS OUTSIDE THE FIGURE
	else
		cout << "The Point Is OUTSIDE the Figure";
	
}// End of main
