/*

char: one byte 0-255

character comes out from cout instead of number

don't need an additional library for this

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{

	char example = 65;
	cout << example << endl;
	
	cout << example + 1 << endl;
	
	example << 'D'; //?? 
	cout << example;
	
	return 0;
	
}
