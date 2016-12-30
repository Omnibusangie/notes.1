#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string encrypt(string text, int shift);
string decrypt(string text, int shift);

	int main()
	{
		char enter;
		string text;
		int shift;
	
		cout << "Enter text in capital letters: "; // "THISISASECRET" has 13 letters
		cin >> text;
	
		cout << "Enter shift code: ";
		cin >> shift;
		srand(shift);
	
		do
		{
			cout << "Enter (E) for encryption, (D) for decryption: ";
			cin >> enter;
	
			if(enter == 'E')
				// { cout << encrypt() << endl;	} PUT the encrypt function here: encrypt(
				
				// cout << encrypt
			if(enter == 'D')
				// { cout << decrypt() << endl;	} PUT the decrypt function here
			
				// cout << decrypt
		}
		while(enter != 'E' && enter != 'D');
		
	return 0;	
	}

string encrypt(string text, int shift) // the stuff inside the parentheses are the variables used in this function
{	
	string encrypted; // send the text letter by letter into the en/decryption

	
	
	return encrypted;	
}

string decrypt(string text, int shift)
{
	string decrypted;
	
	
	
	return decrypted;	
}
