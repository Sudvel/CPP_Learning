#include <iostream>
using namespace std;

// class Time
// {
//     private:
//     int h, m;
//     public:
//     Time(int h = 0, int m = 0);
//     Time operator+ (const Time &);
//     friend ostream& operator <<(ostream& os, const Time& t);
//     void show();
// };

// int main()
// {
//     Time t1(1, 25), t2(3, 50);
//     cout << (t1+t2);
// }

// Time::Time(int h, int m) : h(h), m(m){}

// Time Time::operator+ (const Time & t)
// {
//     Time sum;
//     sum.h = this->h + t.h + (this->m + t.m)/60;
//     sum.m = (this->m + t.m)%60;
//     return sum;
// }
// void Time::show(){cout << h << ":" << m;}

// ostream& operator<<(ostream& os, const Time& t)
// {
//     os << t.h << ":" << t.m << endl;
//     return os;
// }

class Stone
{
private:
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stone(int stn = 0, int pds = 0);
    Stone(double pds = 0);
    Stone operator*(double value) const;
};

Stone::Stone(int stn, int pds)
{
    stone = stn;
    pds_left = pds;
    pounds = double(stn) + pds;
}
Stone::Stone(double pds)
{
    pounds = pds;
    stone = int(pds)/Lbs_per_stn;
    pds_left = int(pds) % Lbs_per_stn + pds - int(pds);
}
Stone Stone::operator*(double value) const
{
    return Stone(pounds*value);
}


int main()
{

}