#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char req[3];
	req[0]='a';
	req[1]='z';
	req[2]='a';
	req[3]='n';
	int control1=0,control2=0,control3=0,control4=0;
	char in;
	int j=0;
	int temp=0;
	int k=0;
	for(int i=1;i<=5;i++)
	{
		
		cout<<"\t\t\t\t HANG MAN";
		cout <<endl;
		if(control1)
			cout<<"\t\t\t |"<<endl;
		if (control2)
			cout<<"\t\t\t 0"<<endl;
		if (control3)
			cout<<"\t\t\t/";
		if (control4)
		{
			cout<<"\\"<<endl;
			getch();
			system("cls");
			cout<<"\t\t\t THE GAME HAS BEEN OVER";
			getch();
			break;
		}
		//cout<<endl;
		
		cin>>in;
		if(in=='a'||in=='z'||in=='a'||in=='n')
		{
			cout<<in;
			re1[k]=in;
			k++;
		}
		else
		{
			j++;
			temp++;
		if (j==1||j==2||j==3||j==4)
			control1=1;
		if (j==2||j==3||j==4)
			control2=1;
		if (j==3||j==4)
			control3=1;
		if (j==4)
			control4=1;

		//getch();
		system("cls");
	}
}
