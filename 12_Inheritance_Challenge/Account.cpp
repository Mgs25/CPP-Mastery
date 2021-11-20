#include "Account.h"
#include <string>
#include <iostream>


Account::Account(std::string name_val, double bal_val)
    : name {name_val}, balance {bal_val} {}

bool Account::deposit(double amt) {
    if (amt > 0) {
        balance += amt;
        return true;
    }
    return false;
}

bool Account::withdraw(double amt) {
    if (balance - amt >= 0) {
        balance -= amt;
        return true;
    }
    return false;
}

double Account::get_balance() {
    return balance;
}

Account::~Account() {}
