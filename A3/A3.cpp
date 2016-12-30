#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
	
	cout << "Please enter a positive integer other than 0: ";
	int number;
	cin >> number;
	srand(number); // A command to generate random numbers from the entered seed: a positive integer other than 0.
	

	int randnum_1 = (rand() % 200 + 1), randnum_2 = (rand() % 200 + 1), randnum_3 = (rand() % 200 + 1), randnum_4 = (rand() % 200 + 1), randnum_5 = (rand() % 200 + 1), randnum_6 = (rand() % 200 + 1);
	// The above line is to define all 6 random numbers to be generated from the seed number.
	
		if(randnum_1 % 2 == 0) // Follows logic rules for true integral division.
			{ cout << randnum_1 << ", Note 1 (randnum_1): C" << endl; } 
		else
			{ cout << randnum_1 << ", Note 1 (randnum_1: E" << endl; } 
		
		
		if(randnum_2 > randnum_3) // Follows vrious relationship operators 
			{ cout << randnum_2 << ", Note 2 (randnum_2: G" << endl; } 
		if(randnum_2 <= randnum_3) // Follows vrious relationship operators
			{ if(randnum_2 % 5 == 0) 
					{ cout << randnum_2 << ", Note 2 (randnum_2): E" << endl; }
			  else
			  		{ cout << randnum_2 << ", Note 2 (randnum_2): C" << endl; } }
	
	
		if(randnum_3 < 34) // Follows various relationship operators
			{ cout << randnum_3 << ", Note 3 (randnum_3): C" << endl; }	
		if(randnum_3 > 66) // Follows various relationship operators
			{ cout << randnum_3 << ", Note 3 (randnum_3): E" << endl; }
		else // Follows various relationship operators
			{ cout << randnum_3 << ", Note 3 (randnum_3): B" << endl; }
		
		
		if(randnum_6 > randnum_1 && randnum_6 > randnum_2) // Follows various relationship operators and logical combinations 
			{ cout << randnum_6 << ", Note 4 (randnum_6): A" << endl; }
		else // Follows various relationship operators and logical combinators
			{ cout << randnum_6 << ", Note 4 (randnum_6): F" << endl; }
		
		
		if( (randnum_5 + randnum_6) >= (randnum_2 + randnum_4) || randnum_4 >= 100) // Follows vrious relationship operators, c++ arithmatic and logical combinators
			{ cout << randnum_5 << ", Note 5 (randnum_5): G" << endl; }
		else // Follows various relationship operators and logical combinators
			{ cout << randnum_5 << ", Note 5 (randnum_5): B" << endl; }	
			
		
		if(randnum_6 < 100) // Follows various relationship operators
			{ 	if(randnum_1 % 2 == 0) 
			{ cout << randnum_1 << ", Note 1 & 6 (randnum_1): C" << endl; } 
		else
			{ cout << randnum_1 << ", Note 1 & 6 (randnum_1): E" << endl; } }
		if(randnum_6 > 150) // Follows various relationship operators
			{ cout << randnum_6 << ", Note 6: G" << endl; }
		if(100 <= randnum_6 && randnum_6 <= 150) // Follows vrious relationship operators and logical combinators
			{ cout << randnum_6 << ", Note 6: D" << endl; }	
			
			
	return 0;
	
	
}
