#include <iostream>
using namespace std;

//inline int addition (int a, int b) {
//    return a + b;
//}

unsigned long long factorial(unsigned long long);
unsigned long long fibonacci(unsigned long long);



int main () {
    //recursive functions
    //FACTORIAL
//    int number {};
//    cout << "Enter number to find factorial: ";
//    cin >> number;
//    
//    unsigned long long result {};
//    result = factorial(number);
//    
//    cout << "Factorial of " << number << " is " << result << endl;

    //FIBONACCI
    int number {};
    cout << "Enter a number to find (number)th fibonacci term: ";
    cin >> number;
    
    unsigned long long result {};
    result = fibonacci(number);
    
    cout << result;
    
    return 0;
}

unsigned long long factorial(unsigned long long n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}