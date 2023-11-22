#include <iostream>


int if_else() {
    int a;
    int b;
    
    std::cin >> a >> b;

    int sign;

    if (a < b) {
        sign = '<';
    } else if (a == b) {
        sign = '=';
    } else {
        sign = '>';
    }

    std::cout << a << '<' << b << '\n';
    
    return 0;
}


int for_loop() {
    int i;
    int sum{ 0 };

    // for (int i = 0; i <= 1000; i++) if i wasn't defined
    for (i = 0; i <= 1000; i++) {
        sum += i;
    }    
    std::cout << sum;

    return 0;
}


int while_loop() {
    int i{ 0 };
    int sum{ 0 };

    while (i <= 1000) {
        sum += i;

        i++;
    }
    std::cout << sum;

    return 0;
}


int do_while_loop() {
    int i{ 0 };
    int sum{ 0 };                                      // will make an additional iteration by comparison with while

    do {
        sum += i;

        i++;
    } while (i <= 1000);

    std::cout << sum;

    return 0;
}


int main() {
    // When creating a "static array" the size of the allocated memory is determined at the compilation stage and cannot be changed during execution.
    std::string names[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> names[i];
    }

    
    std::string students[3] = {
        "Vasya", "Petya", "Kolya"
    };

    for (int i = 0; i < 3; i++) {
        std::cout << students[i] << '\n';
    }

    return 0;
    

}