// main_app/main.cc

#include <iostream>
#include "math_lib/math.h" // Inkludera biblioteket

int main() {
    int a = 5;
    int b = 3;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Multiplikation: " << multiply(a, b) << std::endl;

    return 0;
}
