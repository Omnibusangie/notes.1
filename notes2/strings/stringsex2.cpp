#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first, middle, last, full;
	
	cout << "First name: ";
	cin >> first; // cin will stop storing into after the first word 
	cout << "Middle name: ";
	cin >> middle;
	cout << "Last name: ";
	cin >> last;
	
	full = first + " " + middle + " " + last;
	cout << endl << full << endl;
	
	cout << first[0] << middle[0] << last[0];
	return 0;
}

/* To get 1 character from a string, put the character number in square brackets after the variable name

**numbering starts at zero! */
//BROKEN?

