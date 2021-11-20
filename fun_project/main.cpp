// Decision maker
#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    
    time_t dynamic_time { time(0) };
    time_t initial_time = dynamic_time;
    
    int rem_time {};
    cout << "Set alaram timer from now (in seconds): ";
    cin >> rem_time;
    
    while (initial_time + (rem_time + 1) != dynamic_time) {
        cout << dynamic_time % 60 << endl;
        dynamic_time = time(0);
    }
    
    return 0;
}