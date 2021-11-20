#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream my_file;
    string line {};
    
    my_file.open("test.txt");
    
    if (!my_file) {
        cerr << "Problem opening the file." << endl;
        return 1;
    }
    
    while (!my_file.eof()) {
        getline(my_file, line);
        cout << line << endl;
    }
    
    my_file.close();
    
    return 0;
}