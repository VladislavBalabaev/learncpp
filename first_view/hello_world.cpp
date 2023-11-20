# include <iostream>                    // input-output stream

int main() {                            // returns integer; random if smth goes wrond
    // std - standard (library); << - stream instertion operator
    std::cout << "Hello World!" << std::endl;        // character output
    return 0;                           // to show that it terminates correctly
}
// to compile: $ g++ hello_world.cpp