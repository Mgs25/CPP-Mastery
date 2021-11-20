#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ofstream my_file;
    my_file.open("sample.txt", ios::app);
    
    string line {};
    cout << "Enter line to output: ";
    getline(cin, line);
    
    if (!my_file) {
        cerr << "Error opening the file.";
        return 1;
    }
    
    my_file << line << '\n';
    
    my_file.close();
    return 0;
}