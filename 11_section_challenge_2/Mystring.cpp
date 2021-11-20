#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring() {
    m_string = new char[1];
    *m_string = '\0';
}

Mystring::Mystring(const char* string) {
    m_string = new char[strlen(string)];
    strcpy(m_string, string);
}

Mystring::Mystring(const Mystring& source) {
    m_string = new char[strlen(source.m_string) + 1];
    strcpy(m_string, source.m_string);
}

Mystring::Mystring(Mystring&& source) {
    m_string = new char[strlen(source.m_string) + 1];
    m_string = source.m_string;
    source.m_string = nullptr;
}

Mystring::~Mystring() {
    delete [] m_string;
}

// Copy and Move assignment operator

Mystring& Mystring::operator =(const Mystring& rhs) {
    if (this == &rhs)
        return *this;
        
    delete [] m_string;
    m_string = new char[strlen(rhs.m_string) + 1];
    strcpy(m_string, rhs.m_string);
    
    return *this;
}

Mystring& Mystring::operator =(Mystring&& rhs) {
    if (this == &rhs)
        return *this;
    
    delete [] m_string;
    m_string = new char[strlen(rhs.m_string) + 1];
    m_string = rhs.m_string;
    rhs.m_string = nullptr;
    
    return *this;
}

// Other operators

Mystring operator +(const Mystring& lhs, const Mystring& rhs) {
    unsigned buffer_size {};
    buffer_size = strlen(lhs.m_string) + strlen(rhs.m_string) + 1;
    
    char* buffer = new char[buffer_size];
    strcpy(buffer, lhs.m_string);
    strcat(buffer, rhs.m_string);
    
    Mystring T {buffer};
    delete [] buffer;
    
    return T;
}

Mystring operator -(const Mystring& lhs) {
    unsigned buffer_size {};
    buffer_size = strlen(lhs.m_string) + 1;
    
    char* buffer = new char[buffer_size];
    for (size_t i {0}; i < buffer_size; i++)
        buffer[i] = tolower((lhs.m_string)[i]);
    
    Mystring T {buffer};
    delete [] buffer;
    
    return T;
}

Mystring operator *(const Mystring& lhs, const unsigned rhs) {
    unsigned buffer_size {};
    buffer_size = strlen(lhs.m_string) * rhs + 1;
    
    char* buffer = new char[buffer_size];
    
    strcpy(buffer, lhs.m_string);
    for (size_t i {1}; i < rhs; i++)
        strcat(buffer, lhs.m_string);
    
    Mystring T {buffer};
    delete [] buffer;
    
    return T;
}

Mystring& operator +=(Mystring& lhs, const Mystring& rhs) {
    lhs = lhs + rhs;
    return lhs;
}

Mystring& operator *=(Mystring& lhs, const unsigned rhs) {
    lhs = lhs * rhs;
    return lhs;
}

bool operator ==(const Mystring& lhs, const Mystring& rhs) {
    return strcmp(lhs.m_string, rhs.m_string) == 0;
}

bool operator !=(const Mystring& lhs, const Mystring& rhs) {
    return strcmp(lhs.m_string, rhs.m_string) != 0;
}

bool operator >=(const Mystring& lhs, const Mystring& rhs) {
    return strcmp(lhs.m_string, rhs.m_string) >= 0;
}

bool operator <=(const Mystring& lhs, const Mystring& rhs) {
    return strcmp(lhs.m_string, rhs.m_string) <= 0;
}

Mystring& operator ++(Mystring& lhs) {
    for (size_t i {0}; i < strlen(lhs.m_string); i++)
        (lhs.m_string)[i] = toupper((lhs.m_string)[i]);
    return lhs;
}

Mystring operator ++(Mystring& lhs, int) {
    Mystring temp {lhs};
    operator++(lhs);
    return temp;
}

std::ostream& operator <<(std::ostream& os, const Mystring& rhs) {
    os << rhs.m_string;
    return os;
}

std::istream& operator >>(std::istream& is, Mystring& rhs) {
    char* buffer = new char[1000];
    is >> buffer;
    
    rhs = buffer;
    delete [] buffer;
    
    return is;
}

// String getter
const char* Mystring::get_string() {
    return m_string;
}