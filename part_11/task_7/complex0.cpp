#include "complex0.h"
#include <iostream>
using namespace std;

complex::complex(double r, double i)
{
    real = r;
    im = i;
}

complex::complex()
{
    real = im = 0;
}

std::ostream& operator <<(std::ostream & os, const complex &z)
{
    os << "(" << z.real << ", " << z.im << "i" << ")";
    return os;
}

std::istream& operator >>(std::istream & i_s, complex& z)
{
    cout << "Real: ";
    i_s >> z.real;
    i_s.get();
    cout << "Imaginary: ";
    i_s >> z.im;
    i_s.get();
    return i_s;
}

complex complex::operator~() const
{
    return complex(real, -im);
}

complex complex::operator+(const complex& z) const
{
    return complex(real + z.real, im + z.im);
}

complex complex::operator-(const complex& z) const
{
    return complex(real - z.real, im - z.im);
}

complex complex::operator*(const complex& z) const
{
    return complex(real*z.real - im*z.im, real*z.im + im*z.real);
}

complex operator*(double value, const complex& z)
{
    return complex(z.real*value, z.im*value);
}
complex operator*(const complex& z, double value)
{
    return value*z;
}



