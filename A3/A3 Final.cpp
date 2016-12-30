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
			{ cout << "C" << endl; } 
		else
			{ cout << "E" << endl; } 
		
		
		if(randnum_2 > randnum_3) // Follows various relationship operators 
			{ cout << "G" << endl; } 
		if(randnum_2 <= randnum_3) // Follows various relationship operators
			{ if(randnum_2 % 5 == 0) 
					{ cout << "E" << endl; }
			  else
			  		{ cout << "C" << endl; } }
	
	
		if(randnum_3 < 34) // Follows various relationship operators
			{ cout << "C" << endl; }	
		if(randnum_3 > 66) // Follows various relationship operators
			{ cout << "E" << endl; }
		else // Follows various relationship operators
			{ cout << "B" << endl; }
		
		
		if(randnum_6 > randnum_1 && randnum_6 > randnum_2) // Follows various relationship operators and logical combinations 
			{ cout << "A" << endl; }
		else // Follows various relationship operators and logical combinators
			{ cout << "F" << endl; }
		
		
		if( (randnum_5 + randnum_6) >= (randnum_2 + randnum_4) || randnum_4 >= 100) // Follows vrious relationship operators, c++ arithmatic and logical combinators
			{ cout << "G" << endl; }
		else // Follows various relationship operators and logical combinators
			{ cout << "B" << endl; }	
			
		
		if(randnum_6 < 100) // Follows various relationship operators
			{ 	if(randnum_1 % 2 == 0) 
			{ cout << "C" << endl; } 
		else
			{ cout << "E" << endl; } }
		if(randnum_6 > 150) // Follows various relationship operators
			{ cout << "G" << endl; }
		if(100 <= randnum_6 && randnum_6 <= 150) // Follows vrious relationship operators and logical combinators
			{ cout << "D" << endl; }	
			
			
	return 0;
	
}
