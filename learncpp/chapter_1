#include <iostream>                                     // Line 1 - a preprocessor directive; input-output stream.
/*
"statement" -> ;

"identiifier" - name of smth (variable, function, ...)

in C++ indirect memory access is used through an "object" = region of memory that can store a value (so, we don't have to worry about where in memory those objects are actually being placed)


"variable" = object + identifier.


C++ is statically typed language (when declaring a variable we have to specify type and this type cannot change)

"instantiation" of an object - the object will be created and assigned a memory address while "runtime"
"instance" - an instantiated object
*/


int main() {                                                // returns integer; random if smth goes wrond
    int x;                                                  // "definition", declaration?
    x = 1;                                                  // "assignment"

    // types of "initialization":
    int a;                                                  // default
    int b = 1;                                              // copy
    int c( 1 );                                             // direct - efficient initialization of complex objects
    int d { 1 };                                            // direct list (brace, uniform)
    int e = { 1 };                                          // copy list
    int f {};                                               // value
    /* preffered way - direct list or value initialization:
    1. disallows “narrowing conversions”: 'int {0.1}' is a error 
    2. supports initialization with lists of values

    Best practice - initialize your variables upon creation.
    */

    [[maybe_unused]] int y { 2 };                           // to avoid compile error of unused variable.

    // std - standard (library); << - stream instertion operator
    std::cout << "Hello World!" << std::endl;        // character output

    int value_1;
    int value_2;
    std::cin >> value_1 >> value_2;                         // >> - stream extraction operator

    return 0;                           // to show that it terminates correctly
}