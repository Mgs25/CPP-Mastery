#include <iostream>
#include <vector>
#include <string>
#include "mystring.h"

using namespace std;
int main() {
    Mystring first {"Methran"};
    Mystring second {"G"};
    Mystring last {"Methran"};
    Mystring result = first + second;
    
    cout << boolalpha;
    
    cout << (first == second) << endl;
    cout << (first == last) << endl;
    
    result.display();
    
    Mystring test {"ThIs Is A tEsT"};
    test = -test;
    
    test.display();
    
    return 0;
}