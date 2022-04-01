#include<iostream>
using namespace std;
int main()
{
	string p1_input , p2_input;
	cout << "Player 1 input = ";
	cin >> p1_input;
	
	system("cls");
	
	cout << "Player 2 input = ";
	cin >> p2_input;
	
	if ( p1_input == p2_input)
		cout << "Its a draw";
	else if( p1_input == "Scissors" && p2_input == "Rock")
			cout << "The winner is p2";
			
	else if( p1_input == "Scissors" && p2_input == "Paper")
			cout << "The winner is p1";
			
	else if( p1_input == "Rock" && p2_input == "Paper")
			cout << "The winner is p2";
			
	else if( p1_input == "Rock" && p2_input == "Scissors")
			cout << "The winner is p1";
			
	else if( p1_input == "Paper" && p2_input == "Scissors")
			cout << "The winner is p2";
			
	else if( p1_input == "Paper" && p2_input == "Rock")
			cout << "The winner is p1";
			
	else
		cout << "wrong input";
}	


