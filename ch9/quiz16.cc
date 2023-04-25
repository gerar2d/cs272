#include <iostream>
#include <string>
using namespace std;

class Account 
{
private:
    double info;

public:
    Account() : info(0.0) {}
    void deposit(const double &amount);
    void withdraw(const double &amount);
    double balance();
};

void Account::deposit(const double &amount) 
{
    info += amount;
}

void Account::withdraw(const double &amount) 
{
    info -= amount;
}

double Account::balance() 
{
    return info;
}

int main() 
{
    Account account1;
    
    account1.deposit(234);
    cout << "New Balance after a deposite: $" << account1.balance() << endl;
    
    account1.withdraw(530.23);
    cout << "New Balance a withdrawl: $" << account1.balance() << endl;
    
    account1.deposit(200.65);
    cout << "Balance: $" << account1.balance() << endl;
    return 0;
}