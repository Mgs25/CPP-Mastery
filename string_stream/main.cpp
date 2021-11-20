#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string data {"Methran 13 04 2003"};
    
    string name {};
    int date, month, year;
    
    istringstream iss {data};
    
    iss >> name >> date >> month >> year;
    
    cout << "Original string: " << data << endl;
    
    cout << "Data extracted:" << endl;
    cout << name << endl << date << endl << month << endl << year << endl;
    
    cout << "Using ostream." << endl;
    
    ostringstream oss {};
    oss << name << ' ' << date << ' ' << month << ' ' << year;
    string final { oss.str() };
    cout << final << endl;
    
    return 0;
}