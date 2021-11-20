#ifndef _INSUFFICIENTBALANCE_CPP_
#define _INSUFFICIENTBALANCE_CPP_
#include <exception>

class InsufficientBalanceException : public std::exception {
public:
    InsufficientBalanceException() noexcept = default;
    ~InsufficientBalanceException() = default;
    virtual const char* what() const noexcept {
        return "Insufficient Account Balance.";
    }
};

#endif