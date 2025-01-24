#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <vector>
using namespace std;

// int main()
// {
//     char ch;
//     cout << "Type and I will repeat." << endl;
//     cin.get(ch);
//     while(ch!= '.')
//     {
//         if (ch=='\n') cout << ch;
//         else cout << char(ch+1);
//         cin.get(ch);
//     }
//     cout << endl << "Please excuse the slight confusion" << endl;
//     return 0;
// }

//int main()
// {
//     int spaces = 0;
//     int digits = 0;
//     int chars = 0;
//     int punct = 0;
//     int others = 0;
//     char ch;
//     cout << "Enter @ to terminate input: ";
//     cin.get(ch);
//     while (ch != '@')
//     {
//         if(isdigit(ch)){digits++;}
//         else if (isalpha(ch)){chars++;}
//         else if (isspace(ch)){spaces++;}
//         else if (ispunct(ch)){punct++;}
//         else {others++;}
//         cin.get(ch);
//     }
//     cout << chars << endl
//     << digits << endl
//     << spaces << endl
//     << punct << endl
//     << others;
// }

// const int Len = 66;
// const int Divs = 6;
// struct Time
// {
//     int hours;
//     int minutes;
// };

// Time time_sum(const Time* t1, const Time* t2);
// int sum(int (*ar)[2], int n);
// unsigned int counter(const char*str, char ch);
// void rec(int n);

// int main()
// {
    // int a, b;
    // cin >> a >> b;
    // int c = a>b?a:b;
    // cout << c;

    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // do{
    //     switch(n)
    //     {
    //         case 1:
    //         cout << "one" << endl;
    //         break;
    //         case 2:
    //         cout << "two" << endl;
    //         break;
    //         case 3:
    //         cout << "three" << endl;
    //         break;
    //     }
    //     cin >> n;
    // }while(n != 0);

    // const int Max = 5;
    // int golf[Max];
    // cout << "Enter your golf scores " << endl;
    // cout << "You must enter" << Max << "rounds" << endl;
    // int i;
    // for(i = 0; i<Max; i++)
    // {
    //     cout << "round #" << i+1 << ":";
    //     while(!(cin >> golf[i]))
    //     {
    //         cin.clear();
    //             while(cin.get() != '\n'){continue;}
    //         cout << "Enter number" << endl;
    //     }
        
    // }

    // int n;
    // char ch[20];
    // cin >> n;
    // cin.clear();
    // cin.ignore(100, '\n');
    // cin >> ch;
    // cout << "int: " << n << endl;
    // cout << "char: " << ch << endl;

    // char file_name[20] = "text.txt";
    // ofstream f;
    // f.open(file_name);
    // f << "hellow world" << endl << endl;
    // cout << fixed;
    // f.close();

    // char file_name[20] = "text.txt";
    // int n, cnt, sm=0;
    // ifstream f;
    // f.open(file_name);
    // f>>n;
    // while(f.good())
    // {
    //     cnt++;
    //     sm += n;
    //     f >> n;
    // }
    // cout << "quantity: " << cnt << endl
    // << "sum: " << sm << endl;

    // if (f.eof()){cout << "eof reached" << endl;}
    // else if (f.fail()) {cout << "Input terminated by data mismatch" << endl;}
    // else{cout << "Input terminated for unknown reason" << endl;}

    // if (cnt ==0 ) {cout<< "No data;" << endl;}
    // else
    // {
    // cout << "quantity: " << cnt << endl
    // << "sum: " << sm << endl;
    //close(f)
    // }

    //if (weight >= 115 && weight <125)
    //(ch == 'q' || ch == 'Q)
    //(x % 2 == 0 && !(x==26))
    //(x % 2 == 0 && x % 26 != 0)
    //((donation >= 1000 && donation <= 2000) or quest == 1)
    //(isalpha(ch))
    //((ch>= 'a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z'))

    // int x;
    // cin >> x;
    // x = (x>=0)? x:-x;
    // cout << x;

    // char ch;
    // cin >> ch;
    // switch(ch)
    // {
    //     case 'A':
    //         a_grade++;
    //         break;
    //     case 'B':
    //         b_grade++;
    //         break;
    //     case 'C':
    //         c_grade++;
    //         break;
    //     case 'D':
    //         d_grade++;
    //         break;
    //     default:
    //         f_grade++;
    // }

    // int line= 0;
    // char ch;
    // while (cin.get(ch) && ch!='Q')
    // {
    //     if (ch == '\n') {line++;}
    // }
    // cout << line;

    // int x;
    // int y;
    // int *a = new int;
    // cout << &x <<", " << &y << ", " << a << endl;
    // vector<int> vec{1, 2, 3};
    // int arr[5] {1,2,3,4,5};
    // int *a = begin(arr);
    // int *b = end(arr);
    // cout << *a << ", " << *(b);

    // int arr[3][2]{{1, 2}, {3, 4}, {5, 6}};
    // cout << sum(arr, 3);

    // char str[10];
    // cin.getline(str, 10);
    // cout << counter(str, 'm');

    // Time t1, t2;
    // t1.minutes = 50;
    // t1.hours = 10;
    // t2.minutes = 10;
    // t2.hours = 1;
    // Time t3 = time_sum(&t1, &t2);
    // cout << t3.hours << " hours " << t3.minutes << " minutes" << endl;

