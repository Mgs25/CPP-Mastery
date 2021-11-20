#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class Open_Shape : public Shape {
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape {
public:
    virtual ~Closed_Shape() {}
};

class Line : public Open_Shape {
public:
    void draw() override {
        cout << "Drawing line." << endl;
    }
    void rotate() override {
        cout << "Rotating line." << endl;
    }
    ~Line() {}
};

class Circle : public Closed_Shape {
public:
    void draw() override {
        cout << "Drawing circle." << endl;
    }
    void rotate() override {
        cout << "Rotating circle." << endl;
    }
    virtual ~Circle() {}
};

class Square : public Closed_Shape {
public:
    void draw() override {
        cout << "Drawing square." << endl;
    }
    void rotate() override {
        cout << "Rotating square." << endl;
    }
    virtual ~Square() {}
};

int main() {
    Shape* cr = new Circle;
    Shape* sq = new Square;
    Shape* ln = new Line;
    
    vector<Shape*> shapes_vector {cr, sq, ln};
    
    for (const auto ptr : shapes_vector) {
        ptr->draw();
        ptr->rotate();
    }
    
    delete cr;
    delete sq;
    
    return 0;
}