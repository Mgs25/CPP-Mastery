#include <iostream>
#include <vector>
#include <string>

using namespace std;

void func_a();
void func_b();
void func_c();

void func_a() {
    cout << "Func_a started." << endl;
    func_b();
    cout << "Func_a ended." << endl;
}

void func_b() {
    cout << "Func_b started." << endl;
    func_c();
    cout << "Func_b ended." << endl;
}

void func_c() {
    cout << "Func_c started." << endl;
    throw 100;
    cout << "Func_c ended." << endl;
}

int main() {
    cout << "Main started." << endl;
    try {
        func_a();
    }
    catch (...) {
        cout << "Caught error in main." << endl;
    }
    cout << "Main ended." << endl;
    return 0;
}