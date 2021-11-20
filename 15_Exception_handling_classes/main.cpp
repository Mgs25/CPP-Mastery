#include <iostream>
#include <vector>
#include <string>

using namespace std;

class DivideByZeroException {
public:
    string message { "[ERROR] Division by zero." };
};

class NegativeValueException {
public:
    string message { "[ERROR] Negative values are not allowed." };
};

double calc_value(int a) {
    if (a == 0) {
        throw DivideByZeroException();
    }
    if (a < 0) {
        throw NegativeValueException();
    }
    return a * 100;
}

int main() {
    int a {};
    cout << "Enter A: ";
    cin >> a;
    try {
        auto result = calc_value(a);
        cout << "Program executed with no errors\nValue of A: " << result;
    }
    catch(const DivideByZeroException& ex) {
        cerr << ex.message << endl;
    }
    catch(const NegativeValueException& ex) {
        cerr << ex.message << endl;
    }
    return 0;
}