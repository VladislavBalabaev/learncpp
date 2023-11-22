#include <iostream>
/*
"function call" is an expression that tells the CPU to interrupt the current function and execute another function

functions cannot be defined inside other functions

"local scope" & "out of scope"
out of scope -> variable’s lifetime ends;; not all types of variables are destroyed when they go out of scope


"declaration" - existence of an identifier and its associated type information.
"definition" - declaration that actually implements (for functions and types) or instantiates (for variables) the identifier. [In C++, all definitions are declarations.]
"pure declarations" - declarations that aren’t definitions are called.
"initialization" - provides an initial value for a defined object.


"preprocessor" makes various changes to the text of the code file. [replaces the #include directive with the contents of the included file, ...]
"translation" -  entire process of preprocessing, linking, compiling.
*/


// void func. automatically return to the caller at the end of the function
void do_print(int x) {                                   // func. "header"
    std::cout << "Printing" << x << "\n";                // func. "body"
}


double function_name(int x, int y)
{
    // failure to return a value from a value-returning function -> undefined behavior.
    return x + y;
}


void func_with_unnamed_parameter(int /*previously_used_parameter*/) {
    // in cases where a function parameter needs to exist but is not used in the body of the function
}


int forward_declared(int x, int y);                     // "forward declaration"
// it may be declared without names of parameters, but it's common practice to add them.
// forward declaration is good when we have two functions that call each other.
// we can have smth.cpp with defined forward_declared and use forward declaration to use it.


int main() {
    std::cout << forward_declared(2, 4) << '\n';
}


int forward_declared(int x, int y) {
    return x + y;
}

// $ g++ main.cpp add.cpp -o main, where main.cpp and add.cpp are the names of your code files, and main is the name of the output file.