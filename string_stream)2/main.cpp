#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int value {};
    string line {};
    
    cout << "Enter an integer: ";
    cin >> line;
    
    stringstream ss {line};
    
    if (ss >> value) {
        cout << "You entered an integer!" << endl;
        cout << "Value entered is " << value;
    }
    else {
        cout << "You did not enter an integer!";
    }
    
    return 0;
}