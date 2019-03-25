#include "main.hpp"

// Smallest Multiple

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// Finds the gcd of two numbers
uint32_t gcd(uint32_t a, uint32_t b) {
    for(uint32_t i = std::min(a, b); i > 0; i--) {
        if(a % i == 0 && b % i == 0) {
            return i;
        }
    }
    // unreachable
    assert(false);
}

// Finds the lcm of two numbers
uint32_t lcm(uint32_t a, uint32_t b) {
    // This is based on the identity lcm(a, b) = |ab| / gcd(a, b)
    return (a * b) / gcd(a, b);
}

// Find smallest positive number evenly divisible by all numbers from 1 to num
// num = 1 or 2 is invalid
uint32_t solveProblem(uint32_t num) {
    uint32_t result = 1;
    for(uint32_t i = 2; i < num; i++) {
        // lcm(a, b, c) = lcm(a, lcm(b, c))
        result = lcm(result, i);
    }
    return result;
}

int main(int argc, char** argv) {
    doMain<uint32_t>(solveProblem);
    return 0;
}
