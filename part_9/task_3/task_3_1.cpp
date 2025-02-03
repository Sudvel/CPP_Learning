#include <iostream>
using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    char buffer[512];
    chaff *pt_c = new (buffer) chaff[2];
    for(int i = 0; i < 2; i++)
    {
        cout << "Enter dross: ";
        cin.getline(pt_c[i].dross, 20);
        cout << "Enter number: ";
        cin >> pt_c[i].slag;
        cin.get();
    }
    for(int i = 0; i < 2; i++)
    {
        cout << "Chaff " << i+1 << ":" << endl;
        cout << "dross - " << pt_c[i].dross << endl;
        cout << "number-  " << pt_c[i].slag << endl;
    }
    
}