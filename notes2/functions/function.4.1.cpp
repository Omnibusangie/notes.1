// im gonna try and make the cylinder code more succinct 

#include <iostream>

using namespace std;

float cyl_vol(float radius, float height); // this is just to declare what the function is. You will still always have to define the function: displayed below in the brackets.

int main()
{
		float r, h, v;
	
	cout << "What is the radius? " << endl;
	cin >> r;
	
	cout << "What is the height? " << endl;
	cin >> h;
	
	v = cyl_vol(r,h); // use the cyl_vol function
	
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
