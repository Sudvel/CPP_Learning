#include <iostream>
#include "complex0.h"
using namespace std;

int main()
{
    complex a(3.0, 4.0);
    complex c;
    cout << "Enter a complex number (q to quit):" << endl;
    while(cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "complex conjugade is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * a is " << 2 * a << endl;
        cout << "a * 2 is " << a * 2 << endl;
        cout << "Enter a complex number (q to quit):" << endl;
    }
    cout << "Done!";
    cin.get();
}