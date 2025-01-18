#include<iostream>
#include <array>
#include <string>
#include <cstring>
using namespace std;

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

//tasks:
//____________________________________

//task_1();
//task_2();
//task_3();
//task_4();
//task_5();
//task_6();
//task_7();
//task_8();
//task_9();
task_10();

}

void task_1()
{
    int a, b, sum;
    cout << "Введите нижнюю границу: ";
    cin >> a;
    cout << "Введите верхнюю границу: ";
    cin >> b;
    sum = 0;
    for (int i = a; i<=b; ++i)
    {sum+=i;}
    cout << "Сумма целых чисел от " << a << " до " << b << " = " << sum << endl;
}

void task_2()
{
    array <long double, 110> arr;
    int a, b, sum;
    cout << "Введите границу: ";
    cin >> a;
    arr[0] = arr[1] = 1;
    for (int i = 2; i<=a; ++i)
    {
    arr[i] = arr[i-1]*i;
    }
    cout << a << "! = " << arr[a] << endl;
}

void task_4()
{
const double p_kleo = 0.05;
double dafna, kleo, year;
dafna = kleo = 100;
year = 0;
while(kleo <= dafna)
{
    dafna = dafna + 10.0;
    kleo = kleo + kleo*p_kleo;
    year++;
    cout << year << "-st year:" << endl;
    cout << "Dafna: " << dafna << endl;
    cout << "Kleo: " << kleo << endl;
    cout << "__________________________________" << endl;
}
}

void task_5()
{
    string monthes[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12];
    int sum = 0;
    cout << "Iput sales per month: " << endl;
    for ( int i = 0; i < 12; i++)
    {
        cout << i+1 << "-st month: ";
        cin >> sales[i];
    }
    for (int i: sales)
    {sum += i;}
    cout << "Total sales = " << sum;
}

void task_6()
{
    string monthes[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[3][12];
    int sum = 0;
    int year_sum = 0;
    cout << "Iput sales per month: " << endl;
    for (int j =0; j < 3; j++)
    {
        cout << j+1 << "-st year: " << endl;
        for ( int i = 0; i < 12; i++)
        {
            cout << i+1 << "-st month: ";
            cin >> sales[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 12; j++)
        {
            year_sum += sales[i][j];
        }
        cout << i+1 << "-st year: " << year_sum << endl;
        sum += year_sum;
        year_sum = 0;
    }
    
    cout << "Total sales = " << sum;
}

void task_7()
{
    struct car
    {
        string manufacturer;
        int release_year;
    };
    int amount;
    cout << "Enter the number of cars: ";
    cin >> amount;
    cin.get();
    car *cars_collection = new car[amount];
    for (int i = 0; i<amount; i++)
    {
        cout << "Enter manufacturer name: ";
        getline(cin, cars_collection[i].manufacturer);
        cout << "Enter production year: ";
        cin >> cars_collection[i].release_year;
        cin.get();
    }
    cout << "Your collection: " << endl;
    for (int i = 0; i<amount; i++)
    {
        cout << cars_collection[i].release_year << " " << cars_collection[i].manufacturer << endl;
    }
}

void task_8()
{
    int n = 0;
    char * str = new char;
    do{
        cin >> str;
        n++;
    }while(strcmp(str, "done") != 0);
    n--;
    cout << "You enter " << n << " words";

}

void task_9()
{
    string str;
    int n = 0;
    do{
        cin >> str;
        n++;
    }while (str != "done");
    n --;
    cout << "You enter " << n << " words";
}

void task_10()
{
int n;
cout << "Enter number of lines: ";
cin >> n;
for (int i = 1; i <=n; i++)
{
    for (int a = 0; a < n-i; a++)
    {
        cout << ".";
    }
    for (int b = 0; b < i; b++)
    {
        cout << "*";
    }
    cout << endl;
}
}