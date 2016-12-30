#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	cout << "Please enter a number: ";
	int number;
	cin >> number;
	srand(number);
	
	
	int randomized = (rand() % 200 + 1) ; // randomized = random number from 1-200 from the seed
	
	 
	cout << "This is your randomized number: " << randomized << endl;
	
	return 0;
	
}
