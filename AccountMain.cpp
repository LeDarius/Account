#include<iostream>
#include<conio.h>
#include "Account.h"
using namespace std;
void main()
{
    Account youract(1234, "Jane Doe", 200000.00);

    cout << "Account # " << youract.getActnum() << endl;
    cout << "Name " << youract.getName() << endl;
    cout << "Balance " << youract.getBalance() << endl << endl;

    youract.debit(3500.00);

    cout << "Account # " << youract.getActnum() << endl;
    cout << "Name " << youract.getName() << endl;
    cout << "Balance " << youract.getBalance() << endl << endl;
    
    youract.credit(5000.00);
    
    cout << "Account # " << youract.getActnum() << endl;
    cout << "Name " << youract.getName() << endl;
    cout << "Balance " << youract.getBalance() << endl << endl;
}