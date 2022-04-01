#include<iostream>
using namespace std;
int main()
{
	float size_of_bag,cost_of_bag,area_covered;
	cout<<"Enter the size of fertilizer bag in pounds = ";
	cin>>size_of_bag;
	cout<<"Enter cost of the bag = ";
	cin>>cost_of_bag;
	cout<<"Enter area in square feet that can be covered by the bag = ";
	cin>> area_covered;
	size_of_bag=cost_of_bag/size_of_bag;
	area_covered=cost_of_bag/area_covered;
	cout<<endl<<endl<<"----------------------------------------"<<endl;
	cout<<"The cost of fertilizer per pound is = "<<size_of_bag<<endl;
	cout<<"The cost of fertilizing the area per square feet = "<<area_covered;
	
}
