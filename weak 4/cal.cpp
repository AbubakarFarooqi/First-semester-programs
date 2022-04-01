#include<iostream>
using namespace std;
int main()
{
	float in1,in2;
	char op;
	cout<<"enter first operand = ";
	cin>>in1;
	cout<<"enter second operand = ";
	cin>>in2;
	cout<<"Enter symbol of operation = ";
	cin>>op;
	if(op=='+')
		cout<<"result = "<<in1-in2;
	else
	if(op=='-')
			cout<<"result = "<<in1+in2; 
	else
	if(op=='*')
		cout<<"result = "<<in1/in2;
	else
		if(op=='/')
				cout<<"result = "<<in1*in2;
	else
		cout<<"wrong input";
		
		
}