//     rec(5);


// }

// int sum(int (*ar)[2], int n)
// {
//     int sm = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for(int j:ar[i]){sm += j;}
//     }
//     return sm;
// }

// unsigned int counter(const char*str, char ch)
// {
//     unsigned int cnt = 0;
//     while(*str)
//     {
//         if(*str == ch)
//         {
//             cnt++;
//         }
//         str++;
//     }
//     return cnt;
// }

// Time time_sum(const Time* t1, const Time* t2)
// {
//     int minutes, hours;
//     Time times;
//     times.hours = t1->hours + t2->hours + (t1->minutes + t2->minutes)/60;
//     times.minutes = (t1->minutes + t2->minutes)%60;
//     return times;
// }

// void rec(int n)
// {
//     if (n >= 0)
//     {
//         cout << n << endl;
//         rec(--n);
//         cout << "Completed" << endl;
//     }
//     else return;
// }


// struct boss{};
// struct map{};
// int replace(char *str, char c1, char c2);
// int judge(int (*pf)(const char* ch));

// int main()
// {
    // void igor();
    // float tofu(int n);
    // double mpg(double a, double b);
    // long summation(long arr[], int n); //long summation(long *arr, int n);
    // double doctore(const char * str);
    // void ofcource(boss b);
    // char * plot(map* m);
    // char str[50];
    // char *pstr = str;
    // cin.getline(str, 50);
    // cout << replace(pstr, '1', 'i');
//

// void give(int arr[], int n, int value)
// {
//     while(n-- > 0)
//     {
//         arr[n] = value;
//     }
// }

// void give_(int * first, int *last, int value)
// {
//     int * now = first;
//     while (now != first)
//     {
//         *now = value;
//         now++;
//     }
// }

// double max_double(const double arr[], int n)
// {
//     double mx = arr[0];
//     if (n>1)
//     {
//         for (int i = 1; i < n; i++)
//     {
//         if(arr[i] > mx) mx = arr[i];
//     }
//     }
//     return mx;
// }

// int replace(char *ch, char c1, char c2)
// {
//     int cnt = 0;
//     while (*ch)
//     {
//         if(*ch == c1)
//         {
//             *ch = c2;
//             cnt++;
//         }
//         ch++;
//     }
//     return cnt;
// }


// int x_2(int value);
// int x_3(int value);
// int x_4(int value);
// int x_n(int (*pf)(int value), int n);

// int main()
// {
//     cout << x_n(x_4, 4);
// }

// int x_2(int value)
// {
//     return value*2;
// }

// int x_3(int value)
// {
//     return value*3;
// }

// int x_4(int value)
// {
//     return value*4;
// }

// int x_n(int (*pf)(int value),int n)
// {
//     return (*pf)(n);
// }

// const double * f0(const double *ar, int n);
// const double * f1(const double *ar, int n);
// const double * f2(const double *ar, int n);

// int main()
// {
//     double arr[5]{1, 2, 3, 4, 5};
//     const double * (*pf)(const double *ar, int n);
//     pf = f1;
//     const double * (*pa[3])(const double *ar, int n){f0, f1, f2};
//     auto pb = pa;
//     const double* (*(*pc)[3])(const double *ar, int n)  = &pa;
//     cout << *(*pc)[0](arr, 5);
    
// }

// const double * f0(const double *ar, int n)
// {
//     return ar;
// }
// const double * f1(const double *ar, int n)
// {
//     return ar+1;
// }
// const double * f2(const double *ar, int n)
// {
//     return ar+2;
// }

struct applicant
{
    char name[30];
    int credit_ratings[3];
};

void f1(applicant *a);
const char* f2(const applicant * a1, const applicant * a2);

typedef void (*t_p1)(applicant *a);
typedef void *(*t_ap[5])(applicant *a);

int main()
{
    //void (*p1)(applicant *a) = f1;
    t_p1 p1 = f1;
    const char* (*p2)(const applicant * a1, const applicant * a2) = f2;
    //void *(*ap[5])(applicant *a);
    t_ap ap;
    
    const char* *(*(*p2[10]))(const applicant * a1, const applicant * a2);

}