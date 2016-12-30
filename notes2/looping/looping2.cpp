#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	srand(time(0));
	int randnum_1 = (rand() % 20 + 1), randnum_2 = (rand() % 20 + 1), guess, integer;
	
	do
		{
		cout << "what is the sum of " << randnum_1 << " and " << randnum_2 << "? ";
		cin >> guess;
		integer + 1;
		}
	
	while(guess != randnum_1 + randnum_2 || integer <= 5); // <<<<<????????????
	
		if(guess == randnum_1 + randnum_2)
			{cout << "So you're really not dumb." << endl; }
		if(integer == 5);
			{cout << "You really are dumb." << endl; }

	return 0;
 } 
