#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i <= 1000; i++) {
        if ((rand() % 100) == 50)
            cout << "Found 50!" << endl;
        else
            cout << "Not 50 :(" << endl;
    }
    return 0;
}