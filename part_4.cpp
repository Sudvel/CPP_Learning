#include <iostream>
#include <array>
#include <string>
#include <vector>
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
//minitasks:
//____________________________________________

/*
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    array<char, 30> a_actor;
    array<short, 100> a_betsie;
    array<float, 13> a_chuck;
    array<long double, 64> a_dipsea;

    int mas[5] {1, 2, 3, 4, 5};

    int sm = mas[0] + mas[4];
    int sm = *mas + *(mas+4);

    float ideas[10];
    cout << ideas[1] << endl;
    cout << *(ideas+1) << endl;

    char food[13] = "cheeseburger";
    cout << food << endl;

    string str = "Waldorf Salad";

    struct Fish
    {
        string type;
        int weight;
        double length;
    };

    Fish f_1 {"shark", 100, 100.213};

    enum Response{Yes = 1, No = 0, Maybe = 2};

    double ted;
    double *p_ted = &ted;
    cout << *p_ted << endl;

    float treacle[10];
    float *p_treacle = treacle;
    cout << *p_treacle << *(p_treacle+9);

    int n;
    cin >> n;
    int * mas = new int [n];
    vector<int> vec(n);

    //Адрес начала строки

    Fish *f_2 = new Fish;
    f_2->type = "Shark";

    //Ошибка исчезнет

    const int str_count = 10;
    vector<string> v_str(str_count);
    array<string, str_count> a_str;
*/

//tasks:
//____________________________________

//task_1();
//task_2();
//task_3();
//task_4();
//task_5();
//task_6();
//task_8();
//task_9();
task_10();

}

void task_1()
{
    char f_name[30], l_name[30], grade;
    int age;
    cout << "What is your first name? ";
    cin.getline(f_name, 30);
    cout << "What is your last name? ";
    cin.getline(l_name, 30);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is yout age? ";
    cin >> age;
    cout << endl;
    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << char(grade+1) << endl;
    cout << "Age: " << age << endl;
}

void task_2()
{
    string f_name, l_name;
    char grade;
    int age;
    cout << "What is your first name? ";
    getline(cin, f_name);
    cout << "What is your last name? ";
    getline(cin, l_name);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is yout age? ";
    cin >> age;
    cout << endl;
    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << char(grade+1) << endl;
    cout << "Age: " << age << endl;
}

void task_3()
{
    char f_name[30], l_name[30], s_string[50];
    cout << "Enter your first name: ";
    cin.getline(f_name, 29);
    cout << "Enter your last name: ";
    cin.getline(l_name, 29);
    strcat(s_string, l_name);
    strcat(s_string, ", ");
    strcat(s_string, f_name);
    cout << "Here's the information in a single string: " << s_string << endl;
}

void task_4()
{
    string f_name, l_name, s_string;
    cout << "Enter your first name: ";
    getline(cin, f_name);
    cout << "Enter your last name: ";
    getline(cin, l_name);
    s_string = f_name + ", " + l_name;
    cout << "Here's the information in a single string: " << s_string << endl;
}

void task_5()
{
    struct CandyBar
    {
        char name[30];
        float weight;
        int calories;
    };
    CandyBar snack {"Mocha Munch", 2.3, 350};
    cout << "Snack characteristics: " << snack.name << " " << snack.weight << " " << snack.calories << endl;
}

void task_6()
{
    struct CandyBar
    {
        string name;
        float weight;
        int calories;
    };
    CandyBar mas[3] = {{"Mocha Munch", 2.3, 350}, {"Chocolate", 5.5, 100}, {"Cookie", 1.2, 50}};
    cout << mas[0].name << endl;
}

void task_8()
{
    struct Pizza
    {
        char company[30];
        int diameter;
        int weight;
    };

    Pizza *p_pizza = new Pizza;
    
    cout << "Enter company: ";
    cin.getline(p_pizza->company, 29);
    cout << "Enter diameter: ";
    cin >> p_pizza->diameter;
    cout << "Enter wight: ";
    cin >> p_pizza->weight;
    cout << p_pizza->company << " " << p_pizza->diameter << " " << p_pizza->weight << endl;
}

void task_9()
{
struct CandyBar
    {
        string name;
        float weight;
        int calories;
    };
    CandyBar *cb = new CandyBar [3];
    //{{"Mocha Munch", 2.3, 350}, {"Chocolate", 5.5, 100}, {"Cookie", 1.2, 50}};
    cb[0] = {"Mocha Munch", 2.3, 350};
    cb[1] = {"Chocolate", 5.5, 100};
    cb[3] = {"Cookie", 1.2, 50};
    cout << cb[3].name << endl;
}

void task_10()
{
    array<float, 3> results;
    cout << "Enter first reuslt: ";
    cin >> results[0];
    cout << "Enter second reuslt: ";
    cin >> results[1];
    cout << "Enter third reuslt: ";
    cin >> results[2];
    cout << "Your results: " << endl
    << results[0] << endl
    << results[1] << endl
    << results[2] << endl
    << "Your avg reuslt is " << (results[0] + results[1] + results[2])/size(results) << endl;
}