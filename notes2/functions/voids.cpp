#include <iostream>

using namespace std;

void print();

int main ()

{
	cout << "This line is printing from main()" << endl;
	print();
	
	return 0;
}

void print() //no semicolon! 
{
	cout << "This line is printing from the function!";
	return;
}
