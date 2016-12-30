#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{
	cout << "Please enter an integer: ";
	int number;
	cin >> number;
	srand(number);
		int randnum_1 = (rand() % 200 + 1), randnum_2 = (rand() % 200 + 1);
	cout << "randnum_1: " << randnum_1 << ", randnum_2: " << randnum_2 << "." << endl;
	
	return 0;
	
}
