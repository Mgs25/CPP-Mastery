#include <iostream>
using namespace std;

class Test{
public:
    static int data;
    static void set_data(const int& d) {
        data = d;
    }
};

int main() {
    cout << Test;
    return 0;
}