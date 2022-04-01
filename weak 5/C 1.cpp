#include<iostream>
using namespace std;
int main()
{
	string day;
	float price;
	cout << "Enter day = ";
	cin >> day;
	cout << "Enter purchase amount = ";
	cin >> price;
	
	if ( day == "sunday" && price >= 5000)
	{
		float discount = (price*10.0)/100.0;
		
		price = price - discount ;
		
		cout << "Total payable amount is = " << price;
	}
	
	else
		cout << "Total payable amount is = " << price;
		

}	


