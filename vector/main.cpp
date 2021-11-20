#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
void display(const vector<T>& vec) {
    cout << "[ ";
    for_each(vec.begin(), vec.end(), [](const T& x) { cout << x << ' '; });
    cout << ']' << endl;
}

struct Person {
    string name;
    unsigned age;
    
    Person(string name = "", unsigned age = 0) : name {name}, age {age} { cout << "Overloaded ctor." << endl; }
    Person(const Person& rhs) : name {rhs.name}, age {rhs.age}          { cout << "Copy       ctor." << endl; }
    Person(Person&& rhs) : name {move(rhs.name)}, age {move(rhs.age)}   { cout << "Move       ctor." << endl; }
    ~Person()                                                           { cout << "Default    dtor." << endl; }
    
    Person& operator =(const Person& rhs) {
        cout << "Copy assignment operator." << endl;
        if (this != &rhs) {
            name = rhs.name;
            age = rhs.age;            
        }
        return *this;
    }
    
    Person& operator =(Person&& rhs) {
        cout << "Move assignment operator." << endl;
        if (this != &rhs)  {
            name = move(rhs.name);
            age = move(rhs.age);
        }
        return *this;
    }
};

ostream&operator <<(ostream& os, const Person rhs) {
    os << '[' << rhs.name << ' ' << rhs.age << ']';
    return os;
}

int main() {
//    vector<int> vec {1, 2, 3};
//    
//    cout << "Front - " << vec.front() << endl;
//    cout << "Back - " << vec.back() << endl;
//    
//    cout << "Adding element at the back of the vector: ";
//    vec.push_back(4);
//    display(vec);
//    
//    vector<string> vec1 (5, "A"); //overloaded constructor initialization
//    display(vec1);
//    
//    //some basic methods
//    
//    cout << "Size = " << vec.size() << endl;
//    cout << "Capacity = " << vec.capacity() << endl;
//    cout << "Max size = " << vec.max_size() << endl;
//    
//    vector<Person> p_vec;
//    
//    p_vec.push_back(Person {"A", 18});
//    p_vec.push_back(Person {"B", 15});
//
//    display(p_vec);
//    p_vec.pop_back();
//    display(p_vec);
//    
//    //emplace_back constructs the object in the vector location itself (avoids moving of data)
//    
//    p_vec.emplace_back("M", 12);
    
    vector<Person> p;
    
//    p.push_back(Person {"A", 19});

//    p.emplace_back("A", 18);

    //insert elemet at specific position
//    vector<int> vec1 {1, 2, 3, 4, 5};
    vector<int> vec2 {10, 20, 30, 40, 50};
//    
//    auto it = find(vec1.begin(), vec1.end(), 3);
//    
//    display(vec1);
//    vec1.insert(it, 20);
//    display(vec1);
//    
//    auto it = find(vec2.begin(), vec2.end(), 500);
//    
//    display(vec2);
//    vec2.insert(it, 100);
//    display(vec2);

//    vector<int> v1 {1, 2, 6, 7, 8};
//    vector<int> v2 {3, 4, 5};
//    
//    auto it = find(v1.begin(), v1.end(), 2);
//    
//    display(v1);
//    v1.insert(it + 1, v2.begin(), v2.end());
//    display(v1);
    
    //shrink_to_fit
    
//    vector<int> v {1, 2, 3};
//    
//    cout << "v.capacity() when 3 elements : " << v.capacity() << endl;
//    v.push_back(4);
//    cout << "v.capacity() after 4 elements : " << v.capacity() << endl;
//    cout << "Shrink!" << endl;
//    v.shrink_to_fit();
//    cout << "v.capacity() after shrink : " << v.capacity() << endl;
    
//    vector<int> a {1, 2, 3};
//    vector<int> b {10, 20};
//    
//    display(a);
//    display(b);
    
    //b.insert(b.end(), a.begin(), a.end());
    //copy(a.begin(), a.end(), back_inserter(b));
//    
//    display(a);
//    display(b);

//    vector<int> a {1, 2, 3, 4, 5};
//    vector<int> b {6, 7, 8, 9, 10};
//    vector<int> result;
//    
//    
//    copy_if(a.begin(), a.end(), back_inserter(result), [](const int& x) { return x % 2 == 0; });
//    copy_if(b.begin(), b.end(), back_inserter(result), [](const int& x) { return x % 2 == 0; });
//
//    display(result);

    vector<int> a {1, 2, 3, 4, 5};
    vector<int> b {10, 20, 30, 40, 50};
    vector<int> result;
    
    transform(a.begin(), a.end(), b.begin(), back_inserter(result),
                [](const int& a, const int& b) { return a * b; });
    
    display(result);

    return 0;
}