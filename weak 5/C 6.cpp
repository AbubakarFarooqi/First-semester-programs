#include<iostream>
using namespace std;
int main()
{
	float price , weight;
	string clas;
	cout << "Enter your class = ";
	cin >> clas;
	
	cout << "Enter luggage weight = ";
	cin >> weight;
	if (weight <= 40 && clas == "business")
	{
		cout << "You have to pay 15000 rupees ";
	}
	else
		if (weight <= 25 && clas == "economy")
			cout << "You have to pay 8000 rupees ";
	else
		if ( clas == "business" && weight >40)
		{
			weight = weight - 40;
			price = (weight * 1000) + 15000;
			cout << "You have to pay "<< price <<" rupees ";
		}	
	else
		if ( clas == "economy" && weight >25)
		{
			weight = weight - 25;
			price = (weight * 500) + 8000	;
			cout << "You have to pay "<< price <<" rupees ";
		}
	else
		cout << "You provide wrong data ";
		

}	


