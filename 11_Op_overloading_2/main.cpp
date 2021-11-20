#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Number {
    int _x, _y;
    Number(int x = 0, int y = 0);
    Number& operator =(const Number& rhs);
    Number operator +(const Number& rhs);
    Number operator -(const Number& rhs);
    bool operator ==(const Number& rhs) const;
};

Number::Number(int x, int y)
    : _x {x}, _y {y} {}

Number& Number::operator =(const Number& rhs) {
    if (this == &rhs)
        return *this;
    this->_x = rhs._x;
    this->_y = rhs._y;
    return *this;
}


Number Number::operator +(const Number& rhs) {
    this->_x = this->_x + rhs._x;
    this->_y = this->_y + rhs._y;
    return *this;
}

Number Number::operator -(const Number& rhs) {
    this->_x = this->_x - rhs._x;
    this->_y = this->_y - rhs._y;
    return *this;
}

bool Number::operator ==(const Number& rhs) const {
    if (this->_x == rhs._x && this->_y == rhs._y)
        return true;
    return false;
    return (this->x == rhs._x
}


int main() {
    Number Obj1 {10, 5};
    Number Obj2 {20, 10};
    Number Obj3 {30, 15};
    
    //Number Obj4 = Obj1 + Obj2 + Obj3;
    Number Obj4 = Number {10, 5} + Number {20, 10} + Number {30, 15};
    cout << Obj4._x << ' ' << Obj4._y << endl;
    
    cout << boolalpha;
    Number Obj5 {Obj1};
    cout << (Obj1 == Obj5);
    
    return 0;
}