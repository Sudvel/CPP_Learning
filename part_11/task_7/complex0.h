#ifndef COMPLEX_0_H_
#define COMPLEX_0_H_
#include <iostream>

class complex
{
private:
    double real;
    double im;
public:
    complex(double real, double im);
    complex();

    friend std::ostream& operator <<(std::ostream & os, const complex& z);
    friend std::istream& operator >>(std::istream & i_s, complex& z);
    friend complex operator*(double value, const complex& z);
    friend complex operator*(const complex& z, double value);

    complex operator~() const;
    complex operator+(const complex &z) const;
    complex operator-(const complex &z) const;
    complex operator*(const complex &z) const;

};

#endif