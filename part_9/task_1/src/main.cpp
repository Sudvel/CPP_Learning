#include <iostream>
#include "golf.h"
using namespace std;

const int SIZE = 5;

int main()
{
    int real_s = 0;
    Golf G_arr[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        real_s = i;
        if (!setgolf(G_arr[i])) break;
    }
    for(int i = 0; i < real_s; i++)
    {
        cout << "Player " << i  << ":" << endl;
        showgolf(G_arr[i]);
    }
    cin.get();
}