#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

//same as queue
//but the top is always the greatest element in the container.

template <typename T>
void display(priority_queue<T, vector<T>, greater<T>> q) {
    cout << "[ ";
    while(!q.empty()) {
        cout << q.top() << ' ';
        q.pop();
    }
    cout << ']' << endl;
}

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int roll_no;
    
    cout << "Enter roll number to insert: ";
    
    do {
        cin >> roll_no;
        pq.push(roll_no);
    } while (roll_no != -1);
    
    display(pq);
    
    return 0;
}