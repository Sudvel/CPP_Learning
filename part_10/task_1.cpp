#include <iostream>
#include <cstring>
using namespace std;


class BankAccount
{
private:
    char name[50];
    char account[50];
    int balance;
public:
    BankAccount(const char * name, const char * account, int balace);
    void show();
    void deposit(int cash);
    void withdraw(int cash);
};

int main()
{
    char name[50];
    char account[50];
    int balance, money;
    cout << "Enter Accaunt data: " << endl;
    cout << "Enter name: ";
    cin.getline(name, 50);
    cout << "Enter account ID: ";
    cin.getline(account, 50);
    cout << "Enter balance: ";
    cin >> balance;
    cin.get();
    BankAccount ba(name, account, balance);
    cout << "Enter how much you want to withdraw (negative number) or deposit (positive number), \'0\' to quit: ";
    cin >> money;
    cin.get();
    while (money != 0)
    {
        if (money > 0) ba.deposit(money);
        if (money < 0) ba.withdraw(-money);
        cout << "Enter how much you want to withdraw (negative number) or deposit (positive number), \'0\' to quit: ";
        cin >> money;
        cin.get();
    }
    ba.show();

}

BankAccount::BankAccount(const char * name, const char * account, int balance)
{
    strncpy(this->name, name, 49);
    this->name[49] = '\0';
    strncpy(this->account, account, 49);
    this->account[49] = '\0';
    this->balance = balance;
}
void BankAccount::show()
{
    cout
    << "Bank Account info: " << endl
    << "Owner name: " << name << endl
    << "Account ID: " << account << endl
    << "Account balance: " << balance << endl;
}

void BankAccount::deposit(int cash)
{
    if (cash > 0)
    balance += cash;
}

void BankAccount::withdraw(int cash)
{
    if(cash > 0)
    {
        if (balance - cash >= 0) balance += cash;
    }
}