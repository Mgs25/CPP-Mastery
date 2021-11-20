#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T, size_t N>
class Array {
    size_t size {N};
    T data [N];
    
    friend ostream& operator <<(ostream& os, const Array<T, N>& obj) {
        cout << "[ ";
        for (const T& e: obj.data)
            cout << e << ' ';
        cout << ']' << endl;
        return os;
    }
public:
    Array() = default;
    
    Array(T init_value) {
        for (T& e: data)
            e = init_value;
    }
    
    void fill(T val) {
        for (T& e: data)
            e = val;
    } 
    
    size_t get_size() const {
        return size;
    }
    
    T& operator [](const size_t index) {
        return data[index];
    }
    
    ~Array() = default;
};

int main() {
    
    Array<string, 5> strings {"Methran"};
    
    cout << strings << endl;
    
    strings[0] = string {"WOW"};
    
    cout << strings << endl;
    
    return 0;
}