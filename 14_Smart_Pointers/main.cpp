#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Test {
    int data;
public:
    Test() : data {0} { cout << "Test default Ctor called." << endl; }
    Test(int d) : data {d} { cout << "Test(x) Ctor called." << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor called." << endl; }
};

int main() {
    unique_ptr<Test> p1 = make_unique<Test>(10);
    unique_ptr<Test> p2 = make_unique<Test>(10);
    
    cout << p1->get_data() << endl;
    cout << p2->get_data() << endl;
    
    unique_ptr<Test> p3;
    
    p3 = move(p1);
    
    cout << p3->get_data() << endl;
    
    if (p1 == nullptr)
        cout << "P1 is nullptr" << endl;
    
    return 0;
}