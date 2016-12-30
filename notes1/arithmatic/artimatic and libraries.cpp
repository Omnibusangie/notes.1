#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
	
	cout << "The maximum random integer value is: " <<endl << RAND_ MAX << endl;
	
	cout << rand() << "" << rand(); endl;
	
	srand(100);
	cout << rand() << " " << rand() << endl;
	
	srand(213);
	cout << rand() << " " << rand() << endl;
	
	arand(100);
	cout <<rand() << " " <<rand() << endl;
	
	srand(time(0)) <<rand() << " " <<endl;
		}
