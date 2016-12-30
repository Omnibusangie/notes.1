#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
//LOOPING
	//to run a set of commands more than once.
/*	
	//the while loop: 
	while(condition) //run this block of code while this is true
		{ code block to run while condition is true }
		
	//its possible that the loop doesnt run, runs once, runs 4 times, runs 11 times, or runs infinitely
*/

	//if you want the program to run at least once, this is technique 2: do/while
	//it runs the code block before it tests whether it should be looped. 
/*	do
		{ code block }
	while {condition};
*/

//lets play a game: a guessing game
//with integers, the player guesses numbers until s/he guesses the correct number (5).

	int guess, answer = 5;
	
	do
		{cout << "What's your guess? ";
		 cin >> guess;
		}
	while(guess != answer);
	
	cout << "Congrats!" ;
	
	return 0;

}
