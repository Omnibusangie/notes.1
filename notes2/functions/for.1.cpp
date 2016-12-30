// FOR functions loop a block of code, running it a specific number of times
// FOR loops can act the same as WHILE loops, but they're much easier for humans to interpret

#include <iostream>

using namespace std;

int main ()

{
	for (short num = 1; num <= 3; num++) // run a block of code exactly 3 times
	{
		int guess, answer = 5;
		
		do
		{
			cout << "What's your guess? ";
			cin >> guess;
		}
		
		while (guess != answer);
		
		cout << "you got it!" << endl;	
	}
	
	cout << "Program ended" << endl;
	
	return 0;
}

// ok lol this code doesn't rlly work the way i want it to
// it runs the program 3 times or loops, but you have to guess until you get it correct to complete one loop. 
// then it exits the program, outputting "Program ended"
// i kinda wanted it only let you guess three times, i think i can make it do that, i would just need some additional coding somewhere
