#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Account {
public:
    Account() {
        cout << "Account constructor." << endl;
    }
    virtual void say_hello() const {
        cout << "Hello from Account!" << endl;
    }
    virtual ~Account() {
        cout << "Base destructor." << endl;
    }
};

class Savings_Account : public Account {
public:
    Savings_Account() {
        cout << "Savings account constructor." << endl;
    }
    virtual void say_hello() const {
        cout << "Hello from Savings account!" << endl;
    }
    virtual ~Savings_Account() {
        cout << "Savings account destructor." << endl;
    }
};

class Trust_Account : public Account {
public:
    Trust_Account() {
        cout << "Trust account constructor." << endl;
    }
    virtual void say_hello() const {
        cout << "Hello from Trust account!" << endl;
    }
    virtual ~Trust_Account() {
        cout << "Trust account destructor." << endl;
    }
};

class Checking_Account : public Account {
public:
    Checking_Account() {
        cout << "Checking account constructor." << endl;
    }
    virtual void say_hello() const {
        cout << "Hello from Checking account!" << endl;
    }
    virtual ~Checking_Account() {
        cout << "Checking account destructor." << endl;
    }
};

void greet(const Account* obj) {
    cout << "Greetings!" << endl;
    obj->say_hello();
}

int main() {
//    Account* p1 = new Account;
//    Account* p2 = new Savings_Account;
//    Account* p3 = new Trust_Account;
//    Account* p4 = new Checking_Account;
//    
//    cout << "============Account Pointer Vector==========" << endl;
//    vector<Account*> account_vec1;
//    
//    account_vec1.push_back(p1);
//    account_vec1.push_back(p2);
//    account_vec1.push_back(p3);
//    account_vec1.push_back(p4);
//    
//    for (const auto item : account_vec1)
//        greet(item);
//    
//    delete p1;
//    delete p2;
//    delete p3;
//    delete p4;

    Savings_Account obj;

    Account& acc_ref = obj;
    
    acc_ref.say_hello();
    
    return 0;
}