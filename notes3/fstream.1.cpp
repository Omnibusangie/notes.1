#include <fstream> // we're not outputting anything to the screen, so we don't need <iostream>

using namespace std; 

int main()
{
	int fibo1, fibo2, fibo3; // this is for the fibonacci sequence
	ofstream outfile; // funciton
	
	fibo1 = 1;
	fibo2 = 1;
	
	outfile.open("fibonums.txt"); // open/enter a file name
	
	for (int i = 1; i <= 20; i++) // calculate up to 20 values
	{
		fibo3 = fibo2;
		fibo2 = fibo1; 
		fibo1 = fibo2 + fibo3; // sum becomes the 2nd number. Add to the previous number. repeat
		
		/* cout << fibo3 << endl; << if you wanted to output to the screen, but in this program, we don't want to */
		outfile << fibo3 << endl; // put the output into the file
	}
	
	outfile.close(); // close file
	 
	return 0;
}
 
// if you save this onto desktop, a file will appear on your homescreen so that when you open it, it will display the 1st 20 numbers of the fibonacci sequence
