#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person {
    string name;
    unsigned age;
};

void display_details(const Person& structure) {
    cout << "Name: " << structure.name << endl;
    cout << "Age: " << structure.age << endl;
}

int main() {
    Person A   {"A", 18};
    Person B   {"B", 15};
    Person C  {"C", 14};
    Person D {"D", 12};
    
    display_details(A);
    cout << endl;
    display_details(B);
    cout << endl;
    display_details(C);
    cout << endl;
    display_details(D);
    cout << endl;
    
    return 0;
}