#include <iostream>

using namespace std;

int main ()

{
	cout << "What was the total bill?";
	
	int totalbill;
	cin >> totalbill;
	
	cout << "How many people?";
	
	int people;
	cin >> people;
	
	cout << "what each person owes, including an 18% tip:_";
	
	cout << "$"; 
	cout << float ((totalbill * 0.18) + totalbill) / people;

	return 0;
	
	/* correct
	#include <iostream>
	#include <iomanip>
	...
	
	cout << "what's the total bill?";
	float bill:
	cin >> bill;
	
	cout << "how many people?";
	short people;
	cin >> people;
	
	float share;
	share = (bill *1.18) / people;
	
	cout << endl << "each person owes $" << fixed << setprecision (2) << share << ".";
	
	cin >> people;
	
	return 0;
	
	*/
	
}
	
	
