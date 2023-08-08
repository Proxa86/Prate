#include <iostream>

int celsius_to_fahrenheit(int);

int main()
{
	using namespace std;
	int celsius;
	cout << "Enter a Celsius value: ";
	cin >> celsius;
	int fahrenheit = celsius_to_fahrenheit(celsius);
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;  
	return 0;
}

int celsius_to_fahrenheit(int celsius)
{
	return 1.8 * celsius + 32;
}
