#include <iostream>

using namespace std;

int main()

{
	cout << "Enter a temperature in Fahrenheit: ";
	double TempInFahrenheit;
	cin >> TempInFahrenheit;
	
	double TempInCelsius = (TempInFahrenheit - 32) * 5 / 9;
	cout << TempInCelsius;

	return 0;
}