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
    // A "pointer" - variable which value happens to be an address in integer representation.

    float z = 4;
    float * pz = &z;                                      // float * - pointer to a float; it is not float itself, pointer is always intk
    float y = *pz;                                        // (without type) * - dereference, to get value from memory address


    int * a = new int;                                  // new - memory allocation
    *a = 1;

    int * b = new int(1);

    *b = *a + *b;

    std::cout << *a;
    std::cout << "address of b is " << &b << '\n';      // & - address-of, to get the memory address itself; will return the memory address of the first byte used by the object.

    delete a;                                           // delete - release allocated memory
    delete b;


    int x { 5 };                                        // normal variable
    int & ref { x };                                    // a reference to an integer (bound to x)
    int * ptrx { &x };                                  // a pointer initialized with the address of variable x

    int * ptr;                                          // an uninitialized pointer (holds a garbage address)
}




std::vector<int> passByRef(const std::vector<int>& arr) {   // to avoid expensive copy to the parameter we reference by const
    std::vector arr1 { 1, 2, 3 };
    return arr1;                                            // return by value
}

template <typename T>
T templatePassByRef(const std::vector<T>& arr) {            // "template parameter declaration": allows the caller to specify the element type
    return arr
}
// OR (to do the same)
// void autoPassByRef(const auto& arr) {}                   // abbreviated function template (c++ 2020+)


void vectors() {
    /*
    homogenous container is a data type that provides storage for a collection of homogenous unnamed objects.
    C++ supports only homogenous containters, python also supports heterogenous containters.
    “pseudo-containers”: C-style arrays, std::string, std::vector<bool>.
    */

    std::vector<int> empty_vector{};
    std::vector<char> alphabet{ 'a', 'b', 'c' };        // "initializer list"

    std::vector<int> ten_zeros(10);                     // "single-valued constructor"

    const std::vector<int> prime{ 2, 3, 5 };
    // ERROR: std::vector<const int> prime { 2, 3, 5 }; - elements of a non-const std::vector must be non-const

    std::cout << prime[0];                              // subscription "operator[]" does no bounds checking; prime.at(0) does

    int length { static_cast<int>(prime.size()) };      // "size_type" (defaults to std::size_t) used as the type for the length and indices of the container class.


    std::vector arr1 { 1, 2, 3 };
    std::vector arr2 { arr1 };                          // "copy semantics" - expensive copy of temporary variable (that will be destroyed)

    std::vector<int> smth_arr { passByRef(ten_zeros) }; // "move semantics" - moves the value instead of copying and destroying (extremely faster)


    int average { 0 };
    for (std::size_t index{ 0 }; index < length; ++index) {     // regular for loop
        average += prime[index];                                // "traversing" or "iterating over"
        }
    average /= static_cast<int>(length);

    for (const auto& arr_value : arr1) {                              // range-based for loop / for-each loop
        average += arr_value;
        }
    /* BEST PRACTICE: 
    1) favor range-based when traversing containers.
    2) const & - avoid making a copy; reference the actual array element (unless you need to work with copies)
    3) auto
    */
}


int main() {
    array();

    return 0;

}