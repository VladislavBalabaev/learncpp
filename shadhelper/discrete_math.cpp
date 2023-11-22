#include <iostream>

int main() {
    // in C++ the remainder of a negative number is either zero or negative

    // Теорема о делении с остатком
    int a;
    int b;

    std::cin >> a >> b;

    int q{ a / b };
    int r{ a % b };

    std::cout << "q: " << q << ", r: " << r << '\n';

    
    return 0; 
}