#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <forward_list>
#include <iterator>
#include <algorithm>

using namespace std;

template <template <typename> typename container, typename T>
void display(const container<T>& l) {
    for_each(l.begin(), l.end(), [](const T& x) { cout << x << ' '; }); cout << endl;
}

struct Person {
    string name;
    unsigned age;
    Person(string name = "Unknown", unsigned age = 0)
        : name {name}, age {age} {}
    friend ostream& operator <<(ostream& os, const Person& rhs) {
        os << '[' << rhs.name << ' ' << rhs.age << ']';
        return os;
    }
};

int main() {
    list<int> l {1, 2, 3, 4, 5, 7};
    
    auto it = find(l.begin(), l.end(), 7);
    
    l.insert(it, 6);
    
    display(l);
    
    cout << "Size: " << l.size() << endl;
    cout << "Max size: " << l.max_size() << endl;
    
    cout << "front: " << l.front() << endl;
    cout << "back: " << l.back() << endl;
    cout << "===================================================" << endl;
    
    list<int> l2 {10, 20, 30};
    
    cout << "Pushing elements." << endl;
    l2.push_front(0);
    display(l2);
    
    l2.push_back(40);
    display(l2);
    cout << "Popping elements." << endl;
    l2.pop_front();
    display(l2);
    
    l2.pop_back();
    display(l2);
    
    //emplace_front, emplace_back is also available
    
    cout << "===================================================" << endl;
    list<int> l3 {1, 2, 3, 4, 6};
    auto it1 = find(l3.begin(), l3.end(), 6);
    l3.insert(it1, 5); 
    
    display(l3);
    
    l3.erase(it1);
    display(l3);
    
    l3.resize(10);
    display(l3);
    
    l3.resize(2);
    display(l3);
    
    
    cout << "==================================================" << endl;
    cout << "FORWARD LIST" << endl;
    
    //only front, no back.
    
    forward_list<int> fl {1, 2, 3, 4};
    cout << fl.front() << endl;
    display(fl);
    
    auto iter = find(fl.begin(), fl.end(), 3);
    fl.insert_after(iter, 10);
    
    display(fl);
    
    cout << "==================================================" << endl;
    forward_list<Person> pl;
    pl.resize(5);
    display(pl);
    
    cout << "==================================================" << endl;
    cout << "advance function" << endl;
    list<int> adv {1, 2, 3, 4, 5};
    
    list<int>::iterator list_it = adv.begin();
    display(adv);
    cout << *list_it << endl;
    cout << "Advance(2)" << endl;
    advance(list_it, 2);
    cout << *list_it << endl;
    
    return 0;
}