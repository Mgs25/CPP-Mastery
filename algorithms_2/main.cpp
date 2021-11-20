#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
 * common algorithms
 * find
 * count
 * for_each
 * count_if
 * replace
 * all_of
 * any_of
 * transform
*/

int main() {
    //for each algorithm

//    vector<int> v {1, 2, 4, 4, 4, 3, 12, 32, 4};
//    
//    for_each(v.begin(), v.end(), [](const int& x) { cout << x * x << ' '; });
//    cout << endl;
//    
//    int o1 = count(v.begin(), v.end(), 1);
//    cout << o1 << endl;
//    
//    int o2 = count_if(v.begin(), v.end(), [](const int& x) { return x % 2 == 0; });
//    cout << o2 << endl;
//    
//    int o3 = count_if(v.cbegin(), v.cend(), [](const int& x) { return x >= 5; });
//    cout << o3 << endl;
//    
//    replace(v.begin(), v.end(), 4, 8);
//    
//    for (const int& x: v)
//        cout << x << ' ';
//    cout << endl;
//    
//    if (all_of(v.begin(), v.end(), [](const int& x) { return x <= 100; }))
//        cout << "All numbers are smaller than or equal to 100." << endl;
//    else
//        cout << "Not all numbers are smaller than or equal to 100." << endl;
//    
//    vector<string> strings {"Methran", "Gunasekaran", "Sridevi", "Koushik"};
//    
//    if (any_of(strings.begin(), strings.end(), [](const string& s) { return (s.size() >= 10); })) {
//        cout << "YES!" << endl;
//    }
//    else {
//        cout << "NO!" << endl;
//    }
//    
//    vector<int> test {1, 2, 3};
//    vector<int> result (3);
//    
//    transform(test.begin(), test.end(), result.begin(), [](const int& x) { return x * 2; });
//    
//    for (const int& e: result)
//        cout << e << ' ';

    vector<int> a {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int factor {3};
    
    auto count { count_if(a.cbegin(), a.cend(), [factor](const int& x) -> bool { return x % factor == 0; }) };
    cout << count << endl;
    
    return 0;
    // [capture](parameters) -> (return type) { block; }
}

/*
 * using functor
 * struct Square_Functor {
     void operator ()(const int& x) {
         cout << x * x << " ";
     }
    };
 * Square_Functor square;
 
  * Using function pointers
 * void square(const int& x {
     cout << x * x << " ";
    }
 * for_each(begin, end, square);
 */