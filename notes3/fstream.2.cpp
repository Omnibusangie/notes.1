#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream infile;
	int value;
	
	infile.open("fibonums.txt");
	
	for(short n = 1; n <= 20; n++)
	{
		infile >> value;
		cout << value << ", ";
	}
	
	infile.close();
	
	return 0;
}

// ok, my fibonacci sequence is wonky 
