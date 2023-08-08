#include <iostream>

double lightYears_to_astronomicalUnits(double);

int main()
{
	using namespace std;
	double light;
	cout << "Enter the number of light years: ";
	cin >> light;
	double units = lightYears_to_astronomicalUnits(light);
	cout << light << " light year = " << units << " astronomical units." << endl;  
	return 0;
}

double lightYears_to_astronomicalUnits(double light)
{
	return light * 63240;
}
