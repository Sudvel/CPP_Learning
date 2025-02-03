#include <iostream>
#include "Sales.h"
using namespace SALES;

const int ARR_S = 2;

int main()
{
    double s_arr[ARR_S]{5, 5};
    Sales s1, s2;
    setSales(s1, s_arr, ARR_S);
    setSales(s2);
    showSales(s1);
    showSales(s2);
    std::cin.get();
    std::cin.get();
}