#include <iostream>
#include <cstring>
using namespace std;

class Mystring {
    friend istream& operator>> (istream& is, Mystring& rhs);
    friend ostream& operator<< (ostream& os, const Mystring& rhs);
    char* _string;
public:
    Mystring();
    Mystring(const char* source);
    Mystring(const Mystring& source);
    Mystring(Mystring&& source);
    ~Mystring();
    
    Mystring& operator= (const Mystring& rhs);
    Mystring& operator= (Mystring&& rhs);
    
    Mystring& operator+= (const Mystring& rhs); //
    Mystring& operator*= (const unsigned rhs); //
    Mystring& operator++ ();//
    Mystring operator++ (int);//
    Mystring operator+ (const Mystring& rhs) const; //
    Mystring operator- () const;
    Mystring operator* (unsigned rhs) const; //
    
    bool operator== (const Mystring& rhs) const;//
    bool operator> (const Mystring& rhs) const;//
    bool operator< (const Mystring& rhs) const;//
    bool operator!= (const Mystring& rhs) const;//
    
    const char* get_string();
};


Mystring::Mystring() {
    _string = new char[1];
    *_string = '\0';
}

Mystring::Mystring(const char* source) : _string {new char[strlen(source) + 1]} {
    strcpy(_string, source);
}

Mystring::Mystring(const Mystring& source) {
    _string = new char[strlen(source._string) + 1];
    strcpy(_string, source._string);
}

Mystring::Mystring(Mystring&& source) {
    _string = new char[strlen(source._string) + 1];
    _string = source._string;
    source._string = nullptr;
}

Mystring& Mystring::operator= (const Mystring& rhs) {
    if (this == &rhs)
        return *this;
    delete [] _string;
    
    _string = new char[strlen(rhs._string) + 1];
    strcpy(_string, rhs._string);
    
    return *this;
}

Mystring& Mystring::operator= (Mystring&& rhs) {
    if (this == &rhs)
        return *this;
    
    _string = new char[strlen(rhs._string) + 1];
    _string = rhs._string;
    rhs._string = nullptr;
    
    return *this;
}

Mystring Mystring::operator+ (const Mystring& rhs) const {
    unsigned buffer_size {};
    buffer_size = strlen(_string) + strlen(rhs._string) + 1;
    
    char* buffer = new char[buffer_size];
    strcpy(buffer, _string);
    strcat(buffer, rhs._string);
    
    Mystring temp {buffer};
    delete [] buffer;
    
    return temp;
}

Mystring Mystring::operator* (unsigned rhs) const {
    Mystring temp;
    for (size_t i {0}; i < rhs; i++)
        temp += *this;
    return temp;
}


Mystring& Mystring::operator+= (const Mystring& rhs) {
    *this = *this + rhs;
    return *this;
}

Mystring& Mystring::operator*= (const unsigned rhs) {
    *this = *this * rhs;
    return *this;
}

Mystring& Mystring::operator++ () {
    for (size_t i {0}; i < strlen(_string); i++)
        _string[i] = toupper(_string[i]);
    return *this;
}

Mystring Mystring::operator++ (int) {
    Mystring temp {*this};
    this->operator++ ();
    return temp;
}

Mystring Mystring::operator -() const {
    unsigned buffer_size {};
    buffer_size = strlen(_string) + 1;
    
    char* buffer = new char[buffer_size];
    
    for (size_t i {0}; i < buffer_size; i++)
        buffer[i] = tolower(_string[i]);
    
    Mystring temp {buffer};
    delete buffer;
    
    return temp;
}


bool Mystring::operator== (const Mystring& rhs) const {
    return (strcmp(_string, rhs._string) == 0);
}

bool Mystring::operator !=(const Mystring& rhs) const {
    return (strcmp(_string, rhs._string) != 0);
}

bool Mystring::operator> (const Mystring& rhs) const {
    return (strcmp(_string, rhs._string) > 0);
}

bool Mystring::operator< (const Mystring& rhs) const {
    return (strcmp(_string, rhs._string) < 0);
}

Mystring::~Mystring() {
    delete [] _string;
}

const char* Mystring::get_string() {
    return _string;
}

istream& operator>> (istream& is, Mystring& rhs) {
    char* buffer = new char[1000];
    is >> buffer;
    rhs = Mystring {buffer};
    delete [] buffer;
    return is;
}

ostream& operator<< (ostream& os, const Mystring& rhs) {
    os << rhs._string;
    return os;
}

int main() {
    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};

    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false
    
    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
     cout << (a<b) << endl;          // true
    cout << (a>b) << endl;           // false
    
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    cout << s1 << endl;               // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;               // frank*****       
    
    s1 += "-----";                        // frank*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Frank";
    ++s;
    cout << s << endl;                  // FRANK
    
    s = -s; 
    cout << s << endl;                  // frank
    
    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // FRANK
    cout << result << endl;           // FRANK
    
    s = "Frank";
    s++;
    cout << s << endl;                  // FRANK
     
    s = -s;
    cout << s << endl;                  // frank
    result = s++;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // frank
    
    Mystring obj;
    
    cout << "Enter string to repeat: ";
    cin >> obj;
    
    unsigned repeat_value {};
    
    cout << "Enter number of times to repeat: ";
    cin >> repeat_value;
    
    cout << (obj * repeat_value);
    
    return 0;
}