#include <iostream>
using namespace std;

int main () {
    
    return 0;
}

/* Basic structure
 * Every C++ program should have at least one function, which is main()
 * There can only be a single main function
 * main function is the starting point of the code execution, right after striping the comments and executing
 * preprocessor directives
*/

/* Preprocessor
 * A C++ preprocessor will first strip off all the commments in the source code (replace comments with a single space),
 * then moves on to execute the preprocessor directives.
 * Preprocessor directive begins with '#' and are most commonly used to include required header files for our program
 * The C++ preprocessor does not understand C++ (IMPORTANT)
 * Common preprocessor directives:
 *  #include <header_file>
 *  #include "my_header.h>
 *  #if
 *  #elif
 *  #else
 *  #endif
*/

/* The main function
 * There are 2 versions of valid main function definition
 * main() and main(int argc, char* argv[])
 * Both are valid, but the first version expects no information from the OS
 * The second one is used for command line programs
*/

/* Keywords
 * C++    -> 90 keywords
 * Java   -> 50 keywords
 * C      -> 32 keywords
 * Python -> 33 keywords
*/

/* C++ Namespaces
 * C++ namespaces are used to avoid name conflicts, which is a major factor in large scale programs
 * using namespace std; //essentially means that we are using objects from std (standard library)
 * we can define our own namespaces to avoid conflicts
*/