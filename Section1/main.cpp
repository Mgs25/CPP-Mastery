#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter your favorite number from 0 to 100: ";
    cin >> n;
    if (n >= 0 && n <= 100) {
        cout << "Your favorite number is " << n;
    }
    else {
        cout << "Invalid range!";
    }
    return 0;
}