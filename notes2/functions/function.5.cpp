// using a function w/ a char input by user, bool output
// T for a vowel
// F if not a vowel

#include <iostream>

using namespace std; 

bool IsVowel(char testletter); // define your function: in this case, it's a T/F funciton

int main()
{
	char input; // your variable (input) will hold a character
	
	cout << "Enter an upper-case letter: ";
	cin >> input;
	
	if(IsVowel(input)) // takes input from the bool funcitons
	{
		cout << "Vowel"; // if TRUE, output this
	}
	else
		cout << "Not a Vowel"; // if FALSE, output this
		
	return 0;
}

bool IsVowel(char testletter) // this is to test if the letter is a vowel or not
{
	if(testletter == 'A' || testletter == 'E' || testletter == 'I' || testletter == 'O' || testletter == 'U') // series of "or" statements
	{
		return true;
	}
	else
		return false;
} // the above returns will be entered back into "input"

// cool beans!
