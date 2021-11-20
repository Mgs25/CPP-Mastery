#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_menu();
int get_temp();
char get_choice();
int get_min(const vector<int> &v);
int get_max(const vector<int> &v);
double get_mean(const vector<int> &v);
void print_vector(const vector<int> &v);
void add_to_list(vector<int> &v);
bool found(const vector<int> &v, const int value);
bool not_empty(const vector<int> &v);

void print_menu() {
    cout << "=========================================" << endl;
    cout << "P - Display list" << endl;
    cout << "A - Add item to list" << endl;
    cout << "M - Display mean of the lsit" << endl;
    cout << "S - Display smallest element in the list" << endl;
    cout << "L - Display largest element in the list" << endl;
    cout << "E - Check if element exists in the list" << endl;
    cout << "C - Clear list" << endl;
    cout << "Q - Quit" << endl;
}

char get_choice() {
    char c {};
    cout << "Enter your choice: ";
    cin >> c;
    return c;
}

bool not_empty(const vector<int> &v) {
    return (v.size() > 0);
}

int get_min(const vector<int> &v) {
    int m {};
    m = v.at(0);
    for (int i: v)
        m = min(m, i);
    return m;
}

int get_max(const vector<int> &v) {
    int m {};
    m = v.at(0);
    for (int i: v)
        m = max(m, i);
    return m;
}

void print_vector(const vector<int> &v) {
    cout << "[ ";
    for (int i: v)
        cout << i << ' ';
    cout << ']' << endl;
}

int get_temp() {
    int t;
    cout << "Enter value: ";
    cin >> t;
    return t;
}

bool found(const vector<int> &v, const int value) {
    int f {0};
    for (int i: v) {
        if (i == value) {
            f = 1;
            break;
        }
    }
    return (f == 1);
}

void add_to_list(vector<int> &v, const int value) {
    v.push_back(value);
    cout << value << " added." << endl;
}

double get_mean(const vector<int> &v) {
    double total {};
    for (int i: v)
        total += i;
    return total / v.size();
}

int main () {
    vector<int> list {};
    int temp_var {};
    char choice {};
    do {
        //printing menu in function
        print_menu();
        choice = get_choice();
        if (choice == 'p' || choice == 'P') {
            if (not_empty(list))
                print_vector(list);
            else
                cout << "[] - List is empty" << endl;
        }
        else if (choice == 'a' || choice == 'A') {
            add_to_list(list, get_temp());
        }
        else if (choice == 'm' || choice == 'M') {
            if (not_empty(list))
                cout << "Mean of list is " << get_mean(list) << endl;
            else
               cout << "Unable to calculate the mean - No data" << endl; 
        }
        else if (choice == 's' || choice == 'S') {
            if (not_empty(list))
                cout << "The smallest number is " << get_min(list) << endl;
            else
                cout << "Unable to determine the smallest number - List is empty" << endl;
        }
        else if (choice == 'l' || choice == 'L') {
            if (not_empty(list))
                cout << "The largest number is " << get_max(list) << endl;
            else
                cout << "Unable to determine the largest number - List is empty" << endl;
        }
        else if (choice == 'e' || choice == 'E') {
            temp_var = get_temp();
            cout << temp_var << " was" << (found(list, temp_var) ? " " : " not " ) << "found in the list" << endl;
        }
        else if (choice == 'c' || choice == 'C') {
            list.clear();
            cout << "List cleared!" << endl;
        }
        else if (choice == 'q' || choice == 'Q') {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Unknown selection, please try again!" << endl;
        }
    } while (choice != 'q' && choice != 'Q');
    return 0;
}