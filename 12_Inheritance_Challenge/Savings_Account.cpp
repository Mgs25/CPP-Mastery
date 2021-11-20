#include <string>
#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name_val, double amt, double int_val)
    : Account {name_val, amt}, interest_rate {int_val} {}

bool Savings_Account::deposit(double amt) {
    if (amt > 0) {
        amt += amt * (interest_rate / 100);
        Account::deposit(amt);
        return true;
    }
    return false;
}

Savings_Account::~Savings_Account() {}