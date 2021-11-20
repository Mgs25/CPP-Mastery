#ifndef _ILLEGALBALANCEEXCEPTION_CPP_
#define _ILLEGALBALANCEEXCEPTION_CPP_
#include <exception>

class IllegalBalanceException : public std::exception {
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char* what() const noexcept {
        return "Illegal balance exception.";
    }
};

#endif