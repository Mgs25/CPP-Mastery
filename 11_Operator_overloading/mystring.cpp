#include <cstring>
#include <iostream>
#include "mystring.h"

// Default constructor
Mystring::Mystring()
    : _string {nullptr} {
        _string = new char[1];
        *_string = '\0';
}

// Parameterized constructor
Mystring::Mystring(const char* s)
    : _string {nullptr} {
        _string = new char[strlen(s) + 1];
        strcpy(_string, s);
}

// Copy assignment operator
Mystring& Mystring::operator =(const Mystring& rhs) {
    if (this == &rhs)
        return *this;
        
    delete [] _string;
    _string = new char[strlen(rhs._string) + 1];
    strcpy(_string, rhs._string);
    
    return *this;
}

// Move assignment operator
Mystring& Mystring::operator =(Mystring&& rhs) {
    if (this == &rhs)
        return *this;
        
    delete [] _string;
    _string = rhs._string;
    rhs._string = nullptr;
    
    return *this;
}

// Minus (-) operator overload function (convert to lowercase string)
Mystring Mystring::operator-() const {
    char* _buffer = new char[strlen(_string) + 1];
    for (size_t i {0}; i < strlen(_string); i++)
        _buffer[i] = tolower(_string[i]);
    
    Mystring temp {_buffer};
    delete [] _buffer;
    
    return temp;
}

// Addition (+) operator overload function (concatnate two strings)s
Mystring Mystring::operator +(const Mystring& rhs) const {
    size_t buffer_size {strlen(this->_string) + strlen(rhs._string) + 1};
    char* buffer = new char[buffer_size];
    strcpy(buffer, this->_string);
    strcat(buffer, rhs._string);
    
    Mystring temp {buffer};
    delete [] buffer;
    
    return temp;
}

// Equality (==) operator overload (check if two strings are same)
bool Mystring::operator ==(const Mystring& rhs) const {
    if (strcmp(this->_string, rhs._string))
        return false;
    else
        return true;
}

// Destructor
Mystring::~Mystring() {
    delete [] _string;
}

// Methods definition
Mystring::Mystring(const Mystring& source)
    : Mystring {source._string} {
}

void Mystring::set_string(const char* s) {
    strcpy(_string, s);
}


void Mystring::display() const {
    std::cout << _string << " : " << strlen(_string) << std::endl;
}

unsigned Mystring::get_length() const {
    return _size;
}

const char* Mystring::get_string() const {
    return _string;
}