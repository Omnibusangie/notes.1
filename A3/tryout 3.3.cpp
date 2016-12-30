#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
	
	cout << "Please enter an integer: ";
	int number;
	cin >> number;
	srand(number); // this means you enter a seed number for randomization: "seed-randomize"
	
	cout << "Your random number is: " << number << (rand() % 200 + 1) << endl;


	
	return 0;
}
