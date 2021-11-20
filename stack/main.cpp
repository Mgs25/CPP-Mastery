#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

template <typename T>
void display(stack<T> s) {
    cout << "TOP -> [ ";
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << ']' << endl;
}

int main() {
    stack<int> s;
    
    for (int i { 1 }; i <= 10; i++)
        s.push(i * (i + 3 * 7));
    
    while (!s.empty()) {
        display(s);
        s.pop();
    }
    
    display(s);
    cout << "Stack size: " << s.size() << endl;
    
    return 0;
}