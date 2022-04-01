#include<iostream>
using namespace std;
int main()
{
	float in1,in2;
	char op;
	cout<<"Enter first value = ";
	cin>>in1;
	cout<<"Enter second value = ";
	cin>>in2;
	cout<<"Enter the operator of operation you want to perform = ";
	cin>>op;
	if(op=='+')
		cout<<"Result = "<<in1-in2;
	else
		if(op=='-')
			cout<<"Result = "<<in1+in2;
	else
		if(op=='*')
			cout<<"Result = "<<in1/in2;
	else
		if(op=='/')
			cout<<"Result = "<<in1*in2;
	else
		cout<<"Wrong input";
		
		
}

