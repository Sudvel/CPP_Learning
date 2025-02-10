#include <iostream>
#include <cstring>

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

BankAccount::BankAccount(const char * name, const char * account, int balace)
{
    strncpy(this->name, name, 49);
    this->name[49] = '\0';
    strncpy(this->account, account, 49);
    this->account[49] = '\0';
    this->balance = balance;
}