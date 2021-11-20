#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

void display(const double& a, const double& b, const double& c);

int main() {
    /*               Boolean manipulators                       */
//    bool bit {true};
//    std::cout << bit << std::endl; // 1
//    std::cout << std::boolalpha << bit << std::endl; //true
//    std::cout << std::noboolalpha << bit << std::endl; //1

    //std::cout.setf(std::ios::boolalpha);
    /************************************************************/
    
    /*              Integer manipulators                        */
    
//    int num {255};
//    
//    std::cout << std::showbase << std::uppercase << std::showpos;
//    std::cout << std::dec << num << std::endl;
//    std::cout << std::oct << num << std::endl;
//    std::cout << std::hex << num << std::endl;
    
    /*************************************************************
     *              Floating point numbers
     *************************************************************/
     
//    double num1 {1234567890.50};
//    double num2 {1234.5699};
//    double num3 {1234.00};
//     
//    display(num1, num2, num3);
//    
//    std::cout << std::setprecision(3);
//
//    display(num1, num2, num3);

    
    /***********************************************************
     *              Field width, align and fill
     **********************************************************/
     
     int data {10};
     
//    std::cout << std::setfill('*') << std::setw(10) << data << std::endl;
//    std::cout << std::setw(12) << data << std::endl;
//    std::cout << std::setw(5) << data << std::endl;
     
    int f {0};
     
    for (int i {0}; i < 10; i++, f += 2) {
        std::cout << std::setfill(' ') << std::right << std::setw(f) << '*' << std::endl;
    }
    
     
    return 0;
}

void display(const double& a, const double& b, const double& c) {
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}