#include <iostream>
#include <cstdlib>

using namespace std;

int main ()

{
	cout << "Please enter a positive integer: ";
	
	int number;
	cin >> number;
	srand(number);
	
	cout << (rand() % 200 +1) << endl;
	
	return 0;
}

