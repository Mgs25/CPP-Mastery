#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class Test {
    int data;
public:
    Test(int x = 0) : data {x} { cout << "Default test constructor called." << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor called." << endl; }
};

void my_deleter(Test*& p) {
    cout << "Custom deleter called." << endl;
    delete p;
}

int main() {
    shared_ptr<Test> ptr {new Test {10}, my_deleter};
    cout << ptr->get_data() << endl;
    return 0;
}