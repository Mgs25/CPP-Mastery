#include <iostream>
#include <vector>
#include <string>

using namespace std;

int* make_array(const int* const a_ptr, const size_t a_size, const int* const b_ptr, const size_t b_size);

int* make_array(const int* const a_ptr, const size_t a_size, const int* const b_ptr, const size_t b_size) {
    int* buffer = new int[a_size * b_size];
    size_t position {0};
    for (size_t i {0}; i < b_size; i++) {
        for (size_t j {0}; j < a_size; j++) {
            buffer[position++] = a_ptr[j] * b_ptr[i];
        }
    }
    return buffer;
}

void print(const int* const ptr, const size_t size) {
    for (size_t i {0}; i < size; i++)
        cout << ptr[i] << ' ';
    cout << endl;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    const int a[] {1, 2, 3, 4, 5};
    const int b[] {10, 20, 30};
    
    auto result = make_array(a, array1_size, b, array2_size);
    
    print(result, array1_size * array2_size);
    
    delete [] result;
    
    return 0;
}