#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream in_file {"source.txt", ios::in};
    ofstream out_file {"copy.txt", ios::out};
    
    if (!in_file) {
        cerr << "Error - Opening the file.";
        return 1;
    }
    if (!out_file) {
        cerr << "Error - Creating the file.";
        return 1;
    }
    
    string line {};
    
    while (getline(in_file, line)) {
        out_file << line << '\n';
    }
    
    cout << "Content copied successfully." << endl;
    
    in_file.close();
    out_file.close();
    
    return 0;
}