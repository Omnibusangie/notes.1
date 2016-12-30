#include <iostream>

using namespace std;

float DistanceToTossChicken (int Force_in_Newtons);
bool CatchChicken (bool LikeThisChicken, int NumClaws);
char ChickenFirstInitial ();

int main ()

{
	int x;
	float y;
	
	y = DistanceToTossChicken(x);
	y = 5 * DistanceToTossChicken (15);
	cout << ChickenFirstInitial ();
}

float DistanceToTossChicken (int Force_in_Newtons)
{	
	float distance;
	distance = Force_in_Newtons * 5 + 1;
	return distance;
}
// ?? wonky idk how this works
