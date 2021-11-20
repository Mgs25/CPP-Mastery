#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Test {
    friend ostream& operator <<(ostream& os, const Test& obj);
    int data;
public:
    Test() : data {0} { cout << "Test default constructor called." << endl; }
    Test(int x) : data {x} { cout << "Test(x) constructor called." << endl; }
    int get_data () const { return data; }
    virtual void get_details() const {
        cout << "In test class" << endl;
        cout << "Data = " << get_data() << endl;
    }
    virtual ~Test() { cout << "Test destructor called." << endl; }
};

class A : public Test {
public:
    A() : Test () { cout << "A default constructor called." << endl; }
    A(int x) : Test(x) { cout << "A(x) constructor called." << endl; }
    void get_details() const override {
        cout << "In A class" << endl;
        cout << "Data = " << get_data() << endl;
    }
    virtual ~A() { cout << "A destructor called." << endl; }
};

class B : public Test {
public:
    B() : Test () { cout << "B default constructor called." << endl; }
    B(int x) : Test(x) { cout << "B(x) constructor called." << endl; }
    void get_details() const override {
        cout << "In B class" << endl;
        cout << "Data = " << get_data() << endl;
    }
    virtual ~B() { cout << "B destructor called." << endl; }
};

int main() {
    Test* ptr = new B(10);
    
    ptr->get_details();
    
    delete ptr;
    return 0;
}