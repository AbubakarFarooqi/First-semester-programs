#include<iostream>
using namespace std;
int main()
{
	int num,u,t,h,th;
	cout<<"enter any 4 digit number = ";
	cin>>num;
	u = num%10;
	t = (num%100)/10;
	h = (num%1000)/100;
	th = (num%10000)/1000;
	cout<<"The number in reverse order is = "<<u<<t<<h<<th;
}
