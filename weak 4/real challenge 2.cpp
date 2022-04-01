#include<iostream>
using namespace std;
int main()
{
	float salary , lp = 50000;
	cout<<"enter salary = ";
	cin>>salary;
	float total_amount = ((salary*50.0*6.0)/100.0);
	if(total_amount>=lp)
		{
			cout<<"You can buy laptop for your Son :) ";
		}		
	else
		{
			salary=salary/2.0;
			cout<<"You cannot buy laptop for your Son ):"<<endl;
			float req_amount=50000-total_amount;
			float no_of_month = (req_amount/salary);
			cout<<"You require next "<<no_of_month<<"months salary to buy your son a Laptop !";
			
		}
}

