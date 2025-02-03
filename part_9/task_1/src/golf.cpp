#include <iostream>;
#include "golf.h";
#include <cstring>
using namespace std;

void setgolf(Golf &g, const char * name, int hc)
{
    strcpy(g.name, name);
    g.handicap = hc;
}
int setgolf(Golf &g)
{
    char name[LEN];
    cout << "Enter name: ";
    cin.getline(name, LEN);
    strcpy(g.name, name);
    cout << "Enter handicap: ";
    cin >> g.handicap;
    cin.get();
    if (strlen(name) == 0) return 0;
    return 1;
}
void handicap(Golf &g, int hc)
{
    g.handicap = hc;
}
void showgolf(const Golf &g)
{
    cout << "Name is " << g.name << endl;
    cout << "Handicap is " << g.handicap << endl;
}