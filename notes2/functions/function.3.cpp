// same as dice_sum from function.2 and function.2.1
// except this one is more real-life accurate
// program runs 10 times to simulate rolling a dice 10 times

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dieroll(); // declare your function: the simulation of the roll of a normal die

int main()
{
	int dice_sum = 0; // declare variable (dice_sum) to store your integer, starting at 0
	srand(time(0));
	
	for(int i = 0; i <= 10; i++) // run this loop 10x
	{
		dice_sum = dice_sum + dieroll(); // add a random value (1-6) to the growing sum 
	}
	
	cout << "The sum of 10 dice rolls is " << dice_sum << endl;
	
	return 0;
}

int dieroll ()
{
	return rand()%6 + 1; // constrain the random number generated from 1-6
}

