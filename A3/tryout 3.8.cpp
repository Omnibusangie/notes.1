#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{
	cout << "Please enter a number: ";
	int number;
	cin >> number;
		if(number > 42)
		 { cout << number << " is greater than 42: G. " << endl; }
		if(number <= 42)
		 {  if(number % 5 == 0)
				{ cout << number << " is less than or equal to 42, and is divisible by 5: E." << endl; }
			else
				{ cout << number << " is less than or equal to 42, but is not divisible by 5: C." << endl; }
		 }
	return 0;
	
}
