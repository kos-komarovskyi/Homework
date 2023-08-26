#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	cout << "Enter a Radius of a Circle: "; // we enter  a radius of a circle here
	double Radius; 
	cin >> Radius;
	const double pi = 3.14;
	double Area;
	Area = pi * pow (Radius, 2);
	cout << "Your Circle Area equals to " << Area;

	return 0;
}