#include <stdint.h>
#include <stddef.h>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
    if (size > 0 && data[0] == 'H') {
        if (size > 1 && data[1] == 'E') {
            if (size > 2 && data[2] == 'J') {
                __builtin_trap(); // Simulates a crash
            }
        }
    }
    return 0; // Non-zero return values are considered an issue.
}