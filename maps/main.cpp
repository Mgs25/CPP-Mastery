#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <map>
#include <unordered_map>

/*
 * map
 * unordered_map
 * multimap
 * unordered_multimap
*/

using namespace std;

template <typename T1, typename T2>
void display(const map<T1, T2>& m) {
    for_each (m.begin(), m.end(),
        [](const pair<T1, T2>& p) { cout << setw(10) << left << p.first << ' ' << p.second << endl; }
    );
}

int main() {
    cout << boolalpha;
    map<string, unsigned long long int> m1 {
        {"B", 6382650328},
        {"C", 9600270199},
        {"D",  9566619955}
    };
    
    pair<map<string, unsigned long long int>::iterator, bool> res;
    
    res = m1.insert(make_pair<string, unsigned long long int> ("Unknown", (unsigned long long int)9842534320));
    
    display(m1);
    
    cout << "Checking insertion: ";
    cout << (*(res.first)).first << endl;
    cout << (*(res.first)).second << endl;
    cout << res.second << endl;
    
//    cout << "====================Second insertion=======================" << endl;
//    
//    res = m1.insert(make_pair<string, unsigned long long int> ("Unknown", (unsigned long long int)9842534320));
//    
//    display(m1);
//    
//    cout << "Checking insertion: ";
//    cout << (*(res.first)).first << endl;
//    cout << (*(res.first)).second << endl;
//    cout << res.second << endl;

    //simple insertion
    
    cout << "SIMPLE INSERTION" << endl;
    
    m1["A"] = 9999999999;
    display(m1);

    cout << "m1.erase(\"A\")" << endl;
    m1.erase("A");
    display(m1);
    
    cout << "m1.count(\"B\")" << endl;
    cout << m1.count("B") << endl;
    display(m1);

    cout << "m1.empty(): " << m1.empty() << endl;
    
    m1.emplace("Emplace", 8055);
    display(m1);

    return 0;
}