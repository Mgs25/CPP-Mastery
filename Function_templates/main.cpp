#include <iostream>
#include <vector>
#include <string>

template <typename T>
T min(const T& a,const T& b) {
    return (a > b ? b : a);
}

template <typename T1, typename T2>
void func(const T1& a, const T2& b) {
    std::cout << a << ' ' << b << std::endl;
}

template <typename T>
void my_swap(T* const a, T* const b) {
    const T temp {*a};
    *a = *b;
    *b = temp;
}

class Person {
public:
    Person(std::string name_val = "", int age_val = 0)
        : name {name_val}, age {age_val} {}
    bool operator >(const Person& rhs) const {
        if (this->age > rhs.age)
            return true;
        else
            return false;
    }
private:
    friend std::ostream& operator <<(std::ostream& os, const Person& rhs);
    std::string name;
    int age;
};

std::ostream& operator <<(std::ostream& os, const Person& rhs) {
    os << rhs.name;
    return os;
}

int main() {
    Person p1 {"A", 18};
    Person p2 {"B", 15};
    
    Person p3 = min<Person>(p1, p2);

    std::cout << p3 << " is younger." << std::endl;

    int a {20}, b {30};
    
    std::cout << min<int>(a, b) << std::endl;
    std::cout << min<char>('a', 'x') << std::endl;
    std::cout << min<std::string>("This is a string", "Another string") << std::endl;
    std::cout << min(5 * 5, 12 * 9) << std::endl;

    func(p1, p2);

    int x {10}, y {20};
    
    std::cout << x << ' ' << y << std::endl;
    my_swap(&x, &y);
    std::cout << x << ' ' << y << std::endl;
    
    return 0;
}