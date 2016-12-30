#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	srand(time(0));
	
	cout << "Flipping a coin (1=heads, 0=tails)";
	int coin_num = rand() % 2;
	
	if(coin_num % 2)
	{
		cout << coin_num << ", Heads" << endl;
	}
	
	else
	{
		cout << coin_num << ", Tails" << endl;
	}
	
	return 0;
}
