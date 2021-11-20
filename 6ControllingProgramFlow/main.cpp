#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;

int main ()
{
    /****************************
    *Controlling program flow
    ****************************/

    /*********************************************
    * if, if-else, if-else-if and nested if else
    *********************************************/
//    int num {}, diff {};
//    const int target {100};
//    cout << "Enter a number, I'll compare it to 100: ";
//    cin >> num;
//
//    if (num >= target) {
//        diff = num - target;
//        cout << num << " is greater than or equal to 100" << endl;
//        cout << num << " is " << diff << " greater than 100" << endl;
//    }
//    else {
//        diff = target - num;
//        cout << num << " is smaller than 100" << endl;
//        cout << num << " is " << diff << " smaller than 100" << endl;
//    }

//    int score {};
//    cout << "Enter score out of 100: ";
//    cin >> score;
//
//    if (score >= 0 && score <= 100) {
//        char grade {};
//        if (score < 60)
//            grade = 'F';
//        else if (score <= 70)
//            grade = 'D';
//        else if (score <= 80)
//            grade = 'C';
//        else if (score <= 90)
//            grade = 'B';
//        else
//            grade = 'A';
//
//        if (grade != 'F')
//            cout << "You have passed with a " << grade << endl;
//        else
//            cout << "You have failed the exam" << endl;
//    } else {
//        cout << "Please enter a valid mark between 0 and 100!" << endl;
//    }

    //shipping cost calculator
//    int length {}, width {}, height {};
//    const int maximum_dimension {10}, tier1_threshold {100}, tier2_threshold {500};
//    const double base_charge {2.50}, tier1_surcharge {0.10}, tier2_surcharge {0.25};
//
//    cout << "Enter dimensions of the package (Length, Width, Height in Inches): ";
//    cin >> length >> width >> height;
//
//    if (length <= maximum_dimension && width <= maximum_dimension && height <= maximum_dimension) {
//        double package_area {}, total_charge {base_charge};
//        package_area = length * width * height;
//
//        if (package_area > tier2_threshold)
//            total_charge += (base_charge * tier2_surcharge);
//        else if (package_area > tier1_threshold)
//            total_charge += (base_charge * tier1_surcharge);
//
//        cout << "Delivery of the package would cost " << total_charge << endl;
//    } else {
//        cout << "Package cannot be delivered!" << endl;
//    }

    /*******************************************
    * Switch case
    *******************************************/
//    char grade {};
//    cout << "Enter grade letter: ";
//    cin >> grade;
//
//    switch (grade) {
//        case 'a':
//        case 'A':
//            cout << "You scored an A! Good job!";
//            break;
//        case 'b':
//        case 'B':
//            cout << "You scored a B!";
//            break;
//        case 'c':
//        case 'C':
//            cout << "You scored a C! :|";
//            break;
//        case 'd':
//        case 'D':
//            cout << "You scored a D! :<";
//            break;
//        case 'f':
//        case 'F':
//            cout << "You scored a F!";
//            break;
//        default:
//            cout << "You are retarded...";

    /*********************************************
    * Switch case using enumeration
    *********************************************/
//    enum Direction {left, right, up, down};
//
//    Direction heading {left};
//
//    switch (heading) {
//        case left:
//            cout << "Heading left!";
//            break;
//        case right:
//            cout << "Heading right!";
//            break;
//        case up:
//            cout << "Heading up!";
//            break;
//        case down:
//            cout << "Heading down!";
//            break;
//        default:
//            cout << "Invalid direction!";
//    }

    /******************************************
    * Conditional Operator
    ******************************************/

//    double marks {}, credit_score {10};
//
//    bool is_pass {};
//    cout << "Enter marks: ";
//    cin >> marks;
//
//    is_pass = (marks >= 32.5);
//
//    credit_score += is_pass ? 10 : 0;
//
//    cout << ((credit_score > 10) ? "Excellent!" : "Very poor!");

//    int a {}, b {};
//
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//
//    if (a != b) {
//        cout << "Largest: " << ((a > b) ? a : b) << endl;
//        cout << "Smallest: " << ((a > b) ? b : a) << endl;
//    } else {
//        cout << a << " is equal to " << b;
//    }
//
    //A real cool code!
//    for (int i = 11; i <= 50; i++) {
//        cout << i << ((i%5==0) ? '\n' : ' ');
//    }

//    for (int i {1}; i <= 100; i++) {
//        if (i % 2 == 0)
//            cout << i << endl;
//    }
    //comma serpated actions and initialization
//    for (int i {1}, j {5}; i <= 10 ; i++)
//        cout << i * j << endl;

//    vector<int> whole_numbers {1, 2, 3, 10, 123};
//    vector<double> real_numbers {1.9, 12.3, -12.98, 547.1234};
//    vector<char> alphabets {'g', 's', 'm', 'e', 't', 'h', 'r', 'a', 'n'};
//

    /*********************************************
    * Range based for loop
    * syntax: for(var_type var_name : sequence) {
    *           body
    *         }
    *********************************************/
//    for (auto x: alphabets)
//        cout << x;

//    vector<double> temperatures {33.5, 28.12, 30.10, 42.7, 41.8};
//
//    double mean {}, sum {};
//
//    for (auto i: temperatures)
//        sum += i;
//
//    mean = sum / temperatures.size();
//
//    cout << mean;

    //vector<double> student_weights {34.8, 90.12, 48.12, 58.12};

//    for (auto c: "ls the goat!") {
//        if (c == ' ')
//            cout << '\t';
//        else
//            cout << c;
//    }
    
//    bool finished {false};
//    int number {};
//    
//    do {
//        cout << "Enter number between 1 and 5: ";
//        cin >> number;
//        if (number >= 5 || number <= 1)
//            cout << "Try again!" << endl;
//        else {
//            cout << "Thank you, number inputted!" << endl;
//            finished = true;
//        }
//    } while (!finished);

//    char proceed {};
//    
//    do {
//        double length {}, width {}, height {};
//        cout << "Enter length, width, height: ";
//        cin >> length >> width >> height;
//        
//        const double area {length * width * height};
//        cout << "Volume of box is " << area << endl;
//        
//        cout << "\nCalculate again? (Y/N): ";
//        cin >> proceed;
//    } while (proceed == 'Y' || proceed == 'y');
//    cout << "Thanks!";


    //menu driven program
//    char option {};
//    do {
//        cout << "-----------------------------------" << endl;
//        cout << "1.Do this" << endl;
//        cout << "2.Do that" << endl;
//        cout << "3.Do something else" << endl;
//        cout << "Q.Quit" << endl;
//        cout << "Enter your choice: ";
//        cin >> option;
//        cout << endl;
//        switch (option) {
//            case '1':
//                cout << "You chose 1, doing this!" << endl; break;
//            case '2':
//                cout << "You chose 2, doing that!" << endl; break;
//            case '3':
//                cout << "You chose 3, doing something else!" << endl; break;
//            case 'q':
//            case 'Q':
//                cout << "Thank you for using the program!" << endl; break;
//            default:
//                cout << "Illegal choice!" << endl;
//        }
//        cout << endl;
//    } while (option != 'q' && option != 'Q');
    
//    vector<int> input_signals {12, 9, 13, 76, -1, 45, -1, 134, 9, -99, 7};
//    
//    for (auto i: input_signals) {
//        if (i == -1)
//            continue;
//        else if (i == -99)
//            break;
//        else
//            cout << i << ' ';
//    }

//    for (int outer_var {1}; outer_var <= 10; outer_var++) {
//        for (int inner_var {1}; inner_var <= 10; inner_var++) {
//            cout << outer_var << " x " << inner_var << " = " << outer_var * inner_var << endl;
//        }
//        cout << "============================"
//    }

//    vector<vector<int>> matrix {
//        {1, 2, 3, 4},
//        {8, 4, 2, 1, 10},
//        {10, 20, 30, 40, 50},
//        {4, 8}
//    };
//    
//    for (auto i: matrix) {
//        for (auto j: i) {
//            cout << j << ' ';
//        }
//        cout << endl;
//    }

//    int result {0};
//    for (int outer_loop {0}; outer_loop <= 6; outer_loop++) {
//        for (int inner_loop {0}; inner_loop <= 15; inner_loop++) {
//            result++;
//        }
//    }
//    
//    cout << result;
    
//    int data_count {};
//    vector<int> v {};
//    
//    cout << "Enter number of data: ";
//    cin >> data_count;
//    
//    for (int i {0}; i < data_count; i++) {
//        int input {};
//        
//        cout << "Enter data " << i + 1 << " : ";
//        cin >> input;
//        
//        v.push_back(input);
//    }
//    
//    for (auto i: v) {
//        for (int j {1}; j <= i; j++)
//            cout << (j % 5 == 0 ? '*' : '-');
//        cout << endl;
//    }

    /*****************************************************
    * Section challenge
    *****************************************************/
    
    vector<int> list {};
    int temp_var {}, total {}, min {}, max {}, flag {};
    char choice {};
    
    
    do {
        cout << "=========================================" << endl;
        cout << "P - Display list" << endl;
        cout << "A - Add item to list" << endl;
        cout << "M - Display mean of the lsit" << endl;
        cout << "S - Display smallest element in the list" << endl;
        cout << "L - Display largest element in the list" << endl;
        cout << "E - Check if element exists in the list" << endl;
        cout << "C - Clear list" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 'p':
            case 'P':
                if (list.size() == 0)
                    cout << "[] - list is empty" << endl;
                else {
                    cout << "[ ";
                    for (auto i: list) {
                        cout << i << ' ';
                    }
                    cout << ']' << endl;
                }
                break;
            case 'a':
            case 'A':
                cout << "Enter number to be added to the list: ";
                cin >> temp_var;
                list.push_back(temp_var);
                cout << temp_var << " added." << endl;
                break;
            case 'm':
            case 'M':
                if (list.size() == 0)
                    cout << "Unable to calculate the mean - No data" << endl;
                else {
                    total = 0;
                    for (auto i: list)
                        total += i;
                    cout << "Mean: " << static_cast<double>(total) / list.size() << endl;
                }
                break;
            case 's':
            case 'S':
                if (list.size() == 0)
                    cout << "Unable to determine the smallest number - List is empty" << endl;
                else {
                    min = list.at(0);
                    for (auto i: list)
                        min = (i < min ? i : min);
                    cout << "The smallest number is " << min << endl;
                }
                break;
            case 'l':
            case 'L':
                if (list.size() == 0)
                    cout << "Unable to determine the largest number - List is empty" << endl;
                else {
                    max = list.at(0);
                    for (auto i: list)
                        max = (i > max ? i : max);
                    cout << "The largest number is " << max << endl;
                }
                break;
            case 'e':
            case 'E':
                cout << "Enter element to check: ";
                cin >> temp_var;
                flag = false;
                for (auto i: list) {
                    if (i == temp_var) {
                        flag = true;
                        break;
                    }
                }
                cout << temp_var << " is" << (flag ? " " : " not ") << "in the list" << endl;
                break;
            case 'c':
            case 'C':
                list.clear();
                cout << "List cleared!" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Unknown selection, please try again!" << endl;
        }
    } while (choice != 'q' && choice != 'Q');
    
    return 0;
}
