#include<iostream>
using namespace std;
int main()
{
	char clas , uni ;
	cout << "Did you have class today? ( press y if yes ) = ";
	cin >> clas;
	cout << "Did your friends are going to university today? ( press y if yes ) = ";
	cin >> uni;
	if (uni=='y' && clas == 'y')
		cout << "You are going to university!";

}	


