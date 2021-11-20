#include <iostream>
#include <string>
using namespace std;

class Printable {
    friend ostream& operator <<(ostream& os, const Printable& obj);
public:
    virtual void print(ostream& os) const = 0;
    virtual ~Printable() {}
};

class Account : public Printable {
protected:
    double balance;
public:
    Account(double bal_val = 0) : balance {bal_val} {}
    
    void print(ostream& os) const override {
        os << "Account balance: " << balance << endl;
    }
    
    virtual ~Account() {}
};

class Savings_Account : public Account {
    double interest_rate;
public:
    Savings_Account(double bal_val = 0.0, double int_val = 0.0)
        : Account {bal_val}, interest_rate {int_val} {}

    void print(ostream& os) const override {
        os << "Savings account balance: " << balance << endl;
        os << "Savings account balance: " << interest_rate << endl;
    }
    virtual ~Savings_Account() {}
};

class Dog : public Printable {
public:
    void print(ostream& os) const override {
        os << "Woof woof" << endl;
    }
    virtual ~Dog() {}
};

ostream& operator <<(ostream& os, const Printable& obj) {
    obj.print(os);
    return os;
}

int main() {
    Printable* obj1 = new Account(13.65);
    Printable* obj2 = new Savings_Account(12, 1.2);
    Printable* obj3 = new Dog();
    
    cout << *obj1 << endl;
    cout << *obj2 << endl;
    cout << *obj3 << endl;

    return 0;
}