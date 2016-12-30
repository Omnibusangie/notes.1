// if test
#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{
	char enter;
	
	do
	{	cout << "Enter (E) for encryption, (D) for decryption: ";
		cin >> enter;
	
		if(enter == 'E')
			{ cout << "E" << endl;	}
		if(enter == 'D')
			{ cout << "D" << endl;	}
	}

	while(enter != 'E' && enter != 'D');
		
return 0;
}
