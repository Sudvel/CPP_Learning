#include <iostream>
#include <cctype>
#include <fstream>

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
//task_5();
//task_6();
//task_8();
task_9();
}

void task_1()
{
    char ch;
    while((cin.get(ch) && ch != '@'))
    {
        if(!isdigit(ch))
        {
            if (islower(ch)){cout << char(toupper(ch));}
            else cout << char(tolower(ch));
        }
    }
}

void task_2()
{
    double donations[10];
    int cnt = 0;
    int upper = 0;
    int sm = 0;
    double avg = 0;
    
    while(cnt<10 && cin>>donations[cnt])
    {
        sm+= donations[cnt];
        cnt++;
    }
    if(cnt > 0)
    {
        avg = sm/double(cnt);
        for (int i = 0; i < cnt; i++)
        {
            if (donations[i] > avg) upper++;
        }
        cout << "average = " << avg << endl;
        cout << "sum = " << sm << endl;
        cout << "more than average: " << upper << endl;
    }
    else cout << "nothing inputed" << endl;
}

void task_3()
{
    cout << "Enter command: " << endl;
    cout << "a) apple" << endl;
    cout << "s) shirt" << endl;
    cout << "j) jacket" << endl;

    char ch;
    cin>>ch;
    while(ch != 'a' && ch != 'j' && ch != 's')
    {
        cout << "Please try again: ";
        cin.ignore(1000, '\n');
        cin >> ch;
    }

    switch(ch)
    {
        case 'a':
        cout << "You buy apple" << endl;
        break;
        
        case 'j':
        cout << "You buy jacket" << endl;
        break;
        
        case 's':
        cout << "You buy shirt" << endl;
        break;
    }
}

void task_5()
{
    int salary;
    double tax = 0;
    cout << "Enter your sallary: ";
    while(cin >> salary && salary >= 0)
    {
        if (salary >= 35000){tax = (salary - 35000) * 0.2 + 4000;}
        else if (salary >= 15000){tax = (salary - 15000)*0.15 + 1000;}
        else if (salary >= 5000){tax = (salary-5000)*0.1;}
        else tax = 0;
        cout << "Your tax: " << tax << endl;
        cout << "Enter your sallary: ";
    }
}

void task_6()
{
    struct Patron
    {
        char name[50];
        int donation;
    };
    int n;
    int gp = 0;
    cout << "Enter the number of patrons: ";
    cin >> n;
    Patron *patrons = new Patron[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin>>patrons[i].name;
        cout << "Enter donation (dollars): ";
        cin >> patrons[i].donation;
    }

    cout << "Grand Patrons:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (patrons[i].donation >= 10000) 
        {
            cout << patrons[i].name << ": " << patrons[i].donation << "$" << endl;
            ++gp;
        }
    }
    if (gp == 0) {cout << "none" << endl;}

    cout << "Patrons:" << endl;
    if (gp == n) cout << "none";
    else
    {
    for (int i = 0; i < n; i++)
    {
        if (patrons[i].donation < 10000) 
        {
            cout << patrons[i].name << ": " << patrons[i].donation << "$" << endl;
        }
    }
    }
}

void task_8()
{
    ifstream f;
    f.open("text.txt");
    char ch;
    int n = 0;
    while(f.get(ch))
    {
        n++;
    }
    cout << n;
    f.close();
}

void task_9()
{
    struct Patron
    {
        char name[50];
        int donation;
    };
    ifstream f;
    f.open("text.txt");
    int n;
    int gp = 0;
    f >> n;
    Patron *patrons = new Patron[n];
    for (int i = 0; i < n; i++)
    {
        f>>patrons[i].name;
        f>> patrons[i].donation;
    }

    cout << "Grand Patrons:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (patrons[i].donation >= 10000) 
        {
            cout << patrons[i].name << ": " << patrons[i].donation << "$" << endl;
            ++gp;
        }
    }
    if (gp == 0) {cout << "none" << endl;}

    cout << "Patrons:" << endl;
    if (gp == n) cout << "none";
    else
    {
    for (int i = 0; i < n; i++)
    {
        if (patrons[i].donation < 10000) 
        {
            cout << patrons[i].name << ": " << patrons[i].donation << "$" << endl;
        }
    }
    }
    f.close();
}