#include "main.hpp"

bool isPrime(uint64_t);

uint64_t solveProblem(uint64_t num) {
    uint64_t target = 600851475143ll;
    uint64_t largestFactor = 0;

    // a prime factor of a number will never exceed sqrt(n)
    // skip all even numbers because all even numbers are not prime
    for(uint64_t i = 1; i < std::sqrt(target); i+=2) {
        if(target % i == 0) {
            if(isPrime(i)) {
                largestFactor = i;
            }
        }
    }
    return largestFactor;
}

bool isPrime(uint64_t num) {
    // factors will never exceed half the size so don't check over num/2
    for(uint64_t a = 3; a < num/2; a++) {
        if(num % a == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv) {
    doMain<uint64_t>(solveProblem);
    return 0;
}
