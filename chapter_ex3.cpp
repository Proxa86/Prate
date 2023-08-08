#include <iostream>

void string1();
void string2();

int main()
{
	string1();
	string1();
	string2();
	string2();  
	return 0;
}

void string1()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void string2()
{
	using namespace std;
	cout << "See how they run" << endl;
}
