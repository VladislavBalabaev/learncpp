#include <iostream>
#include <vector>


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


void array() {
    // When creating a "static array" the size of the allocated memory is determined at the compilation stage and cannot be changed during execution.

    std::string names[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> names[i];
    }

    
    std::string students[3] = {                         // {_, _} - list initializer
        "Vasya", "Petya", "Kolya"
    };

    for (int i = 0; i < 3; i++) {
        std::cout << students[i] << '\n';               // students[3] - undentified behavior; to cause an error use: students.at(3)
    }


    // elements of arrays are always allocated contiguously in memory:
    // std::vector primes { 2, 3, 5 };
    int primes[3] = { 2, 3, 5 };
    std::cout << "An int is " << sizeof(int) << " bytes\n";
    std::cout << &(primes[0]) << '\n';  // 00DBF720
    std::cout << &(primes[1]) << '\n';  // 00DBF724
    std::cout << &(primes[2]) << '\n';  // 00DBF728


    // dynamic creation of array:
    int num;
    std::cin >> num;

    int *p_darr = new int[num];                         // allocating memory for an array
    for (int i = 0; i < num; i++) {
        p_darr[i] = i ^ 2;
    }

    delete [] p_darr;
}


void pointer() {
    // * - dereference, to get value from memory address
    // & - address-of, to get the memory address itself; will return the memory address of the first byte used by the object.
    // new - memory allocation
    // delete - release allocated memory

    // A "pointer" is an object that holds a memory address (typically of another variable) as its value.

    int *a = new int;
    *a = 1;

    int *b = new int(1);

    *b = *a + *b;

    std::cout << *a;
    std::cout << "address of b is " << &b << '\n';

    delete a;
    delete b;


    int x { 5 };                                        // normal variable
    int& ref { x };                                     // a reference to an integer (bound to x)
    int* ptrx{ &x };                                    // a pointer initialized with the address of variable x

    int* ptr;                                           // an uninitialized pointer (holds a garbage address)
}



void passByRef(const std::vector<int>& arr) {} // to avoid expensive copy to the parameter we use const

void vectors() {
    // homogenous container is a data type that provides storage for a collection of homogenous unnamed objects
    // C++ supports only homogenous containters, python also supports heterogenous containters
    // “pseudo-containers”: C-style arrays, std::string, std::vector<bool>

    std::vector<int> empty_vector{};
    std::vector<char> alphabet{ 'a', 'b', 'c' };

    std::vector<int> ten_zeros(10);                     // "single-valued constructor"

    const std::vector<int> prime{ 2, 3, 5 };
    // ERROR: std::vector<const int> prime { 2, 3, 5 }; - elements of a non-const std::vector must be non-const

    passByRef(ten_zeros);
}


int main() {
    array();

    return 0;

}