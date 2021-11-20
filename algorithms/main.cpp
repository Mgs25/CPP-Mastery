#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Item {
    string name;
    int id;
    bool operator ==(const Item& rhs) {
        return (id == rhs.id);
    }
};

int main() {
    //find
    vector<int> v1 {1, 2, 3};
    auto it = find(v1.begin(), v1.end(), 2);
    
    if (it != v1.end()) {
        cout << *it << endl;
    }
    else {
        cout << "Element not found!" << endl;
    }

    Item search {"Item_A", 10};
    
    vector<Item> v2 {Item {"A", 20}, Item {"B", 30}, Item {"C", 10}, Item {"D", 100}};
    
    auto loc = find(v2.begin(), v2.end(), search);
    
    if (loc != v2.end()) {
        cout << "NAME: " << (*loc).name << endl;
        cout << "ID: " << (*loc).id << endl;
    }
    else {
        cout << "Not found!" << endl;
    }
    
    return 0;
}