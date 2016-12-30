#include <iostream>
#include <iomanip>

/*

iomanip will manipulate the final output 
<< fixed << use the same # of decimals declared
<< setprecision(2) << use two significant figures

*/

using namespace std;

int main ()

{
	/* psuedocode (instructions written out in the idea of how you would write the code)
	
	1. ask the user for total bill, store response in a variable with a float
	2. ask the user for the number of people splitting the bill, store response in a variable
	3. get the value of the total bill + tip divided by the total number of peopl
	4. output what each person owes onto the sceen
	
	*/
	
	cout << "What is the total bill?";
	float bill;
	cin >> bill;
	
	cout << "How many people are splitting the bill?";
	short people;
	cin >> people;
	
	float share = bill * 1.18 / people;
	
	cout << "Each person owes $ " << fixed << setprecision(2) << share << ".";
	
	
	return 0;
	
}

	
