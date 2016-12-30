/* 

the bool
boolian values
boolian logic: operators that work on T/F, but denoted as AND (&&), and a true or false value

if A and B are true, the C++ will output "true".
but if one or both of A and B is falso, C++ will output "false".
Or(II): if either one or both of A and B is true, C++ will output "True", will only output "false" if A and B are false
NOT(!): the opposite of the value

You can use parantheses to set the order: e.g. A or (B and C)

the "if" statement: block runs only if a condition is true
Syntax: if (condition)
				{
				}
				
the "if else" statement: one block runs if true, a different one runs if false
Syntax: if(condition)
		{
		}
		else
		{
		}
		
		
Conditional tests: <,>, >=, <=, ==, !=
C++ will output either true or false

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{ 
	float number;
	cout << "Give me a number: "; 

	cin >> number;
	//we need to do something if the number is negative
	if(number < 0)

	{
		number = number * -1;
	}

	cout << "The absolute value is: " << number << "." << endl;
	
	return 0;
}
