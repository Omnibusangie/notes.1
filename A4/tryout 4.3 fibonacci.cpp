#include <ctime>

using namespace std;
int main()

{
	int c, first = 0, second = 1, next;
	
	cout << "The first 5 terms of the Fibonacci series is: " << next << endl;
	
	for ( c = 0; c < 5 ; c++)
		{
		if ( c <= 1 )
			next = c;
		else
			{
			next = first + second;
			first = second;
			second = next;
			}
		cout << next << endl;
		}
	
	return 0;
}
