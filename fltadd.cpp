#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34E+6f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    double c = 2.34E+15f;
    double d = c + 1.0f;

    cout << "c = " << c << endl;
    cout << "d - c = " << d - c << endl;

    long double e = 2.34E+18f;
    long double f = e + 1.0f;

    cout << "e = " << e << endl;
    cout << "f - e = " << f - e << endl;
    
    return 0;
}
