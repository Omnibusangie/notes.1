// function practice 1.2
// die rolls will 10 dice, but these dice are normal, 6 sided ones
// value of dice are random
// the sum of all rolls is outputted to the screen.

// uses FOR function, which constrains the loop to run a certain # of times
// this is to simulate the rolling of 10 separate dice

#include <iostream>
#include <cstdlib> // "c standard libary"
#include <ctime>

using namespace std;

int main()
{
	int dice_sum = 0; // declaring die_sum (a variable) an integer, starting at 0
	srand(time(0));
	
	for(int i = 0; i < 10; i++) //run this loop 10 times, where i is the block of code
	{
		dice_sum = dice_sum + rand()%6 + 1; // the equation to find die_sum
										   // constrains the random numbers generated to 1 through 6
	}
	
	cout << "The sum of 10 die rolls is " << dice_sum << " ." << endl; 
	
	return 0;
}

