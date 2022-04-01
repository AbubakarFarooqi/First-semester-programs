#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{

	ifstream i;
	ofstream o;
	i.open("D:\\a.txt");
	o.open("D:\\b.txt");
	if(i==0 || o==0)
		cout<<"a";
	char x='a';
	while(x!='1')
	{
		x=getch();
		o << x;
	}
	
	
}
