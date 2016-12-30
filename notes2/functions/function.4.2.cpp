// determining the volume of a cylinder using given radius and a dice roll for the height

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float cyl_vol(float radius, float height);
int dieroll(int num_sides);

int main()
{
	float radius;
	srand(time(0));
	
	cout << "What's the radius? ";
	cin >> radius;
	
	cout << "The volume of your cylinder is " << cyl_vol(radius, dieroll(6)) << "." << endl;
	
	return 0;
}

float cyl_vol(float radius, float height) // the stuff inside the parentheses are the variables used in the funciton
{
	const double pi = 3.14159;
	
	float volume;
	volume = pi * radius * radius * height;
	
	return volume;	
}

int dieroll(int num_sides)
{
	return rand()%num_sides + 1;
}
