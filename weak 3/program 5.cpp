#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5;
	float per;
	string name;
	cout<<"Enter student name = ";
	cin>>name;
	cout<<"Enter subject 1 marks = ";
	cin>>s1;
	cout<<"Enter subject 2 marks = ";
	cin>>s2;
	cout<<"Enter subject 3 marks = ";
	cin>>s3;
	cout<<"Enter subject 4 marks = ";
	cin>>s4;
	cout<<"Enter subject 5 marks = ";
	cin>>s5;
	s1=s1+s2+s3+s4+s5;
	per=(s1*100)/500.0;
	cout<<"Student name is = "<<name;
	cout<<endl<<"His overal percentage = "<<per<<" %";
}
