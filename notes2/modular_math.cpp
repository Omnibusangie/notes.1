// modular math
// "shift" the letter down one

#include <iostream>

using namespace std;

int main()
{
	char letter, new_letter1;
	int new_letter;
	
	cout << "Enter a capital letter: ";
	cin >> letter;
	
	new_letter = letter - 65; // converts the ASCII into typical human notation for A=0, B=1, C=2, etc
	
	new_letter1 = (new_letter + 1) % 26 + 65; // (encrypts by +1)mod_26 + back_to_ASCII
											  //because c++ can only read ASCII in order to return alphabetical letters
	cout << new_letter1 << endl;
	
	return 0;
}

// the (+ #) will be a random number generated using the seed number given by the user (not using time as a seed!)
