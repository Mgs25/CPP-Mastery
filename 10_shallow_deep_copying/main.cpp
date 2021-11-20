#include <iostream>
#include <vector>
using namespace std;

class Shallow {
    int *_data;
public:
    Shallow() : _data {new int {0}} {}
    Shallow(const Shallow &source) : _data {source._data} {}
    
    void set_data(int d) {*_data = d;}
    int get_data() {return *_data;}
    ~Shallow() {delete _data;}
};

class Deep {
    int *_data;
public:
    Deep() : _data {new int(0)} {}    
    Deep(const Deep &source) : Deep() {*_data = *source._data;}
    Deep(Deep &&source) : _data {source._data} {source._data = nullptr;}
    
    void set_data(int d) {*_data = d;}
    int get_data() {return *_data;}

    ~Deep() {delete _data;}
};

class Move {
    int *_data;
public:
    Move(int d) {_data = new int; *_data = d;}
    Move(Move &&source) : _data {source._data} {
        source._data = nullptr;
    }
    ~Move() {
        if (_data != nullptr)
            cout << "Destructor called for " << *_data << endl;
        else
            cout << "Destructor called for nullptr" << endl;
        delete _data;
    }
};

int main() {
    vector<Move> vec {};
    vec.push_back(Move(10));
    vec.push_back(Move(20));
    

//    Deep obj1;
//    obj1.set_data(19);
//    
//    Deep obj2 {obj1};
//    obj2.set_data(99);
//    
//    cout << obj1.get_data() << endl;
//    cout << obj2.get_data() << endl;
//    
//    
//    cout << endl;
//
//    Shallow obj3;
//    obj3.set_data(22);
//    cout << obj3.get_data() << endl;
//    
//    Shallow obj4 {obj3};
//    obj4.set_data(99);
//    cout << "Obj3 " << obj3.get_data() << endl;
//    cout << "Obj4 " << obj4.get_data() << endl;
    return 0;
}