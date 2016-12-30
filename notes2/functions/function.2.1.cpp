#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int dice_sum = 0;
	srand(time(0));
	
	for(int i = 0; i < 10; i++) 
	{
		dice_sum = dice_sum + rand()%6 + 1;
	}
	
	cout << "The sum is " << dice_sum << " ." << endl;
	
	return 0;
}
