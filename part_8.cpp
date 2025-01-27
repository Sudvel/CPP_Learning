#include <iostream>
#include <string>
#include <cctype>
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
//task_1();
//task_2();
//task_3();
//task_4();
//task_5();
//task_6();
}


void f_1(const char * str, int n = 0);
void task_1()
{
    f_1("");
    f_1("");
    f_1("bbbbbb", 1);
}
void f_1(const char * str, int n)
{
    static int cnt = 0;
    if (!n) cout << str << endl;
    else
    {
    for(int i = 0; i < cnt; i++)
    cout << str << endl;
    }
    cnt++;
}


struct CandyBar
{
    char * title;
    double weight;
    int colories;
};
void set_CB(CandyBar & cb, char * title = "Millennium Munch", double weight = 2.85, int colories = 350);
void print_CB(const CandyBar& cb);
void task_2()
{
    char name[40];
    double weight;
    int colories;
    CandyBar cb;
    while(true)
    {
        cin.getline(name, 40);
        cin >> weight;
        cin >> colories;
        cin.clear();
        cin.ignore(100000, '\n');
        set_CB(cb, name, weight, colories);
        print_CB(cb);
    }
}
void set_CB(CandyBar & cb, char * title, double weight, int colories)
{
    cb.title = title;
    cb.weight = weight;
    cb.colories = colories;
}
void print_CB(const CandyBar& cb)
{
    cout << "title = " << cb.title << endl;
    cout << "weight = " << cb.weight << endl;
    cout << "colories = " << cb.colories << endl;
}

void up_string(string & str);
void task_3()
{
    string str;
    cout << "Enter string, q to end: ";
    getline(cin, str);
    while(str != "q" && str != "Q")
    {
        up_string(str);
        cout << str << endl;
        cout << "Enter new string: ";
        getline(cin, str);
    }
}
void up_string(string & str)
{
    for(int i = 0; i < str.length(); i++) str[i] = toupper(str[i]);
    
}


struct stringy
{
    char* str;
    int ct;
};
void show(const stringy str, int q = 1);
void show(char * str, int q = 1);
void set(stringy & struc, const char* str);
void task_4()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
}
void show(const stringy str, int q)
{
    for (int i = 0; i < q; i++)
    {
        cout << str.str << endl;;
    }
}
void show(char * str, int q)
{
    for(int i = 0; i < q; i++)
    {
        cout << str << endl;
    }
}
void set(stringy &struc, const char* str)
{
    struc.str = new char[strlen(str)];
    strcpy(struc.str, str);
}


template<typename T>
T max5(T arr[5])
{
    T mx;
    mx = arr[0];
    for (int i = 0; i < 5; i++)
    {
        mx = arr[i] > mx ? arr[i]:mx;
    }
    return mx;
}
void task_5()
{
    int int_arr[5]{1, 2, 3, 4, 5};
    double d_arr[5]{5.0, 2.4, 0.1, 1245352.352, -10.3};
    cout << max5(int_arr) << endl;
    cout << max5(d_arr);
}


template<typename T>
T maxn(T arr[], int n)
{
    T mx;
    mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx = arr[i] > mx ? arr[i]:mx;
    }
    return mx;
}
template<> char* maxn<char*>(char * arr[], int n)
{
    int mx_len = strlen(arr[0]);
    int out_i = 0;
    for (int i = 1; i < n; i++)
    {
        if(strlen(arr[i]) > mx_len)
        {
            mx_len = strlen(arr[i]);
            out_i = i;
        }
    }
    return arr[out_i];
}
const int SIZE = 4;
void task_6()
{
    double d_arr[SIZE] {24.339, 109834.333, 0.2, 9.42};
    int i_arr[SIZE]{10, 3, 0, 4};
    char * str_arr[SIZE]{"iiiii", "aaaaaaa", "uu", "q"};
    cout << maxn(d_arr, SIZE) << endl;
    cout << maxn(i_arr, SIZE) << endl;
    cout << maxn(str_arr, SIZE) << endl;
}
