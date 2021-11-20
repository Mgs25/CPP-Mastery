// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include <memory>
#include <stdlib.h>
#include <conio.h>  
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    try {
        unique_ptr<Account> a1 = make_unique<Account>("Account Holder", 1200);
        cout << *a1 << endl;
        unique_ptr<Account> a2 = make_unique<Savings_Account>("Account Holder", 1200);
        cout << *a2 << endl;
        unique_ptr<Account> a3 = make_unique<Trust_Account>("Account Holder", 1200);
        cout << *a3 << endl;
        unique_ptr<Account> a4 = make_unique<Checking_Account>("Account Holder", 1200);
        cout << *a4 << endl;
        a1->withdraw(12000);
    }
    catch(IllegalBalanceException& ex) {
        cerr << ex.what() << endl;
    }
    catch(InsufficientBalanceException& ex) {
        cerr << ex.what() << endl;
    }

//
//    vector<unique_ptr<Account>> v;
//    
//    v.push_back(move(a1));
//    v.push_back(move(a2));
//    v.push_back(move(a3));
//    v.push_back(move(a4));
//    
//    display(v);

//    unique_ptr<Account> ptr1 = make_unique<Trust_Account>("A", 0, 100);
//    unique_ptr<Account> ptr2 = make_unique<Savings_Account>("B", 100000, 2);
//    unique_ptr<Account> ptr3 = make_unique<Account>("C", 10000);
//    unique_ptr<Account> ptr4 = make_unique<Checking_Account>("D", 1000000);
//    
//    vector<unique_ptr<Account>> v;
//    
//    v.push_back(move(ptr1));
//    v.push_back(move(ptr2));
//    v.push_back(move(ptr3));
//    v.push_back(move(ptr4));
//    
//    deposit(v, 55000);
//    
//    withdraw(v, 2000);
//    withdraw(v, 2000);
//    withdraw(v, 2000);
//    withdraw(v, 2000);
    return 0;
}