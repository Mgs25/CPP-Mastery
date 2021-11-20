#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Functions prototype
void swap(int &a, int &b);
void set_vector(vector<int> &data, int value);
void set_string(string &source, string data);
void print(const vector<int> &data);
void print(const int &data);
void print(const string &data);

int main () {
    int x1 {10}, y1 {20};
    cout << x1 << ' ' << y1 << endl;
    swap(x1, y1);
    cout << x1 << ' ' << y1 << endl;
    cout << endl;
    
    int x2 {10};
    print(x2); 
    cout << endl << endl;
    
    vector<int> list {12, 34, 65, 87, 192, 34};
    print(list);
    cout << endl;
    
    cout << "Chaning values using set_vector function: \n";
    
    set_vector(list, 100);
    print(list);
    
    string s = "methran";
    set_string(s, "modified!");
    
    print(s);

    return 0;
}

void swap(int &a, int &b) {
    int temp {};
    temp = a;
    a = b;
    b = temp;
}

void print(const int &a) {
    cout << "The number is " << a;
}

void print(const vector<int> &data) {
    for (auto i: data)
        cout << i << ' ';
}

void print(const string &data) {
    cout << data;
}

void set_vector(vector<int> &data, int value) {
    for (size_t i {0}; i < data.size(); i++)
        data.at(i) = value;
}

void set_string(string &source, string data) {
    source = data;
}