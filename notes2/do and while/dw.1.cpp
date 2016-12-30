// this is exclusively a WHILE loop

#include <iostream>

using namespace std;

int main ()
{
	int guess = 0, answer = 5; // declare 2 int variables (guess & answer) and set the initial values to 0 and 5, respectively
							   // the "= 0" for the "guess" is optional, you just need to declare "guess" as a variable that stores an integer
	while (guess != answer)	// unless the guess is the same as the answer, loop the following commands
	{
		cout << "What's your guess? "; // ask the user for their guess
		cin >> guess; // store their response in the variable "guess"
	}
	
	cout << "You got it!" << endl; // if the loop is done, they must've guessed correctly
	
	return 0;
}
