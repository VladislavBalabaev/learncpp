#include <iostream>

/*
(By default) integers in C++ are signed.
"sign bit" - used to store the sign of the number.
"magnitude bits" - non-sign bits.

8-bit int -> can hold 256 possible values -> range is -128 to 127, inclusive.

"integer overflow" - UB when operation attempts to create a value outside the range that can be represented.

"unsigned integers" only hold non-negative whole numbers.

BEST PRACTICE: Favor signed over unsigned (even if var should be non-negative)
*/

int main() {
    unsigned short us;

    constexpr int n1{ 5 };                                  // this value can (when possible) be converted to another type if this value can be stored exactly in the destination type
    unsigned int u1 { n1 };


    return 0;
}