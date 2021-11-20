#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <string>

using namespace std;

void displayI(const map<string, int>& m) {
    cout << setw(15) << left << "Word" << "Count" << endl;
    cout << setfill('=') << setw(20) << '=' << endl;
    cout << setfill(' ');
    for (const auto& p: m)
        cout << setw(15) << left << p.first << ' ' << setw(4) << right << p.second << endl;
}

void displayII(const map<string, set<int>>& m) {
    cout << setw(15) << left << "Word" << "Occurrences" << endl;
    cout << setfill('=') << setw(100) << '=' << endl;
    cout << setfill(' ');
    for (const auto& p: m) {
        cout << setw(15) << left << p.first << "[ ";
        for (const auto& s: p.second) {
            cout << s << ' ';
        }
        cout << ']' << endl;
    }
}

string clean_string(const string& s) {
    string result {};
    for (size_t i {0}; i < s.size(); i++) {
        if (s[i] != '.' && s[i] != ',' && s[i] != ':' && s[i] != ';')
            result += s[i];
    }
    return result;
}

void test1() {
    ifstream infile {"words.txt", ios::in};
    map<string, int> m1;
    string line;
    string word;
    
    if (!infile) {
        cerr << "Error opening file." << endl;
        exit(0);
    }
    
    while (getline(infile, line)) {
        stringstream ss {line};
        while (ss >> word) {
            word = clean_string(word);
            auto it = m1.find(word);
            it != m1.end() ? (m1[word])++ : m1[word] = 1;
        }
    }
    
    displayI(m1);
    cout << endl;
    
    infile.close();
}

void test2() {
    ifstream infile {"words.txt", ios::in};
    map<string, int> m1;
    string line;
    string word;
    
    map<string, set<int>> m2;
    int line_number {0};
    
    while (getline(infile, line)) {
        ++line_number;
        stringstream ss {line};
        
        while (ss >> word) {
            word = clean_string(word);
            m2[word].insert(line_number);
        }
    }
    
    displayII(m2);
    
    infile.close();
}

int main() {
    test1();
    test2();
    return 0;
}