#include <iostream>
#include "Sales.h"
using namespace std;
namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        int lenght = QUARTERS > n? n:QUARTERS;
        for (int i = 0; i < lenght; i++)
        {
            s.sales[i] = ar[i];
        }
        if (lenght < QUARTERS)
        {
            for(int i = lenght; i < QUARTERS; i++)
            {
                s.sales[i] = 0;
            }
        }
        double sum = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 0; i<QUARTERS; i++)
        {
            sum += s.sales[i];
            s.max = s.max > s.sales[i]?s.max:s.sales[i];
            s.min = s.min < s.sales[i]?s.min:s.sales[i];
        }
        s.average = sum/QUARTERS;
    }

    void setSales(Sales &s)
    {
        for(int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter " << i+1 << " quarter sales: ";
            cin >> s.sales[i];
            //cin.get();
        }
        double sum = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 0; i<QUARTERS; i++)
        {
            sum += s.sales[i];
            s.max = s.max>s.sales[i]?s.max:s.sales[i];
            s.min = s.min < s.sales[i]?s.min:s.sales[i];
        }
        s.average = sum/QUARTERS;
    }
    void showSales(const Sales & s)
    {
        for (int i = 0; i<QUARTERS; i++)
        {
            cout << i << " - quarter sales: " << s.sales[i] << endl;
        }
            cout << "Average: " << s.average << endl;
            cout << "Max: " << s.max << endl;
            cout << "Min: " << s.min << endl;
    }
}