#include <iostream>
#include <cstdlib>
#include <ctime>

/* "a seed time of the current time is often used, since that'll be different each run */

using namespace std;

int main ()

{

	srand (time (0));
	
	cout << (rand() % 200 + 1) << endl;
	
	return 0;
	
}
