#include <iostream>

int year_to_month(int);

int main()
{
	using namespace std;
	int year;
	cout << "Enter you age: ";
	cin >> year;
	int month = year_to_month(year);
	cout << year << " years = " << month << " months." << endl;  
	return 0;
}

int year_to_month(int year)
{
	return year * 12;
}
