#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!\n" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << "waist = " << hex << waist << dec << " (hexadecimal for 42)" << endl;
	cout << "inseam = " << oct << inseam << " (octal for 42)" << endl;
	return 0;
}
