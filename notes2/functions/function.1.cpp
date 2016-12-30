// function prototyping 
// using the DIEROLL function

/* This program rolls 2 dice, with the # of sides chosen by the user
	The dice roll is in a separate FUNCITON itself that inputs the # of sides 
		& outputs the result of 1 die roll
	DIEROLL outputs a random number probably based on the given time library and a number from 1-6, like on a regular dice
*/

#include <iostream>
#include <cstdlib> //random # functions
#include <ctime> // time library (for the current time)

using namespace std;

int dieroll(int num_sides); // declaring the function that gives the result of rolling a die w/ input # of sides
							// this is the function that you declare before "int main()"

int main()
{
	int num_sides;
	
	srand(time(0));
	
	cout << "How many sides should the dice have? "; // lets user decide the # of sides
	cin >> num_sides;
	
	cout << "The dice roll is " << dieroll(num_sides) << " and " << dieroll(num_sides) << " and " << dieroll (num_sides) << endl;
			// outputs the 3 die rolls onto the screen using the # of sides the user inputted
	return 0;
}

// lmao there's more

 int dieroll(int num_sides)
 {
 	return rand()%num_sides + 1; // constrain the random numbers generated to the number of sides inputted
 								 // num_sides + 1 will ensure that the random number generated (0 - a gagillian) will exclude 0
 }

