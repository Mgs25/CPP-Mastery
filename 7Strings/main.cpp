#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main () {
    /*********************************
    * Characters and string
    *********************************/
    
    /********************************
    * Character functions
    ********************************/
    
//    char c {};
//    cout << "Input a character: ";
//    cin >> c;
//    cout << boolalpha;
//    //evaluation functions (starts with is)
//    cout << "is alphabet :" << static_cast<bool>(isalpha(c)) << endl;
//    cout << "is alphanumeric : " << static_cast<bool>(isalnum(c)) << endl;
//    cout << "is digit : " << static_cast<bool>(isdigit(c)) << endl;
//    cout << "is punctuation : " << static_cast<bool>(ispunct(c)) << endl;
//    cout << "is space : " << static_cast<bool>(isspace(c)) << endl;
//    cout << "is printable : " << static_cast<bool>(isprint(c)) << endl;
//    cout << "is uppercase : " << static_cast<bool>(isupper(c)) << endl;
//    cout << "is lowercase : " << static_cast<bool>(islower(c)) << endl;
//    
//    //conversion funtions
//    
//    c = toupper(c);
//    cout << "after using toupper c = " << c << endl;
//    c = tolower(c);
//    cout << "after usign tolower c = " << c << endl;
    
    /*******************************************
    * C-Style string
    * Principle working is the null character
    * terminated string.
    * which would cause problem in the program
    *******************************************/
    
//    char string[] = {"Methran"};
//    cout << string;
    
//    char string[100] {};
//    
//    strcpy(string, "Methran"); //copies the content of the string to the source string
//    cout << string << endl;
//    strcat(string, " is coding."); //appends the string to the source string
//    cout << string << endl;
//    cout << strlen(string) << endl; //returns length of string (until null character)
//    cout << strcmp(string, "Methran"); //check if both strings are equal (0 -> equal, non-zero -> not equal)

//    char first_name[20] {};
//    char last_name[20] {};
//    char full_name[50] {};
//    
//    cout << "Enter your first name: ";
//    cin >> first_name;
//    cout << "Your first name " << first_name << " has " << strlen(first_name) << " characters." << endl << endl;
//    cout << "Enter your last name: ";
//    cin >> last_name;
//    cout << "Your last name " << last_name << " has " << strlen(last_name) << " characters." << endl << endl;
//    
//    cout << "Your first name and last name are" << (strcmp(first_name, last_name) ? " not " : " ") << "equal." << endl << endl;
//    
//    strcpy(full_name, strcat(strcat(first_name, " "), last_name));
//    cout << "Your first and last name concatenated: " << full_name << endl;
//    cout << "Length of your full name is " << strlen(full_name) << endl;
//    cout << endl;
//    
//    for (size_t i {0}; i < strlen(full_name); i++) {
//        if (isalpha(full_name[i])) {
//            full_name[i] = toupper(full_name[i]);
//        }
//    }
//    cout << full_name << endl;
        //cin.getline(string, limit) to get full line including spaces
//    char new_full_name[50] {};
//    
//    cout << "Enter your full name: ";
//    cin.getline(new_full_name, 50);
//    cout << new_full_name;
    
    /***********************************************
    * C++ Style Strings
    ***********************************************/
    
    //types of initializing
//    string a {};
//    string b {"Methran"};
//    string c {b};
//    string d {"Methran", 3}; //first 3 character is copied
//    string e {c, 0, 4}; //copies the string from source, from start index and end index
//    string f (10, 'P');
//    cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl;
    
    //concatenation
    
//    string a {"Methran"}, b {"G S"};
//    
//    string legal {};
//    
//    legal = a + ' ' + b;
//    
//    for (auto c: legal) {
//        cout << (isspace(c) ? '\n' : c);
//    }
//    
//    cout << endl << legal.at(9) << endl; //using at method
    //cout << endl << legal[9] << endl; //using index method
    
    //compare C++ strings
    
