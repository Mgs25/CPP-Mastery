//Macros in C++

#include <iostream>
#include <vector>
#include <string>
#define SQUARE(a) ((a) * (a))
using namespace std;

int main() {
    int result = SQUARE(5);
    cout << result / SQUARE(2);
    return 0;
}