#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

template <typename T>
void display(const deque<T>& D) {
    for_each(D.begin(), D.end(), [](const T& x) { cout << x << ' '; }); cout << endl;
}

struct Person {
    string name;
    unsigned age;
    
    Person() = default;
    Person(string name = "None", unsigned age = -1)
        : name {name}, age {age} {}
    Person(const Person& rhs)
        : name {rhs.name}, age {rhs.age} {}
    Person(Person&& rhs)
        : name {move(rhs.name)}, age {move(rhs.age)} {}
    ~Person() = default;
    
    Person& operator =(const Person& rhs) {
        if (this != &rhs) {
            name = rhs.name;
            age = rhs.age;
        }
        return *this;
    }
    
    Person& operator =(Person&& rhs) {
        if (this != &rhs) {
            name = move(rhs.name);
            age = move(rhs.age);
        }
        return *this;
    }
    
    bool operator ==(const Person& rhs) {
        return (name == rhs.name && age == rhs.age);
    }
    
    bool operator <(const Person& rhs) {
        return (age < rhs.age);
    }
};

ostream& operator <<(ostream& os, const Person& rhs) {
    os << '[' << rhs.name << ' ' << rhs.age << ']';
    return os;
}

int main() {
    cout << "================================================" << endl;
    deque<int> d1 {1, 2, 3, 4};
    
    display(d1);
    
    d1.push_front(-1);
    d1.push_back(-1);
    
    display(d1);
    
//     push_front, push_back
//     pop_front, pop_back
//     emplace_front, emplace_back
    
    d1.pop_front();
    d1.pop_back();
    
    display(d1);
    
    cout << "D1 front: " << d1.front() << endl;
    cout << "D1 back : " << d1.back() << endl;
    cout << "D1 size : " << d1.size() << endl;
    
    cout << "================================================" << endl;
    deque<Person> d2;
    
    d2.push_back(Person {"A", 19});
    display(d2);
    
    d2.emplace_back("B", 15);
    display(d2);
    
    d2.emplace_front("C", 45);
    display(d2);
    
    d2.push_front(Person {"D", 48});
    display(d2);
    
    cout << "D2 front: " << d2.front() << endl;
    cout << "D2 back : " << d2.back() << endl;
    cout << "D2 size : " << d2.size() << endl;
    
    cout << "================================================" << endl;
    deque<int> d3 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> result {};
    
    for (const auto& e: d3)
        if (e % 2 == 0)
            result.push_back(e);
        else
            result.push_front(e);
    
    display(result);
    
    cout << "================================================" << endl;
    
    deque<int> d4 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> res2 {};
    
    copy_if(d4.begin(), d4.end(), back_inserter(res2), [](const int& x) { return x % 2 == 0; });
    copy_if(d4.begin(), d4.end(), front_inserter(res2), [](const int& x) { return x % 2 != 0; });
    
    display(res2);
    
    cout << "================================================" << endl;
    cout << "SORT D2" << endl;
    sort(d2.begin(), d2.end());
    display(d2);
    
    return 0;
}