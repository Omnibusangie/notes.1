#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()

{
	srand(time(0));
	int randnum_1 = rand() % 20, randnum_2 = rand() % 20, guess, guessnum = 1, integer; // set "guessnum" to an initial value (1), so that the first guess will have the number (1)
	
	cout << endl << "What is " << randnum_1 << " + " << randnum_2 << " ?" << endl;
	
	do 
		{
			cout << "Guess # " << guessnum << ": ";
			cin >> guess;
			
			guessnum++; // stands for guessnum = guessnum + 1
		}
		
	while( (guessnum <= 5) && (guess != randnum_1 + randnum_2));
	
	cout << endl;
	
	if(guess != randnum_1 + randnum_2)
		{
			cout << "Sorry, that was 5 guesses. The correct answer is " << (randnum_1 + randnum_2) << "." << endl;
			
		}
	else
		{
			cout << "You got it! Nice job." << endl;
		}
	
	return 0;
}
