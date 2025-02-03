#include <iostream>
using namespace std;

extern double warming;

void update(double dt);
void local();

void update(double dt)
{
    warming += dt;
    cout << "Updating global warmint to: " << warming << endl;
}
void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << endl;
    cout << "But gloval warming = " << ::warming << endl;
}