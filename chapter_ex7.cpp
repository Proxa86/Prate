#include <iostream>

void times(int, int);

int main()
{
	int hour, minutes;
	times(hour, minutes);
	return 0;
}

void times(int hour, int minutes)
{
	using namespace std;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << "Time: " << hour << ":" << minutes << endl;
}