//    string a {"Apple"};
//    string b {"Orange"};
//    string c {"Banana"};
//    string d {"Kiwi"};
//    string e {a};
//    
//    cout << "A = " << a << endl;
//    cout << "B = " << b << endl;
//    cout << "C = " << c << endl;
//    cout << "D = " << d << endl;
//    cout << "E = " << e << endl;
//    
//    cout << "===================" << endl;
//    cout << boolalpha;
//    
//    cout << "A == B: " << (a == b) << endl;
//    cout << "A != B: " << (a != b) << endl;
//    cout << "A > B : " << (a > b) << endl;
//    cout << "A < B : " << (a < b) << endl;
//    cout << "C > D : " << (c > d) << endl;
//    cout << "A == E: " << (a == e) << endl;

    /*****************************************
    * C++ string functions
    *****************************************/
    
    //substr
    //syntax: string.substr(start_index, length_of_substring);
//    string name {"Methran"};
//    
//    cout << name.substr(0, 4) << endl;
    
    //find
    //syntax: string.find(search_string);
    //optional parameter: string.find(search_string, start_index);
    
//    cout << name.find("thr") << endl; //returns 2, as 'thr' substring starts at index 2
//    
//    string test {"This is a test"}; //there are two occurences of the same sub-string 'is' in the string
//    
//    cout << test.find("is") << endl; //this returns 2 as the word "This" has "is" in it, and it located at 0
//    
//    //to search for a substring in a string from some index, we can use another parameter
//    
//    size_t position = test.find("ps", 4);
//    
//    cout << (position == string::npos ? "Not found!" : "Found!") << endl;
    
    //find returns string::npos if substring not found
    
//    string test {"methran"};
//
//    size_t pos = test.find("ran");
//    
//    cout << pos << endl;
//    cout << typeid(pos).name() << endl;
    
    //length function
    //syntax: string.length()
    
//    string sample {"kratos"};
//    sample.at(0) = toupper(sample.at(0)); //capitalize
//    cout << "Length of " << sample << " = " << sample.length() << endl;
//    
//    //compound operators on strings
//    
//    string s1 {"Methran"};
//    
//    s1 += " is back!";
//    
//    cout << s1 << endl;
//    cout << endl;
//    
//    //input
//    
//    string stringA {};
//    
//    cout << "Enter your full name: ";
//    getline(cin, stringA);
//    
//    cout << stringA << endl;
//
//    //IMPORTANT!!!
//    //getline delimiter
//    //specify a character until which the line will be read
//    
//    string stringB {};
//    cout << "Enter your number: ";
//    getline(cin, stringB, 'a');
//    cout << "Your number is: " << stringB << endl;

//    string s1 {"Methran"};
//    string s2 {s1, 0, 5};
//    string s3 (10, 'M');
//    string s4 {};
    
//    for (size_t i {0}; i < s1.length(); i++) {
//        cout << s1.at(i);
//    }
//    cout << endl;
//    for (auto c: s1) {
//        cout << c;
//    }

//    string s1 {};
//    int shift {};
//    
//    cout << "Enter your first and last name separated by space: ";
//    getline(cin, s1);
//    cout << "Enter shift value: ";
//    cin >> shift;
//    
//    for (size_t i {0}; i < s1.length() - (shift - 1); i += shift) {
//        string sub_string {s1.substr(i, shift)};
//        cout << sub_string << endl;
//    }
//    
//    erase(start_index, length)
//    s1.erase(0, 3);
//    
//    cout << s1;

//    string s {"The secret word is Boo"};
//    string word {};
//    
//    cout << "Enter word to find in the string: ";
//    cin >> word;
//    
//    size_t position = s.find(word);
//    
//    if (position != string::npos)
//        cout << word << " found at position: " << position << endl;
//    else
//        cout << word << " is not found in the string!" << endl;

    /*********************************************
    * Section Challenge
    *********************************************/
    
    //simple substitution cipher
    
    const string alphabets {"abcdefghijklmnopqrstuvwxyz"};
    const string key       {"DEFPQRXIJKLYZGABCHMNSTUVWO"};
    
    string message {};
    cout << "Enter message to cipher: ";
    getline(cin, message);
    
    string encrypted_message {}, decrypted_message {};
    
    for (auto c: message) {
        size_t position = alphabets.find(c);
        encrypted_message += (position != string::npos ? key.at(position) : c);
    }
    cout << "Encrypted message: " << encrypted_message << endl;
    
    for (auto c: encrypted_message) {
        size_t position = key.find(c);
        decrypted_message += (position != string::npos ? alphabets.at(position) : c);
    }
    cout << "Decrypted message: " << decrypted_message << endl;
    
    return 0;
}