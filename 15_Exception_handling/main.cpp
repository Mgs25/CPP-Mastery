#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

double calc_avg(int sum, int total) {
    if (total == 0) {
        throw 0;
    }
    if (total < 0) {
        throw string {"[Error] Negative value not allowed."};
    }
    return static_cast<double>(sum) / total;
}

int main() {
    int a {}, b {};
    cout << "Enter SUM: ";
    cin >> a;
    cout << "Enter TOTAL: "; 
    cin >> b;
    
    try {
        auto avg = calc_avg(a, b);
        cout << avg << endl;
    }

    catch(int& ex) {
        cerr << "[Error] Division by zero." << endl;
    }
    catch(string& ex) {
        cerr << ex << endl;
    }
    catch(...) { // catch all handler
        cerr << "Unknown exception." << endl;
    }
     
    
    return 0;
}