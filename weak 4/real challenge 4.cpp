#include<iostream>
using namespace std;
int main()
{

	char op;
	cout<<"Enter any letter = ";
	cin>>op;
	if(op>=48 && op<=57)
		cout<<"The letter "<<op<<" is a number";
	else
		if( op=='a'||op=='A'||op=='e'||op=='E'||op=='i'||op=='I'||op=='o'||op=='O'||op=='u'||op=='U' )
			cout<<"The letter "<<op<<" is a vowel";
	else
			cout<<"The letter "<<op<<" is a consonant";

		
}

