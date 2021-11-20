#include <iostream>
#include "Base.h"
#include "Derived.h"
using namespace std;

class A {
public:
    int x;
    // Default constructor
    A() : x {0} {
        cout << "Base: No args." << endl;
    }
    // Parameterized constructor
    A(int v) : x {v} {
        cout << "Base: int arg." << endl;
    }
    // Copy constructor
    A(const A& source) : x {source.x} {
        cout << "Base: copy constructor." << endl;
    }
    // Copy assignment operator
    A& operator =(const A& rhs) {
        cout << "Base: Copy assignment operator." << endl;
        if (this != &rhs) {
            x = rhs.x;
        }
        return *this;
    }
    // Destructor
    ~A() {
        cout << "Base: Dtor." << endl;
    }
};

class B : public A {
public:
    int result;
    // Default constructor
    B() : A {}, result {0} {
        cout << "Derived: No args." << endl;
    }
    // Parameterized constructor
    B(int v) : A {v}, result {x * 2} {
        cout << "Derived: int arg." << endl;
    }
    // Copy constructor
    B(const B& source) : A {source}, result {(source.x) * 2} {
        cout << "Derived: copy constructor." << endl;
    }
    // Copy assignment operator
    B& operator =(const B& rhs) {
        cout << "Derived: Copy assignment operator." << endl;
        if (this != &rhs) {
            A::operator =(rhs);
            result = rhs.result;
        }
        return *this;
    }
    // Destructor
    ~B() {
        cout << "Derived: Dtor." << endl;
    }
};

int main() {
    A obj {100};
    B obj1 {200};
    B obj2 {obj1};
    
    return 0;
}