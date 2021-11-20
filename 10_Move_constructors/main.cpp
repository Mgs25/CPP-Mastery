#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Move {
private:
    int* data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    Move();
    //ctor
    Move(int d);
    //Copy ctor
    Move(const Move& source);
    //Move ctor
    Move(Move&& source);
    //dtor
    ~Move();
};

Move::Move() {
    data = new int;
    cout << "Default constructor called. " << endl;
}

Move::Move(int d) {
    data = new int;
    *data = d;
    cout << "Constructor for " << d << endl;
}

Move::Move(const Move& source)
    : Move {*source.data} {
        cout << "Copy constructor - deep copy for " << *data << endl;
}

Move::Move(Move&& source)
    : data {source.data} {
        source.data = nullptr;
        cout << "Move constructor - moving resource " << *data << endl;
}

Move::~Move() {
    if (data != nullptr)
        cout << "Destructor freeing data for " << *data << endl;
    else
        cout <<  "Destructor freeing data for nullptr" << endl;
    delete data;
}

int main() {
    Move* obj1;
    obj1 = new Move {10};
    cout << obj1->get_data_value() << endl;
    delete obj1;
    return 0;
}