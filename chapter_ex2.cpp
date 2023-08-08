#include <iostream>

int phalloges(int);

int main()
{
	using namespace std;
	int phallog;
	cout << "Enter count phalloges: ";
	cin >> phallog;
	int yard = phalloges(phallog);
	cout << phallog << " phallogs = " << yard << " yards." << endl;  
	return 0;
}

int phalloges(int p)
{
	return p * 220;
}
