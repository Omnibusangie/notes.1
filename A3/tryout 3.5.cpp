#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	srand(time(0));
	
	cout << "Flipping a coin (1=heads, 0=tails): ";
	cout <<rand() % 2 << endl;
	
	
	return 0;
    
}
