#include "Account_Utils.h"
#include <iostream>
#include <string>

void get_separator() {
    std::cout << "==========================================" << std::endl;
}

void display(const std::vector<Account>& vec) {
    get_separator();
    std::cout << "=== Accounts Detail ================" << std::endl;
    for (const auto& acc: vec) {
        std::cout << acc << std::endl;
    }
    get_separator();
}

void deposit(std::vector<Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Accounts Deposit ===============" << std::endl;
    std::cout << "Depositing " << amt << " into Accounts." << std::endl;
    for (auto& acc : vec) {
        if (acc.deposit(amt)) {
            std::cout << "Deposit success: " << acc << std::endl;
        }
        else {
            std::cout << "Deposit failed: " << acc << std::endl;
        }
    }
    get_separator();
}

void withdraw(std::vector<Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Accounts Withdraw =============" << std::endl;
    std::cout << "Withdrawing " << amt << " from Accounts." << std::endl;
    for (auto& acc : vec) {
        if (acc.withdraw(amt)) {
            std::cout << "Withdraw success  : " << acc << std::endl;
        }
        else {
            std::cout << "Insufficient funds: " << acc << std::endl;
        }
    }
    get_separator();
}

// Savings
void display(const std::vector<Savings_Account>& vec) {
    get_separator();
    std::cout << "=== Saving Accounts Detail ================" << std::endl;
    for (const auto& acc: vec) {
        std::cout << acc << std::endl;
    }
    get_separator();
}

void deposit(std::vector<Savings_Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Saving Accounts Deposit ===============" << std::endl;
    std::cout << "Depositing " << amt << " into Savings account" << std::endl;
    for (auto& acc : vec) {
        if (acc.deposit(amt)) {
            std::cout << "Deposit success: " << acc << std::endl;
        }
        else {
            std::cout << "Deposit failed : " << acc << std::endl;
        }
    }
    get_separator();
}

void withdraw(std::vector<Savings_Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Saving Accounts Withdraw =============" << std::endl;
    std::cout << "Withdrawing " << amt << " from Savings account." << std::endl;
    for (auto& acc : vec) {
        if (acc.withdraw(amt)) {
            std::cout << "Withdraw success: " << acc << std::endl;
        }
        else {
            std::cout << "Insufficient funds: " << acc << std::endl;
        }
    }
    get_separator();
}

// Checking

void display(const std::vector<Checking_Account>& vec) {
    get_separator();
    std::cout << "=== Checking Accounts Detail ================" << std::endl;
    for (const auto& acc: vec) {
        std::cout << acc << std::endl;
    }
    get_separator();
}

void deposit(std::vector<Checking_Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Checking Accounts Deposit ===============" << std::endl;
    std::cout << "Depositing " << amt << " into Checking accounts." << std::endl;
    for (auto& acc : vec) {
        if (acc.deposit(amt)) {
            std::cout << "Deposit success: " << acc << std::endl;
        }
        else {
            std::cout << "Deposit failed : " << acc << std::endl;
        }
    }
    get_separator();
}

void withdraw(std::vector<Checking_Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Checking Accounts Withdraw =============" << std::endl;
    std::cout << "Withdrawing " << amt << " + 100 (Extra Fee) from Checking accounts." << std::endl;
    for (auto& acc : vec) {
        if (acc.withdraw(amt)) {
            std::cout << "Withdraw success: " << acc << std::endl;
        }
        else {
            std::cout << "Insufficient funds: " << acc << std::endl;
        }
    }
    get_separator();
}

// Trust account

void display(const std::vector<Trust_Account>& vec) {
    get_separator();
    std::cout << "========== Trust Accounts Detail =========" << std::endl;
    std::cout << std::endl;
    for (const auto& acc: vec) {
        std::cout << acc << std::endl;
    }
    get_separator();
    std::cout << std::endl;
}

void deposit(std::vector<Trust_Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Trust Accounts Deposit ===============" << std::endl;
    std::cout << "Depositing " << amt << " into Trust accounts." << std::endl;
    std::cout << std::endl;
    for (auto& acc : vec) {
        if (acc.deposit(amt)) {
            std::cout << "Deposit success: " << acc << std::endl;
        }
        else {
            std::cout << "Deposit failed : " << acc << std::endl;
        }
        std::cout << std::endl;
    }
    get_separator();
}

void withdraw(std::vector<Trust_Account>& vec, double amt) {
    get_separator();
    std::cout << "=== Trust Accounts Withdraw =============" << std::endl;
    std::cout << "Withdrawing " << amt << " from Trust accounts." << std::endl;
    std::cout << std::endl;
    for (auto& acc : vec) {
        auto withdraw_track {2 - acc.withdraw_limit};
        if (acc.withdraw(amt)) {
            std::cout << "Withdraw success: " << acc << std::endl;
            std::cout << "Remaining Withdraws: " << withdraw_track << std::endl;
        }
        else {
            std::cout << "Withdraw failed : " << acc << std::endl;
            if (withdraw_track <= 0)
                std::cout << "Withdraw limit reached." << std::endl;
            else if (acc.get_balance() - amt < 0)
                std::cout << "Insufficient funds in account." << std::endl;
            else if (amt >= acc.get_balance() * 0.2)
                std::cout << "Withdrew more than 20% of the current balance." << std::endl;

        }
        std::cout << std::endl;
    }
    get_separator();
}