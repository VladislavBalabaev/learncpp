#include <iostream>

using namespace std;

// C++ is statically typed language - when declaring a variable we have to specify type and this type cannot change

int main() {
    int uninitialized;                                      // 0 by default
    int x;
    x = 10;
    double y = 10.1;

    cout << uninitialized << ' '  << x << ' ' << y << endl;

    const double pi = 3.14;                                 // can't modify later

    int x_1 = ++x;
    int x_2 = x_1++;
    cout << x << ' ' << x_1 << ' ' << x_2 << endl;

    int a = 1;
    int b = 2;
    int tmp = a;
    a = b;

    int value_1;
    int value_2;
    cin >> value_1 >> value_2;                              // >> - stream extraction operator
    cout << "Inserted value sum: " << value_1 + value_2 << endl;

    short bytes_2 = 10;
    int bytes_4 = 10;
    long bytes_4_the_same_as_int = 10L;
    long long bytes_8 = 10LL;

    float bytes_4_ = -0.1F;
    double bytes_8_ = -0.1;
    long double bytes_8__ = -0.1;

    bool bytes_1 = true;
    char bytes_1_ = 'a';                                     // storing single character

    auto automatically_typed = 'a';

    int number {10};                                      // brace initialization, will throw an error if we placed 10.1

    // narrowing convergion...

    return 0;
}