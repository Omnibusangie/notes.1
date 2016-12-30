#include <iostream>

using namespace std;

bool IsVowel (char testvalue) ; // this is the function

int main()
{
	char letter; //character variable
	cout << "Please enter a capital letter: ";
	cin >> letter;
	IsVowel(letter); //<< send the letter into isvowel, the function. it's gonna come back as true/false
	
	if(IsVowel(letter)) //already gives back a true/false value. don't need to declare "if it's true"
		{
			cout << "Not a ";
		}
	
	cout << "vowel";
		
		return 0;
}

bool IsVowel (char testvalue) 
{
	if(testvalue == 'A' || testvalue == 'E' || testvalue == 'I' || testvalue == 'O' || testvalue == 'U');
		return true;

}


/* CODE DOESNT WORK IELAJKN */
