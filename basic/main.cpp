#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

void display(const vector<int>& v) {
    for (auto& i: v)
        cout << i << ' ';
    cout << endl;
}

int main() {
    vector<int> v {1, 5, 3};
    sort(v.begin(), v.end());
    display(v);
    
    reverse(v.begin(), v.end());
    display(v);
    
    int sum {};
    vector<int> v1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    sum = accumulate(v1.begin(), v1.end(), 0);
    cout << sum << endl;
    
    return 0;
}