#include <iostream>
#include <cstdlib>

using namespace std;
int main()

{
	int n, c, first = 0, second = 1, next;
	
	cout << "Enter the number of terms of Fibonacci series you want" << endl;
	cin >> n;
	
	cout << "The first " << n << " terms of the Fibonacci series are : " << endl;
	
	for ( c = 1; c <= n; c++)
		{
		if ( c <= 1 )
			next = c;
		else
			{
			next = first + second;
			first = second;
			second = next;
			}
		cout << c << ": " << next << endl;
		}
	
	return 0;
}
