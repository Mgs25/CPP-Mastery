#include <iostream>
#include <string>
#include <vector>
using namespace std;

void double_data(int* int_ptr);
void display(const vector<string> *const v);
void display(const int *arr_ptr, const int sentinel);
int* largest(int *a, int *b);
int* create_array(const size_t size, const int init_value);

int main() {
    /********************************
    * Pointers
    ********************************/
//    int *intptr {nullptr};
//    char *charptr {nullptr};
//    string *strptr {nullptr};
//    vector<int> *vecptr {nullptr};
//    
//    cout << sizeof intptr << endl;
//    cout << sizeof charptr << endl;
//    cout << sizeof strptr << endl;
//    cout << sizeof vecptr << endl;
//    
//    //size of pointers is always fixed
//    //size of the object differs
//
//    int score {100}; //stored in an address
//    int *score_ptr {&score}; //pointing to the address of score
//    
//    cout << "Value of score: " << score << endl;
//    cout << "Address of score: " << &score << endl;
//    cout << "Value of score_ptr: " << score_ptr << endl;
//    cout << "Dereferencing score_ptr: " << *score_ptr << endl;
//    
//    *score_ptr = 200;
//    cout << "Value of score after modification: " << score << endl;
//
//    double high_temp {100.76};
//    double low_temp {29.56};
//    
//    double *temp_ptr {&high_temp};
//    
//    cout << *temp_ptr << endl;
//    temp_ptr = &low_temp;
//    cout << *temp_ptr << endl;
//    
//    string name {"Methran"};
//    string *str_ptr {&name};
//    
//    cout << *str_ptr << endl;
//    name = "Koushik";
//    cout << *str_ptr << endl;
//    
//    int data {100};
//    int *data_ptr {&data};
//    
//    cout << *data_ptr << endl;
//    data = 1000;
//    cout << *data_ptr << endl;
    
//    int a {10}, b {20}, c {30};
//    vector<int*> pointers {&a, &b, &c}; //pointers vector holds three address which points to integers
//    vector<int*> *vectorptr {&pointers}; //vectorptr holds the address of pointers vector
//    
//    cout << *((*vectorptr).at(1)) << endl;
//    
//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    vector<string> *stooges_ptr {&stooges};
//    
//    for (auto v: *stooges_ptr)
//        cout << v << ' ';

    //COMPLEX POINTERS
    
//    int var {10};
//    
//    int *p1 {&var};
//    int* *p2 {&p1};
//    int** *p3 {&p2};
//        
//    cout << *(*(*p3)) << endl;    
//    //same behaviour can be observed with a different style
//    int *x1 {&var};
//    int* *x2 {&x1};
//    int** *x3 {&x2};
//    int*** *x4 {&x3};
//    int**** *x5 {&x4};
//    int***** *x6 {&x5};
//    int****** *x7 {&x6};
//    int******* *x8 {&x7};
//    int******** *x9 {&x8};
//    int********* *x10 {&x9};
//    
//    cout << *(*(*(*(*(*(*(*(*(*x10))))))))) << endl;

    //dynamic memory allocation
    
//    int *p {nullptr};
    //new keyword allocates memory for the specified datatype in the heap
    //and returns the address of that storage
    //we should deallocate the space after usage using delete keyword
//    p = new int {10}; 
//    cout << *p << endl;
//    delete p;
    
    //array using dynamic memory allocation
    
//    int *array_ptr {nullptr};
//    size_t size {};
//    
//    cout << "Enter size to allocate memory: ";
//    cin >> size;
//    
//    array_ptr = new int[size];
//    
//    for (size_t i {0}; i < size; i++)
//        array_ptr[i] = ((i + 1) * 2); //using [] syntax
//        //*(array_ptr + i) = i + 1; //using pointer arithmetic
//    
//    for (size_t i {0}; i < size; i++)
//        cout << array_ptr[i] << endl;
//        //cout << *(array_ptr + i) << endl;
//    
//    delete [] array_ptr;

//    int data[] {120, 140, 160, 180};
//    
//    cout << "Printing address of the first element using array name: " << data << endl;
//    cout << "Dereferencing array name (points to the first element: " << *data << endl;
//    cout << endl;
//    
//    int *ptr {data};
//    
//    cout << "Printing address of the first element using an integer pointer: " << ptr << endl;
//    cout << "Dereferencing the pointer to an interger: " << ptr[0] << endl;
//    cout << endl;
//    
//    int x {10};
//    int *p {&x};
    
    //methods of accessing data in memory
    //using array subscript operator []
    //using array offset operator *(pointer + offset)

    //My implementation for dynamic allocation of arrays of arrays
    
//    int** array_ptr {nullptr};
//    size_t size {};
//    
//    cout << "Enter number of pointer arrays: ";
//    cin >> size;
//    
//    array_ptr = new int*[size];
//    
//    for (size_t i {0}; i < size; i++) {
//        size_t subarray_size {};
//        cout << "Enter size of array " << i + 1 << ": ";
//        cin >> subarray_size;
//        array_ptr[i] = new int[subarray_size];
//        cout << "Enter subarray elements: ";
//        for (size_t j {0}; j < subarray_size; j++) {
//            *(array_ptr[i] + j) = ((j + 1) * 2) * (i + 1);
//            cout << *(array_ptr[i] + j) << ' ';
//        }
//        cout << endl;
//    }
//    
//    delete [] array_ptr;

    //const and pointers
    
//    const int const_integer {100};
//    int nconst_integer {200};
//    
//    int *nconst_ptr {&nconst_integer};
//    cout << *nconst_ptr << endl; //200 non const pointer pointing to non const integer
//    
//    const int *nconst_ptr_const {&const_integer};
//    cout << *nconst_ptr_const << endl;
//    //can change the value of the pointer
//    //but not the value of the data that it's pointing to
//    //*nconst_ptr_const = 200; //illegal
//    
//    const int *const const_ptr_const {&const_integer};
//    cout << *nconst_ptr_const << endl;

    int a {10};
    cout << a << endl;
    double_data(&a);
    cout << a << endl;
    
    int *p {nullptr};
    p = &a;
    
    double_data(p);
    cout << a << endl;
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    
    int data[] {10, 20, 30, 40, 50, 78, 9, -1};
    display(data, -1);
    
    int x {-12}, y {19};

    cout << *(largest(&x, &y)) << endl;
    
    int *res_ptr {nullptr};
    size_t size {};
    int init_value {};
    
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter value to initialize: ";
    cin >> init_value;
    
    res_ptr = create_array(size, init_value);
    for (size_t i {0}; i < size; i++)
        cout << *(res_ptr + i) << ' ';
    cout << endl;
    
    delete [] res_ptr;
    
    return 0;
}

void double_data(int* int_ptr) {
    *int_ptr *= 2;
}

void display(const vector<string> *const v) {
    for (auto i: *v)
        cout << i << ' ';
    cout << endl;
}

void display(const int *arr_ptr,const int sentinel) {
    while (*arr_ptr != sentinel)
        cout << *arr_ptr++ << ' ';
    cout << endl;
}

int* largest(int *a, int *b) {
    if (*a > *b)
        return a;
    return b;
}

int* create_array(const size_t size, const int init_value = 0) {
    int *arr_ptr {nullptr};
    arr_ptr = new int[size];
    for (size_t i {0}; i < size; i++)
        *(arr_ptr + i) = init_value;
    return arr_ptr;
}