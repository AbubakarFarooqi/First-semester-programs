#include<iostream>
using namespace std;
int main()
{
	float vf,vi,a,t;
	cout <<"enter initial velocity = ";
	cin>>vi;
	cout<<"enter time taken = ";
	cin>>t;
	cout<<"enter value of acceleration = ";
	cin>>a;
	vf=vi-(a*t);
	cout<<"Final velocity = "<<vf<<" m/s";

}
