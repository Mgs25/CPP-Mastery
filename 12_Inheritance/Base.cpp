#include <iostream>
#include "Base.h"

void Base::deposit(double amt) {
    std::cout << "Deposit called using Base for " << amt << std::endl;
}

void Base::withdraw(double amt) {
    std::cout << "Withdraw called using base for " << amt << std::endl;
}