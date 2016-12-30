#include <iostream>

using namespace std;

// VARIABLES

/*
Type: Integer
Name: x;
>> can only store a single whole number integer, not text or functions
*/

//user can type in their age, and the program will output their age in seconds

int main () 
{
	cout << "What is your age in years? "; 
	
	//store whatver they type in into a variable
	
	int ageinyears; 
	
	cin >> ageinyears;
	
	//whatever is typed in gets stored into the variabls
	
	int ageinseconds;
	
	ageinseconds = ageinyears * 365 * 24 * 60 * 60;
	
	cout << "Your age in seconds is..." 
	cout << ageinseconds

	//can also write it as: cout << "Your age in seconds is..." << ageinseconds;
	
	return 0;
}
