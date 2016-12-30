#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string encrypt(string code);


string decrypt(string code);



int main()
{
	char enter;
	
	
	
	do
	{	cout << "Enter (E) for encryption, (D) for decryption: ";
		cin >> enter;
	
		if(enter == 'E')
			// { cout << "E" << endl;	}
		if(enter == 'D')
			// { cout << "D" << endl;	}
	}

	while(enter != 'E' && enter != 'D');
		
return 0;
	
}

string encrypt(string code)
{	
	
}
