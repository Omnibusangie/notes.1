// Angie Chen 
// 11.28_Assessment.2

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	float input;
	
	do
	{
		cout << "Enter a number between 0 and 100: ";
		cin >> input; 
	}
	
	while(input < 0 || 100 < input);
	
	if(0 <= input < 33)
		{	cout << "Small" << endl;	}
	else
	if(33 <= input <= 66)
		{	cout << "Medium" << endl;	}
	else
	if(66 < input <= 100)
		{	cout << "Large" <<endl;		}
	
	return 0;
}
