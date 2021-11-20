// manage vector of shared pointers to test using unique pointer
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Test;
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>>& vec, const size_t data_size);
void display(const vector<shared_ptr<Test>>& vec);

class Test {
    int data;
public:
    Test(int x = 0) : data {x} {}
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor called." << endl; }
};

unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>& vec, const size_t data_size) {
    int T;
    for (size_t i {0}; i < data_size; ++i) {
        cout << "Enter data for data point [" << i + 1 << "]: ";
        cin >> T;
        vec.push_back(make_shared<Test>(T));
    }
}

void display(const vector<shared_ptr<Test>>& vec) {
    for (const auto& item: vec)
        cout << item->get_data() << endl;
}

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    
    vec_ptr = make();
    
    size_t n {};
    
    cout << "Enter number of data points: ";
    cin >> n;
    
    fill(*vec_ptr, n);
    
    cout << "========= VECTOR DISPLAY ===========" << endl;
    display(*vec_ptr);
    cout << "====================================" << endl;
    return 0;
}