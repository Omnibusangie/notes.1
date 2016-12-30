// uses functions to determine volume of a cylinder
// funcion is "cyl_vol"

#include <iostream>

using namespace std;

float cyl_vol(float radius, float height);

int main()
{
	float r, h, v;
	
	cout << "What is the radius? " << endl;
	cin >> r;
	
	cout << "What is the height? " << endl;
	cin >> h;
	
	v = cyl_vol(r, h);
	
	cout << "The volume of your cylinder is " << v << "." << endl;
	
	return 0;
}

float cyl_vol(float radius, float height)
{
	const double pi = 3.14159;
	float volume;
	
	volume = pi * radius * radius * height;
	
	return volume;
}
