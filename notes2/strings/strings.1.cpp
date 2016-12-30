// this demonstrates strings

#include <iostream>
#include <string>

using namespace std; 

int main()
{
	string First, Middle, Last, fullname; // declare these as variables
										  // string allows you to create variables w/ more than one letter in them
	cout << "First Name: ";
	cin >> First;
	
	cout << "Middle Name: ";
	cin >> Middle;
	
	cout << "Last Name: ";
	cin >> Last;
	
	fullname = First + " " + Middle + " " + Last;
	cout << endl << "Your full name is: " << fullname << endl;
	
	cout << "Your initials are: " << First[0] << Middle[0] << Last[0];
	
	return 0;
 }
