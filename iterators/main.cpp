#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
//    vector<int> vec {1, 2, 3};
//    
//    vector<int>::iterator it = vec.begin();
//    
//    while (it != vec.end()) {
//        cout << *it << endl;
//        ++it;
//    }
//    
//    for (auto it_l = vec.begin(); it_l != vec.end(); ++it_l) {
//        cout << *it_l << ' ';
//    }
//    
//    for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
//        cout << *it << ' ';
//    }
//    cout << endl;
//    
//    map<string, string> m {
//        {"A", "C++"},
//        {"B", "Python"}
//    };
//    
//    for (auto it = m.cbegin(); it != m.cend(); it++) {
//        cout << it->first << " : " << it->second << endl;
//    }

    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (auto it = vec.begin() + 2; it != vec.end() - 2; ++it)
        cout << *it << endl;
    
    return 0;
}