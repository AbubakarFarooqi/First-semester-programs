#include<iostream>
using namespace std;
int main()
{
	string brand;
	float price ;
	cout << "enter brand of the dress = ";
	cin >> brand;
	cout << "enter price of the dress = ";
	cin >> price ;
	if (brand == "MTJ")
	{
		if (price <= 1500)
			cout << "Buy the dress !";
			
	}
}

