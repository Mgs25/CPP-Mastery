#include <iostream>
#include <numeric>
#include <array>
#include <algorithm>

using namespace std;

int main() {
//    auto display = [](const int& x) { cout << x << ' '; };
//    array<int, 3> arr {1, 2, 3};
//    
//    cout << "size = " << arr.size() << endl;
//    cout << ".at(0) = " << arr.at(0) << endl;
//    cout << ".front() = " << arr.front() << endl; //front
//    cout << ".back() = " << arr.back() << endl; //back
//    
//    arr.front() = 10;
//
//    for_each(arr.begin(), arr.end(), display);
//    cout << endl;
//    
//    cout << "is empty? " << arr.empty() << endl; //empty
//    
//    arr.fill(10); //fill
//    for_each(arr.begin(), arr.end(), display);
//    cout << endl;
//    
//    cout << "Max size: " << arr.max_size() << endl; //max size
    
    //swap
//    array<int, 2> a {1, 2};
//    array<int, 2> b {3, 4};
//    
//    a.swap(b);
//    
//    cout << "A: " << endl;
//    for_each(a.begin(), a.end(), display);
//    cout << endl;
//    
//    cout << "B: " << endl; 
//    for_each(b.begin(), b.end(), display);
//    cout << endl;

        //pointer access
//    int* ptr {nullptr};
//    
//    ptr = a.data();
//    
//    cout << "Pointer access: " << *(ptr + 1) << endl;
    
    
        // sort
//    array<int, 5> c {6, 1, 34, 23, 9};
//    sort(c.begin(), c.end());
//    
//    for_each(c.begin(), c.end(), display);
//    cout << endl;


        // min max
//    array<int, 5> nums {-1, 54, 123, 1, 90};
//    
//    auto min_num = min_element(nums.begin(), nums.end());
//    cout << "Minimum element: " << *min_num << endl;
//    
//    auto max_num = max_element(nums.begin(), nums.end());
//    cout << "Maximum element: " << *max_num << endl;

    //adjacent_find
//     array<int, 5> a;
//     
//     a = {4, 1, 5, 10, 10};
//     
//     auto f = adjacent_find(a.begin(), a.end());
//     
//     cout << distance(a.begin(), f) << endl;

    //accumulate
//    int s {0};
//    array<int, 5> arr;
//    arr = {1, 2, 3, 4, 5};
//    
//    s = accumulate(arr.begin(), arr.end(), 0);
//    
//    cout << s << endl;

    //count
//    array<int, 10> arr;
//    arr = {1, 2, 3, 4, 6, 6, 7, 8, 6, 10};
//    
//    int c = count(arr.begin(), arr.end(), 6);
//    cout << c << endl;

    //count_if
    array<int, 5> arr {120, 210, 560, 70, 20};
    
    int result = count_if(arr.begin(), arr.end(), 
                            [](const int& x) -> bool { return x >= 20 && x <= 200; });
    
    cout << result << endl;

    return 0;
}