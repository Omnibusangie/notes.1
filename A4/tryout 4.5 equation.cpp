#include <iostream>
#include <cstdlib>


using namespace std;
int main()

{
	float R, week_1, week_nxt;
	
	cout << "R value = " << endl;
	cin >> R;
	
	week_1 = 0.005;
	
	week_nxt = (R * week_1 * (1-week_1));
	cout << "nxt week = " << week_nxt << endl;
	
	return 0;
	
}
