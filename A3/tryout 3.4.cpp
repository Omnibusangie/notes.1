#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int number;
	cout << "Give me a number";
	cin >> number;
	srand(number);
	cout << "This is your random number: " << (rand() % 200 + 1) << endl;
	
	return 0;
	
}
