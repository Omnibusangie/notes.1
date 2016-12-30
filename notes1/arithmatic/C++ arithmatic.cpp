// C++ arithmatic: +, -, *, /, (), however, the ^ is not a function for exponents!

#include <iostream>

using namespace std; 
int main ()

{
cout << 7/4;

cout << 7%4;

int x;

cout << x/4.0;

/*
int x = 4;

cout << x++; <-- x = x + 1
cout << x--; <-- x = x -1
*/

// if you want to do more complex math funcions than these, use the library <cstdlib>

/*

rand() --> an integer from 0-32768

RAND_MAX (they give you "seemingly" random numbers)

srand(n) <-- "seed the random number with this value (n)

*/

/* 

if you include <ctime>
time(0)
you can use this to furthermore random-ify your "random" numbers
e.g. srand(time(0)


*/

return 0;
}
