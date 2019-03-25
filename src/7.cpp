#include "main.hpp"

// 10001st prime

// Find the 10001st prime number

bool isPrime(uint32_t num) {
    for (uint32_t a = 3; a < num; a++) {
        if (num % a == 0) {
            return false;
        }
    }
    return true;
}

uint32_t solveProblem(uint32_t num) {
    uint32_t primes = 1;
    uint32_t lastPrime = 2;
    for (uint32_t i = 3; primes < num; i += 2) {
        if (isPrime(i)) {
            primes++;
            lastPrime = i;
        }
    }
    return lastPrime;
}

int main(int argc, char **argv) {
    doMain(solveProblem);
    return 0;
}
