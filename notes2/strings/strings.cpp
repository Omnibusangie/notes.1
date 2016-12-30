/*

Strings: a new type of data
to use, must #include <string>
hold multiple characters in a "string" of text
use string variables like any other variable
string constants are anclosed in double quotes
**characters (char) are enclosed in single quotes
*/

//for example

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name; 
	name = "Josh";
	
	/* operators: == test for equality
	+ to concaterat strings (combine one after the other)
	>> to cin a string (note that cin stops at whitespace, cin cannot use multiple words with spaces in between)
	
	a number of dot funcitons can be used as string variables
	they are called dot variables to use them to add to the variable name a period/dot, then the funciton name
	
	
	ex. .Sze() << returns the # of characters in a string
	.empty() << returns true/false if variable is equal to an empty screen (variable == "")
	.substr(int start, int length) << returns hte portion of the varibale starting at character 'start' and continuing for 'length'
	
	**You add these to the name of the variable
	
	cout << name.size(); 
