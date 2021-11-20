#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Pure virtual functions and abstract classes

class Account {
protected:
    double balance;
public:
    Account(double bal_val = 0) : balance {bal_val} {}
    ~Account() {}
    
    virtual double get_balance() const = 0;
};

class Savings_Account : public Account {
protected:
    double interest_rate;
public:
    Savings_Account() : Savings_Account(0.0, 0.0) {}
    
    Savings_Account(double bal_val, double int_val)
        : Account {bal_val}, interest_rate {int_val} {}
    
    ~Savings_Account() {}
    
    double get_balance() const {
        return balance + (balance * (interest_rate / 100));
    }
};

int main() {
    Savings_Account obj {1043.76, 90};
    
    Account& ref = obj;
    
    cout << ref.get_balance() << endl;
    
    return 0;
}