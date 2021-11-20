#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
    friend std::ostream& operator <<(std::ostream& os, const Account& rhs);
protected:
    double balance;
public:
    Account() : Account {0} {}
    
    Account(double amt) : balance {amt} {}
    
    void deposit(double amt) { balance += amt; }
    
    void withdraw(double amt) {
        if (balance - amt >= 0)
            balance -= amt;
        else
            cout << "Not enough funds in account." << endl;
    }
    
    void get_balance() { cout << "Account balance: " << balance << endl; }
    
    ~Account() {}
};

class Savings_Account : public Account {
protected:
    double interest_rate;
public:
    Savings_Account(double amt_val = 0, double int_rate = 0) 
        : Account {amt_val}, interest_rate {int_rate} {}
    
    void deposit(double amt) {
        balance += (balance / 100) * interest_rate;
        Account::deposit(amt);
    }
};

std::ostream& operator <<(std::ostream& os, const Account& rhs) {
        os << rhs.balance;
        return os;
}

int main() {
    Savings_Account methran {0, 5};
    methran.deposit(986.3);
    cout << methran << endl;
    methran.withdraw(900);
    cout << methran << endl;
    methran.deposit(10000);
    cout << methran << endl;
    return 0;
}