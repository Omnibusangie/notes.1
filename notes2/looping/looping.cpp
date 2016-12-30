#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
	
srand(time(0));

cout << "The dice roll is: ";

cout << rand() %6 + 1; //random value from 1-6

cout << rand()%6 + 1 << " and " << rand() %6 +1;

return 0;

}
