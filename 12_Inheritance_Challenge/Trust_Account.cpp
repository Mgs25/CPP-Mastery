#include <iostream>
#include <string>
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name_val, double bal_val, double int_val)
    : Savings_Account(name_val, bal_val, int_val) {
        withdraw_limit = 0;
    }

bool Trust_Account::deposit(double amt) {
    amt += (amt >= 5000 ? 50 : 0);
    return Savings_Account::deposit(amt);
}

bool Trust_Account::withdraw(double amt) {
    if (withdraw_limit < 3 && amt < (balance * 0.2)) {
        withdraw_limit++;
        return Savings_Account::withdraw(amt);
    }
    return false;
}