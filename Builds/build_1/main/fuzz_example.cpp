#include <cstdint>
#include <iostream>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    std::cout << "Hello, World!" << std::endl;
    return 0; // Indikerar att funktionen har körts utan problem
}