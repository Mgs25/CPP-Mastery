#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

/*
 * set
 * unordered_set
 * multiset
 * unordered_multiset
*/

class Person {
    std::string name;
    unsigned age;
    friend std::ostream& operator <<(std::ostream& os, const Person& rhs) {
        os << '[' << rhs.name << ' ' << rhs.age << ']';
        return os;
    }
public:
    Person(std::string name = "Unknown", unsigned age = -1)
        : name {name}, age {age} {}
    bool operator ==(const Person& rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
    bool operator <(const Person& rhs) const {
        return (this->age < rhs.age);
    }
    ~Person() = default;
};

template <typename T>
void display(const std::set<T>& s) {
    for_each(s.begin(), s.end(), [](const T& x) { std::cout << x << ' '; }); std::cout << std::endl;
}

int main() {
    std::set<int> s2 {1, 2, 3};
    display(s2);
    
    auto r = s2.insert(4);
    std::cout << "Insert 4: " << r.second << std::endl;
    
    r = s2.insert(4);
    std::cout << "Insert 4: " << r.second << std::endl;
    
    display(s2);
    
    std::set<int> s3 {1, 2, 3, 4};
    auto it = s3.find(3);
    
    if (it != s3.end())
        std::cout << "element found in the set!" << std::endl;
    else
        std::cout << "element not found in set!" << std::endl;
    
    std::cout << "===============================================" << std::endl;
    
    std::set<Person> s1;
    
    s1.emplace("A", 18);
    s1.emplace("B", 15);
    s1.emplace("C", 45);
    s1.emplace("D", 49);
    
    display(s1);
    
    return 0;
}