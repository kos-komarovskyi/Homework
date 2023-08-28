#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	time(nullptr); 
	srand(66);
	int number = rand ();
	cout << number;
	return 0;
} 