#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Item {
public:
    Item(T1 arg_1, T2 arg_2) : a {arg_1}, b {arg_2} {}
    T1 get_a() const { return a; }
    T2 get_b() const { return b; }
    ~Item() = default;
private:
    T1 a;
    T2 b;
};

template <typename T1, typename T2>
struct My_pair {
    T1 first;
    T2 second;
};

int main() {
    Item a {'C', "Wow this is so good!"};
    cout << a.get_a() << endl;
    cout << a.get_b() << endl;
    
    My_pair<int, double> p {12, 56.34};
    
    cout << p.first << endl;
    cout << p.second << endl;
    
    return 0;
}