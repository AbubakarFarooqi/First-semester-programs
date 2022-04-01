#include <iostream>
using namespace std;
int main()
{
    int row ;
    cin >> row;
    int c = 0;
    for (int i = 1 ; i<=row ;i++){
    	for (int j = i ; j<=row ; j++)
    		cout << " ";
    	for (int k =1 ; k<= i ; k++)
    		cout << "* ";
			c++;
			cout <<endl;
	}
	c = row-3;
	int l = -1;
	for (int i = row ; i >=1 ; i--){
		cout << " ";
		for (int j = row ; j>=i ; j--)
			cout << " ";
		for ( int k = 1 ; k<=i-1 ; k++ ){
		
			cout << "* ";

		}
//					for(int j = 1 ; j<=c ; j++)
//				cout <<"*";

		cout << endl;
		c--;
		l++;
	}

    
} //..End of main
