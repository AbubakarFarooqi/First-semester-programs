#include<iostream>
using namespace std;
int main()
{
	float amount , discount;
	cout<<"Enter the amount of the medicine = ";
	cin>>amount;
	if(amount<=5000)
	{
		discount=(amount*5.0)/100.0;
		cout<<"you got 5% discount"<<endl;
		discount = amount - discount;
		cout<<"Net amount to be paid after discount = "<<discount;
	}
	else
	{
		discount=(amount*10.0)/100.0;
		cout<<"you got 10% discount"<<endl;
		discount = amount - discount;
		cout<<"Net amount to be paid after discount = "<<discount;
	}
					
}

