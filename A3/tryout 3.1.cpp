#include <iostream>

using namespace std;

int main ()

{
	int num; /* <-- MUST declare your variable, aka say what you want to define it as. (int) means only integers; if you enter a decimal, it'll only spit out the integer part. 
					(float) means the number can be a decimal. */
	
	cout << "Give me a number: " ;
	cin >> num ;
	
	cout << num << endl ;
	
	return 0;
}


