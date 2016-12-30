// determining the volume of your cyinder purely using dice rolls

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float cyl_vol(float radius, float height);
int dieroll(int num_sides);

int main()
{
	float radius, height;
	srand(time(0));
	
	radius = dieroll(6);
	height = dieroll(6);
	
	cout << "The volume of your cylinder is " << cyl_vol(radius, height) << ", using radius "<< radius << " and height " << height << endl;
	
	return 0;
}

float cyl_vol(float radius, float height)
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

// cool beans!
