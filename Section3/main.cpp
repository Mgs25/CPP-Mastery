/* Section 3
 * Variables and Constants
*/

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

//Global variables can be modifed by any entity in the program
//int k {50}; //Global variable

int main () {
    /*****************************************************************************************************************
    * The below variables are called local varible as they are declared and initialized inside main function
    * These are not accesible by outside function or other entities as the visibility is limited to this main function
    ******************************************************************************************************************/
//    
//    //int a; //Uninitialized
//    int b = 10; //equal to initialization
//    int c (20); //Constructor like initialization
//    int d {30}; //C++11 list like initialization
//    cout << b << ' ' << c << ' ' << d << ' ' << k << endl;
//    
//    /********************************************
//    * Character datatype
//    ********************************************/
//    char middleInitial {'F'};
//    cout << "My middle initial is " << middleInitial << endl;
//    cout << endl;
//    
//    /********************************************
//    * Integer datatype
//    *********************************************/
//    unsigned short int marksObtained {55};
//    cout << "Unsigned short int marksObtained = " << marksObtained << endl;
//    int distance {134};
//    cout << "Int distance = " << distance << endl;
//    unsigned long int pop {85000000};
//    cout << "Unsigned long int pop = " << pop << endl;
//    unsigned long long int earthPopulation {7'600'000'000};
//    cout << "unsigned long long int earthPopulation = " << earthPopulation << endl;
//    cout << endl;
//    
//    /********************************************
//    * Float datatype
//    ********************************************/
//    float foodBill {840.78};
//    cout << "Float foodBill = " << foodBill << endl;
//    double PI {3.14159};
//    cout << "Double Pi = " << PI << endl;
//    long double largeAmt {2.3e250};
//    cout << "Long double largeAmt = " << largeAmt << endl;
//    cout << endl;
//    
//    /********************************************
//    * Boolean datatype
//    ********************************************/
//    bool isAlive {true};
//    cout << "Bool isAlive = " << isAlive << endl;
//    cout << endl;
//    
//    /********************************************
//    * Sizeof operator
//    ********************************************/
//    
//    //sizeof operator returns the number of bytes occupied by some entity
//    
//    cout << "Size of integer: " << sizeof(int) << endl;
//    cout << "Size of unsigned long long int: " << sizeof(long long) << endl;
//    cout << "Size of short: " << sizeof(short) << endl;
//    cout << "Size of character: " << sizeof(char) << endl;
//    cout << "Size of float: " << sizeof(float) << endl;
//    cout << "Size of boolean: " << sizeof(bool) << endl;
//    cout << "Size of double: " << sizeof(double) << endl;
//    cout << endl;
//    
//    //Getting primitive ranges using climts and cfloat
//    cout << "Integer range: " << INT_MIN << ", " << INT_MAX << endl;
//    cout << "Float range: " << FLT_MIN << ", " << FLT_MAX << endl;
//    cout << "Long range: " << LONG_MIN << ", " << LONG_MAX << endl;
//    cout << "Long long range: " << LLONG_MIN << ", " << LLONG_MAX << endl;
//    cout << "Char range: " << CHAR_MIN << ", " << CHAR_MAX << endl;
//    cout << endl;
//    
//    /*****************************************
//    * Constants
//    *****************************************/
//    const unsigned short numberOfMonths {12};
//    cout << numberOfMonths << endl;
    int smallRooms {0}, largeRooms {0};
    cout << "\nEnter the number of large rooms: ";
    cin >> largeRooms;
    cout << "Enter the number of small rooms: ";
    cin >> smallRooms;
    const double taxPercentage {6}, validityPeriod {30};
    double serviceCost {}, taxCost {};
    serviceCost = (35 * largeRooms) + (25 * smallRooms);
    taxCost = serviceCost * (taxPercentage / 100);
    cout << "\n====== METHRAN CARPET CLEANING SERVICE ======" << endl;
    cout << "=============================================" << endl;
    cout << "Number of large rooms : " << largeRooms<< endl;
    cout << "Number of small rooms : " << smallRooms << endl;
    cout << "Cost (Large)          : " << 35 << '$' << endl;
    cout << "Cost (Small)          : " << 25 << '$' << endl;
    cout << "Service cost          : " << serviceCost << "$" << endl;
    cout << "Tax cost              : " << taxCost << "$" << endl;
    cout << "=============================================" << endl;
    cout << "TOTAL ESTIMATE        : " << serviceCost + taxCost << "$" << endl;
    cout << "BILL VALIDITY         : " << validityPeriod << " days";
    return 0;
}