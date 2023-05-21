#pragma once
#include <iostream>
using std::string;

class Account
{
    private:
        int actnum;
        string aname;
        double balance;

    public:
        Account(int, string, double);
        ~Account();

        void debit(double);
        void credit(double);
        
        void setActnum(int);
        void setName(string);
        void setBalance(double);
        int getActnum();
        string getName();
        double getBalance();
};


