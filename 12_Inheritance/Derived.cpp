#include <iostream>
#include "Derived.h"

void Derived::deposit(double amt) {
    std::cout << "Deposit called using derived for " << amt << std::endl;
}

void Derived::withdraw(double amt) {
    std::cout << "Withdraw called using derived for " << amt << std::endl;
}

