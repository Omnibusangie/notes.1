#include <iostream>

using namespace std;

int main ()

{
	cout << "How many feet are in your height?";
	
	int feet;
	
	cin >> feet;
	
	cout << "How many inches are in your height?";
	
	int inch;
	
	cin >> inch;
	
	cout << "Your height in inches is..."; 
	cout << (feet * 12) + inch << endl << "_inches...";
	cout << "Have a nice day lmao";
	
	cin >> inch;
	
	return 0;
	
}
	/* integer			typical range
		short			-2^15 --> 2^15 -1
		int				-2^21 --> 2^31 -1
		long_long_int		-2^63 --> 2^63 -1
		
		float (floting point value) - can store decimals, stores about -10^38 -->10^38, with 7 sig figs 
		
		double (double precision floating point) - more decimals -10^308 --> 10^308, with 15 sig figs
		
		**less memory, faster programming 
		
		ex. float x,y,z
		ex. declare a short variable (w): w=0; w(0); 
		
		creating a constant: the same way you create another variable, but use the command "const float pi = 2.14159..." so you can just write "pi", but c++ will lyk 
		if you try to use the word "pi" as a variable for something else, e.g. "pi = 4", since the word "pi" is already made as a constant. 
		
	*/
	
	
