#include <iostream>
#include <vector>
using namespace std;

int main () {
    /**************************
    * Statements and Operator
    * Expressions
    **************************/
    //Expressions are sequence of operators and operands which involves computation
    /*
     Examples
     * 13 //literal
     * age //variable
     * 4.5 + 5.5 //addition
     * a > b //relational
     * k = x //assignment
    */
    
    /*************************
    * Statements
    *************************/
    //Statement is a complete line of code that performs some action
    //usually contains expressions
    //should always be terminated with a semi-colon (;)
    /*
     Examples
    * int x; //declaration
    * x = 10; //assignment
    * 100 / 50 //expression
    */
/*    int a {10};
    int b {20};
    cout << "value of a before modifying: " <<  a << endl;
    a = 100; //assignment operator
    cout << "value of a after modifying: " << a << endl;
    cout << endl;*/
    
    /********************************
    * Arithmetic operators
    ********************************/
    /*
     * + addition
     * - subtraction
     * * multiplication
     * / division
     * % modulo
    */
/*    int num1 {0}, num2 {0}, result {0};
    cout << "Enter two number to perform arithmetic operations: ";
    cin >> num1 >> num2;
    result = num1 + num2;
    cout << "Sum of " << num1 << " and " << num2 << " = " << result << endl;
    result = num1 * num2;
    cout << "Product of " << num1 << " and " << num2 << " = " << result << endl;
    result = num1 - num2;
    cout << "Subtraction of " << num1 << " from " << num1 << " = " << result << endl;
    result = num1 / num2;
    cout << "Division of " << num1 << " by " <<  num2 << " = " << result << endl;
    result = num1 % num2;
    cout << "Remainder of " << num1 << " by " << num2 << " = " << result << endl;*/
    
/*    const double conversion_rate {1.19};
    cout << "Welcome EUR to USD converter!" << endl;
    cout << "Enter euros: ";
    double euros {0.0}, dollars {0.0};
    cin >> euros;
    dollars = euros * conversion_rate;
    cout << euros << " euro(s) is " << dollars << " dollar(s)." << endl;
    */
    
    /***************************************
    * Mixed types expression
    * (type)expression -> Old style type casting
    * static_cast<type>(expression) -> Modern C++ type casting
    * Old style type casting doesn't check if the type conversion is valid
    * or not in the compile time while the modern C++ type casting method
    * checks if there is possibility for conversion on compile time
    ***************************************/
    
/*    int a {0}, b {0}, c {0};
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double average {static_cast<double>(a + b + c) / 3};
    cout << average;*/
    
    //boolalpha is manipulator to interpret boolean values (1, 0) as (true, false)
    //noboolalpha deactives this behaviour, if activated
    
//    bool is_equal {};
//    bool is_not_equal {};
//    
//    int a {};
//    int b {};
//    
//    cout << "Enter two numbers to check equality: ";
//    cin >> a >> b;
//    cout << boolalpha;
//    
//    is_equal = (a == b);
//    is_not_equal = (a != b);
//    
//    cout << "A is equal to B: " << is_equal << endl;
//    cout << "A is not equal to B: " << is_not_equal << endl;

//    double a {}, b {};
//    bool is_equal {}, is_not_equal {};
//    cin >> a >> b;
//    is_equal = (a == b);
//    is_not_equal = (a != b);
//    cout << boolalpha;
//    cout << "Is equal: " << is_equal << endl;
//    cout << "Is not equal: " << is_not_equal << endl;

/*    int a {}, b {};
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << boolalpha;
    cout << a << " > " << b << " = " << (a > b) << endl;
    cout << a << " < " << b << " = " << (a < b) << endl;
    cout << a << " >= " << b << " = " << (a >= b) << endl;
    cout << a << " <= " << b << " = " << (a <= b) << endl;
    cout << a << " == " << b << " = " << (a == b) << endl;
    cout << a << " != " << b << " = " << (a != b) << endl;*/

//    int num {};
//    const int lower_bound {10}, upper_bound {20};
//    
//    cout << "Enter a number between " << lower_bound + 1 << " and " << upper_bound - 1 << " : ";
//    cin >> num;
//    
//    bool within_bounds {}, outside_bounds {}, on_bounds {};
//    within_bounds = (num > lower_bound && num < upper_bound);
//    
//    cout << boolalpha;
//    cout << "Number is within bounds: " << within_bounds << endl;
//    
//    outside_bounds = (num < lower_bound || num > upper_bound);
//    cout << "Number is outside bounds: " << outside_bounds << endl;
//    
//    on_bounds = (num == lower_bound || num == upper_bound);
//    cout << "Number is on bounds: " << on_bounds << endl;

//    bool need_coat {};
//    double temperature {};
//    double wind_speed {};
//    
//    const double temp_for_coat {45}, windspd_for_coat {25};
//    
//    cout << "Enter current temperature: ";
//    cin >> temperature;
//    cout << "Enter wind speed: ";
//    cin >> wind_speed;
//    
//    need_coat = (temperature < temp_for_coat && wind_speed > windspd_for_coat);
//    
//    cout << boolalpha;
//    cout << "Need coat: " << need_coat << endl;
//    
//    need_coat = (temperature < temp_for_coat || wind_speed > windspd_for_coat);
//    cout << "Need coat: " << need_coat << endl;
    
    //section challenge
    
    int cents {};
    cout << "Enter cents: ";
    cin >> cents;
    
    const int denominations[] {100, 25, 10, 5, 1};
    
    for (int i = 0; i < 5; i++) {
        cout << cents / denominations[i] << endl;
        cents %= denominations[i];
    }
    
    return 0;
}