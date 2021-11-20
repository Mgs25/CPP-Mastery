#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> a = make_shared<int>(120);
    
    shared_ptr<int> b = a;
    shared_ptr<int> c = a;
    shared_ptr<int> d = a;
    
    vector<shared_ptr<int>> vec {a, b, c, d};
    
    for (auto const& item : vec)
        cout << *item << ' ';
        
    cout << a.use_count() << endl;
    
    return 0;
}