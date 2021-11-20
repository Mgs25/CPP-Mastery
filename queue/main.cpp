#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

template <typename T>
void display(queue<T> q) {
    cout << "Front -> ";
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << "<- Rear" << endl;
}

int main() {
    queue<int> q;
    
    for (int i: {1, 2, 3, 4, 5}) {
        q.push(i * 10);
        display(q);
        cout << "Front: " << q.front() << endl;
        cout << "Back: " << q.back() << endl << endl;
    }
    
    while (!q.empty()) {
        q.pop();
        display(q);
        cout << "Front: " << q.front() << endl;
        cout << "Back: " << q.back() << endl << endl;
    }
    
    return 0;
}