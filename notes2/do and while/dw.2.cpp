//this is a DO/WHILE loop

// this is if you have a bunch of conditions you need to type out, but you want to ask your simple stuff first

#include <iostream>

using namespace std;

int main ()
{
	int guess, answer = 5; // declare 2 int variables, guess & answer, and set the initial value of answer to 5
	
	do
	{
		cout << "What's your guess? "; // ask user for a guess
		cin >> guess; // store their response into the variable "guess" 
	}
	while(guess != answer); // until the guess is the same as the answer, loop back and run those commands (above) again
	
	cout << "You got it!" << endl; // the loop is finished, the user must've guessed correctly
	
	return 0;
}
