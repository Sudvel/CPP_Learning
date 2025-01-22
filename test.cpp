#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
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

int main()
{
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

    int line= 0;
    char ch;
    while (cin.get(ch) && ch!='Q')
    {
        if (ch == '\n') {line++;}
    }
    cout << line;
}