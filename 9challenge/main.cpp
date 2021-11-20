#include <iostream>
#include <string>
using namespace std;

void print(const int *const ptr, const size_t s);
int* apply_all(const int *const aptr, size_t as, const int *const bptr, size_t bs);
               
void print(const int *const ptr, const size_t s) {
    cout << "[ ";
    for (size_t i {0}; i < s; i++)
        cout << *(ptr + i) << ' ';
    cout << "]" << endl;
}

int* apply_all(const int *const aptr, size_t as, const int *const bptr, size_t bs) {
    int* result_ptr {nullptr};
    result_ptr = new int[as * bs];
    
    int position {0};
    for (size_t i {0}; i < bs; i++)
        for (size_t j {0}; j < as; j++)
            *(result_ptr + position++) = *(bptr + i) * *(aptr + j);
    
    return result_ptr;
}

int main () {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    
    
    int *result_ptr = apply_all(array1, array1_size, array2, array2_size);
    
    cout << "Array 1:" << endl;
    print(array1, array1_size);
    
    cout << "Array 2: " << endl;
    print(array2, array2_size);
    
    cout << "Results: " << endl;
    print(result_ptr, array1_size * array2_size);
    
    delete [] result_ptr;
    return 0;
}
