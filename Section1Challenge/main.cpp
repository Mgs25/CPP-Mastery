#include <iostream>

int main () {
    int favorite_num;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_num;
    std::cout << "That's my favorite number too!" << std::endl;
    std::cout << "No really!! " << favorite_num << " is my favorite number too!";
    return 0;
}