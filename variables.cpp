#include <iostream>

using namespace std;

int main() {
    int uninitialized;                      // 0 by default
    int x;
    x = 10;
    double y = 10.1;

    cout << uninitialized << ' '  << x << ' ' << y << endl;

    const double pi = 3.14;                 // can't modify later

    int x_1 = ++x;
    int x_2 = x_1++;
    cout << x << ' ' << x_1 << ' ' << x_2 << endl;

    int a = 1;
    int b = 2;
    int tmp = a;
    a = b;

    int value_1;
    int value_2;
    cin >> value_1 >> value_2;                           // >> - stream extraction operator
    cout << "Inserted value sum: " << value_1 + value_2 << endl;

    return 0;
}