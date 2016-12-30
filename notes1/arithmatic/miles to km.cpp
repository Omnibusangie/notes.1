// Angie Chen

#include <iostream>

using namespace std;

int main()

{
	cout << "Please enter a distance in miles: ";
	float miles;
	cin >> miles;
	
	cout << "This is your distance in kilometers: " << miles * 1.61 << " kilometers." << endl;
	
	return 0;
}
