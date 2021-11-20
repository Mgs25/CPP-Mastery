#include "Checking_Account.h"
#include <string>
#include <iostream>

Checking_Account::Checking_Account(std::string def_name, double def_bal)
    : Account {def_name, def_bal} {}

bool Checking_Account::withdraw(double amt) {
    amt += 150.75;
    return Account::withdraw(amt);
}