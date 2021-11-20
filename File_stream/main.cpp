#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream my_file {"sample.txt", ios::in};
    string line {""};
    int data ;
    double d;
    
    my_file >> line >> data >> d;
    
    cout << line << endl;
    cout << data << endl;
    cout << d << endl;
    
    my_file.close();
    
    return 0;
}