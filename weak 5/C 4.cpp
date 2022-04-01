#include<iostream>
using namespace std;
int main()
{
	string day , month ;
	float price;
	cout << "Enter day = ";
	cin >> day;
	cout << "Enter month = ";
	cin >> month;
	cout << "Enter purchase amount = ";
	cin >> price;
	
	if ( day == "sunday" && (month == "october" || month == "march" || month == "august") )
	{
		float discount = (price*10.0)/100.0;
		
		price = price - discount ;
		
		cout << "Total payable amount is = " << price;
	}
	
	else	if ( day == "monday" && ( month == "november" || month == "december"))
				{
					float discount = (price*5.0)/100.0;
		
					price = price - discount ;
		
					cout << "Total payable amount is = " << price;
				}
				
	else
		cout << "Total payable amount is = " << price;
		

}	


