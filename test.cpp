#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <ctime>
#include <cstring>
#include <iomanip>
using namespace std;

    class A
{
private:
	int value;
	char str[20];
public:
	A(int v,const char *stri)
	{
		value = v;
		strcpy(str, stri);
	}
	friend ostream& operator<< (ostream& stream, const A& a);
};

ostream& operator<< (ostream& stream, const A& a)
{
	stream << "int value: " << a.value << "		string: " << a.str;
    return stream;
	
}

int main()
{
    // int a = 50;
    // int *pointer = &a;
    // int **pp = &pointer;
    // int ***ppp = &pp;
    // cout << ppp << " --> " << *ppp << " --> " << **ppp << " --> " << ***ppp << endl;
    // cout << ppp << " --> " << pp << " --> " << pointer << " --> " << a << endl;
    // while(true) {new int;}

    // double *mas = new double [10000000000];
    // *(mas+1) = 1;
    // //cout << mas[1] << endl;
    // cout << mas << endl;
    // cout << (mas+1) << endl;
    // // cout << (mas+2) << endl;

    // char st_1 [20];
    // int x;
    // char st_2 [20];
    // cin.get(st_1, 20);
    // cin >> x;
    // cin.get();
    // cin.get(st_2, 20).get();
    // cout << "st_1: " << st_1 << endl;
    // cout << "st_2: " << st_2 << endl;
    // cout << "x: " << x << endl;

    // int *a = new int;
    // *a = 10;
    // int *b;
    // b = a;
    // cout << *b << endl;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // delete b;
    // cout << *a << endl;
    // cout << b;

    // for(int i = 0, j = 10;((i <= 10) & (j >= 0)); i++, j--)
    // {
    //     cout << "i = " << i << ", j = " << j << endl;
    // }

    // char ch[6] = "abcdi";
    // cout << size(ch);

    // cout << double(clock())/CLOCKS_PER_SEC << endl;
    // while(double(clock())/CLOCKS_PER_SEC <= 5.0){cout << clock() << endl;}

    // typedef string str;
    // str name;
    // getline(cin, name);
    // cout << name << endl;

    // char ch[3];
    // cin >> ch;
    // while(strcmp(ch, "00") != 0)
    // {
    //     cout << ch << endl;
    //     cin >> ch;
    // }
    // return 0;

    // char ch;
    // int count = 0;
    // cin.get(ch);
    // while (cin.fail() == false)
    // {
    //     cout << ch;
    //     ++count;
    //     cin.get(ch);
    // }
    // cout << endl << count << " characters read" << endl;

    // int k = 8;
    // do {cout << "k = " << k << endl;}
    // while (k++ < 5);

    // for(int i=1; i < 65; i*=2)
    // {cout << i << " ";}

    // class Time
    // {
    //     int h, m;
    //     public:
    //         Time (int hours = 0, int minutes = 0)
    //         {
    //             h = hours;
    //             m = minutes;
    //         }
    //         void show()
    //         {
    //             cout << setfill('0') << setw(2) << h << ':' << setw(2) << m << endl;
    //         }
    // };

    // Time t(12, 30), p = (12, 20);
    // t.show(); p.show();

    // class A
    // {
    //     public:
    //     int v_2;
    //     void print() {cout << "v_1 = " << value << "     v_2 = " << v_2 << endl;}
    //     int get_value(){return value;}
    //     A(int v_1, int v_2): value(v_1), v_2{v_2}{}

    //     private:
    //     int value;
    // };

    // class B: private A
    // {
    //     public:
    //     B(int v_1, int v_2):A(v_1, v_2){}
    //     void print_v(){cout << v_2;}
    // };
    // B b(1, 3);
    // //b.print();
    // b.print_v();

    // char str[20];
    // strcpy(str, "dflkahd");
    // cout << str;

	A* a = new A(10, "my string");
    cout << *a;
}


