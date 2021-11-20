#include <iostream>
#include <cstring>

using namespace std;

class Mystring {
    friend Mystring operator +(const Mystring& lhs, const Mystring& rhs); // global overload function
    friend bool operator ==(const Mystring& lhs, const Mystring& rhs); //equality
    friend std::ostream& operator <<(std::ostream& os, const Mystring& obj); //insertion operator overload
    friend std::istream& operator >>(std::istream& is, Mystring& obj);
private:
    char* _string;
public:
    Mystring();
    Mystring(const char* string);
    Mystring(const Mystring& source);
    Mystring(Mystring&& source);
    ~Mystring();
    
    Mystring& operator =(const Mystring& rhs);
    Mystring& operator =(Mystring&& rhs);
    
    const char* get_string() const;
};

// Constructors

Mystring::Mystring() : _string {nullptr} {
    _string = new char[1];
    *_string = '\0';
}

Mystring::Mystring(const Mystring& source) {
    _string = new char[strlen(source._string) + 1];
    strcpy(_string, source._string);
}

Mystring::Mystring(Mystring&& source) {
    cout << "Move" << endl;
    _string = new char[strlen(source._string) + 1];
    _string = source._string;
    source._string = nullptr;
}

Mystring::Mystring(const char* string) {
    _string = new char[strlen(string)];
    strcpy(_string, string);
}

// Destructor
Mystring::~Mystring() {}

// Methods

const char* Mystring::get_string() const {
    return _string;
}

// Member function overloading

Mystring& Mystring::operator =(const Mystring& rhs) {
    if (this == &rhs)
        return *this;
        
    delete [] this->_string;
    this->_string = new char[strlen(rhs._string) + 1];
    strcpy(this->_string, rhs._string);
    
    return *this;
}

Mystring& Mystring::operator =(Mystring&& rhs) {
    delete [] this->_string;
    _string = rhs._string;
    rhs._string = nullptr;
    
    return *this;
}

// Global operator overloading

Mystring operator +(const Mystring& lhs, const Mystring& rhs) {
    size_t buffer_size {};
    buffer_size = strlen(lhs._string) + strlen(rhs._string) + 1;
    
    char* buffer = new char[buffer_size];
    
    strcpy(buffer, lhs._string);
    strcat(buffer, rhs._string);
    
    Mystring temp {buffer};
    delete [] buffer;
    
    return temp;
}

bool operator ==(const Mystring& lhs, const Mystring& rhs) {
    return (strcmp(lhs._string, rhs._string) == 0);
}

std::ostream& operator <<(std::ostream& os, const Mystring& obj) {
    os << obj._string;
    return os;
}

std::istream& operator >>(std::istream& is, Mystring& obj) {
    char* buffer = new char [1000];
    is >> buffer;
    
    obj = Mystring {buffer};
    
    delete [] buffer;
    return is;
}

int main() {
    Mystring a = "Sample";
    Mystring b {Mystring {"WOW"}};
    cout << a;
    
    return 0;
}