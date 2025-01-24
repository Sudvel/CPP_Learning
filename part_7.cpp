#include <iostream>
using namespace std;


double harmonic_mean(double a, double b);

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7();
void task_8();
void task_9();
void task_10();

int main()
{
//task_1();
//task_2();
//task_5();
//task_6();
//task_8();
task_10();
}

double harmonic_mean(double a, double b);
void task_1()
{
    double a, b;
    while(cin >> a >> b && a!=0 && b!=0)
    {
        cout << harmonic_mean(a, b) << endl;
    }

}
double harmonic_mean(double a, double b)
{
    return (2.0*a*b) / (a+b);
}


int fill_arr(int ar[], int n);
void show_arr(int ar[], int n);
double average(int ar[], int n);

void task_2()
{
    const int MAX_N = 10;
    int arr[MAX_N];
    cout << "Enter 10 numbers: " << endl;
    int n = fill_arr(arr, MAX_N);
    cout << "You enter: ";
    show_arr(arr, n);
    cout << "Average value = ";
    cout << average(arr, n);
}

int fill_arr(int ar[], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        if(cin >> tmp && tmp >= 0)
        {
            ar[i] = tmp;
        }
        else
        {
            return i;
        }
    }
    return n;
}
void show_arr(int ar[], int n)
{
    if (n == 0){cout << "Array is empty " << endl; return;}
    for (int i = 0; i < n; i++) {cout << ar[i] << " ";}
    cout << endl;
}
double average(int ar[], int n)
{
    if (n == 0){cout << "Array is empty " << endl; return 0;}
    double sm = 0;
    for (int i = 0; i < n; i++){sm+= ar[i];}
    return sm/double(n);
}


long long fact(int n);
void task_5()
{
    int n;
    while(cin >> n){cout << fact(n) << endl;}
}

long long fact(int n)
{
    if (n == 0 || n == 1){return 1;}
    return n*fact(n-1);
}


int fill_arr_d(double ar[], int n);
void show_arr_d(const double ar[], int n);
void reverse_array(double ar[], int n);
void task_6()
{
    int n;
    cout << "Enter array size: ";
    cin>> n;
    double *arr = new double[n];
    n = fill_arr_d(arr, n);
    reverse_array(arr, n);
    show_arr_d(arr, n);
}

int fill_arr_d(double ar[], int n)
{
    double tmp;
    for (int i = 0; i < n; i++)
    {
        if(cin >> tmp)
        {
            ar[i] = tmp;
        }
        else
        {
            return i;
        }
    }
    return n;
}
void show_arr_d(const double ar[], int n)
{
    if (n == 0){cout << "Array is empty " << endl; return;}
    for (int i = 0; i < n; i++) {cout << ar[i] << " ";}
    cout << endl;
}
void reverse_array(double ar[], int n)
{
    double tmp;
    for(int i = 1; i <= n/2-1; i++)
    {
        tmp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = tmp;
    }
}


const int Seasons = 4;
const char* seasons[4] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double ar[]);
void show_seasons_costs(const char* seasons[], double ar[]);
void task_8()
{
    double costs[4];
    fill(costs);
    cout << "EXPENSES: " << endl;
    show_seasons_costs(seasons, costs);
}
void fill(double ar[])
{
    for(int i = 0; i< Seasons; i++)
    {
        cout << "Enter consts for " << seasons[i] << ": ";
        while(!(cin >> ar[i]))
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
    }
}
void show_seasons_costs(const char* seasons[], double ar[])
{
    for (int i = 0; i < Seasons; i++)
    cout << seasons[i] << ": $" << ar[i] << endl;
}


double calculate(double a, double b, double (*pf)(double a, double b));
double sum(double a, double b);
double multiplication(double a, double b);
double subtraction(double a, double b);
double division(double a, double b);
void task_10()
{
    double a, b;
    double (*pf[4]) (double a, double b){sum, multiplication, subtraction, division};
    cout << "Enter 2 numbers, character to quit" << endl;
    while(cin >> a >> b)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Result = " << calculate(a, b, pf[i]) << endl;
        }
    }
}
double calculate(double a, double b, double (*pf)(double a, double b))
{
    return (*pf)(a, b);
}
double sum(double a, double b)
{
    return a+b;
}
double multiplication(double a, double b)
{
    return a*b;
}
double subtraction(double a, double b)
{
    return a - b;
}
double division(double a, double b)
{
    return a/b;
}