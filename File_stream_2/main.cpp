#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream my_file;
    string a {};
    int b;
    double c;
    
    my_file.open("test.txt", ios::in);
    
    if (!my_file) {
        cerr << "Problem opening the file." << endl;
        return 1;
    }
    
    while (!my_file.eof()) {
        my_file >> a >> b >> c;
        cout << setw(a.size() + 10) << left << a;
        cout << setw(a.size() + 10) << b;
        cout << setw(a.size() + 10) << c << endl;
    }
    
    my_file.close();
    
    return 0;
}