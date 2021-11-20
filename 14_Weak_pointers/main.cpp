#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class B;

class A {
private:
    shared_ptr<B> b_ptr;
public:
    A() { cout << "A constructor called." << endl; }
    void set_b(shared_ptr<B>& b) {
        b_ptr = b;
    }
    int get_count() {
        return b_ptr.use_count();
    }
    ~A() { cout << "A destructor called." << endl; }
};

class B {
private:
    weak_ptr<A> a_ptr; // weak pointer breaks the cyclic reference
public:
    B() { cout << "B constructor called." << endl; }
    void set_a(shared_ptr<A>& a) {
        a_ptr = a;
    }
    int get_count() {
        return a_ptr.use_count();
    }
    ~B() { cout << "B destructor called." << endl; }
};

int main() {
    shared_ptr<A> p1 = make_shared<A>();
    shared_ptr<B> p2 = make_shared<B>();
    
    p1->set_b(p2);
    p2->set_a(p1);
    
    cout << p1->get_count();
    cout << p2->get_count();
    
    return 0;
}