#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	int number_1;
	int number_2;
	int number_3;
	
	cout << "Please enter an integer: ";
	cin >> number_1;
	
	cout << "Please enter another integer: ";
	cin >> number_2;
	
	cout << "Please enter a third integer: ";
	cin >> number_3;
	
	if(number_3 > number_1 && number_3 > number_2)
		{ cout << "Integer_3 is greater than Integer_1 and Integer_2."; }
	else
		{ cout << "FALSE."; }
	
	return 0;	
}
