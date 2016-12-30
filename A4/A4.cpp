#include <iostream>
#include <cstdlib>

using namespace std;
int main()

{
	float R, week_1 = 0.005, week_nxt, week_num; //ensuring that the code can account for decimals
	
	cout << "Enter the R constant please: " << endl;
	cin >> R; 
	cout << "The band's change in popularity in a year based on (R = " << R << ") displayed in weeks is: " << endl; 
	
	for(week_num = 1; week_num <= 52; week_num ++) //increasing the week number by 1
		{
		if( week_num <= 1)
			week_nxt = week_1; //setting the first week constant
		else
			{
			week_nxt = R * week_1 * (1 - week_1); //defining the equation for the change in popularity
			week_1 = week_nxt; //declaring the new value for "week_1" in the next cycle
			}
		cout << week_num << ": " << week_nxt * 100 << "%" << endl; //printing the week number and the popularity percentage
		}
		
	return 0;
}
