// Angie Chen
// 11.28.2016 Assessment.1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int out(int inputs);

int main()
{
	
		int number;
		srand(number * time(0));
		
		cout << "Please enter an integer: ";
		cin >> number;
		
		for(short num = 1; num <= number; num++)
		{
			cout << out(number) << endl;
		}
		
	return 0;
}

int out(int inputs)
{
	return rand()%80 + 1;
}


