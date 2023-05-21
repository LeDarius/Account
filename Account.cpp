#include <iostream>
using std::string;
using namespace std;
#include "Account.h"

Account::Account(int a, string n, double b)
{
    actnum = a;
    aname = n;
    balance = b;
}
Account::~Account()
{
    cout << endl << endl << "Destructor Called" << endl << endl;
}
void Account::debit(double d)
{
    balance = balance - d;
}
void Account::credit(double c)
{
    balance = balance + c;
}
void Account::setActnum(int a)
{
    actnum = a;
}
void Account::setName(string n)
{
    aname = n;
}
void Account::setBalance(double b)
{
    balance = b;
}
int Account::getActnum()
{
    return actnum;
}
string Account::getName()
{
    return aname;
}
double Account::getBalance()
{
    return balance;
}