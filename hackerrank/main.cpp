#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string s;
    char ch;
    int t;
    getline(cin, s);
    
    stringstream ss (s);
    
    do {
        ss >> t;
        cout << t << endl;
    } while (ss >> ch);
    
    return 0;
}