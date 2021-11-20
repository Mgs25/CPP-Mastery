#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class Base {
    int data;
public:
    Base() : data {0} { cout << "Base class default constructor called." << endl; }
    Base(int val) : data {val} { cout << "Base class parameterized constructor called." << endl; }
    ~Base() { cout << "Base class destructor called." << endl; }
};

class Derived : public Base {
public:
    Derived() : Base() { cout << "Derived class default constructor called." << endl; }
    Derived(int val) : Base(val) { cout << "Derived class parameterized constructor called." << endl; }
    ~Derived() { cout << "Derived class destructor called." << endl; }
};

int main() {
    unique_ptr<Base> ptr = make_unique<Base> ( Derived(10) );
    return 0;
}