#include "main.hpp"

// Summation of Primes

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

bool isPrime(uint32_t num) {
    for (uint32_t a = 3; a < num; a++) {
        if (num % a == 0) {
            return false;
        }
    }
    return true;
}

// for debugging
void printSeive(std::vector<bool> seive, uint32_t num) {
    for (uint32_t i = 0; i < num; i++) {
        std::cout << "seive[" + std::to_string(i) +
                         "] = " + std::to_string(seive[i]) + "\n";
    }
}

uint64_t solveProblem(uint32_t num) {
    uint64_t sumPrimes = 2;
    uint32_t primes = 0;

    std::vector<bool> seive(num); // I am using the seive of Eratosthenes

    // set all elements to false
    for (uint32_t i = 0; i < num; i++) {
        seive[num] = false;
    }

    // mark all multiples of 2
    for (uint32_t i = 2; i < num; i += 2) {
        if (i % 2 == 0) {
            seive[num - 1] = true;
        }
    }

    // we don't need to mark any multiples of numbers over sqrt(n)
    uint32_t rootNum = sqrt(num);
    if (rootNum % 2 == 0) {
        rootNum--;
    }

    // for all numbers between 2 and sqrt(num)
    for (uint32_t i = 3; i <= rootNum; i += 2) {

        if (!seive[i - 1]) {
            sumPrimes += i;
            primes++;
            for (uint32_t a = i; a < num; a += i) {
                seive[a - 1] = true;
            }
        }
    }
    // printSeive(seive, num);

    // all unmarked numbers above sqrt(n) are guaranteed to be prime
    for (uint32_t i = rootNum; i <= num; i += 2) {
        if (!seive[i - 1]) {
            sumPrimes += i;
            primes++;
        }
    }

    std::cout << std::to_string(primes) + "\n";
    return sumPrimes;
}

int main(int argc, char **argv) {
    doMain<uint32_t, uint64_t>(solveProblem);
    return 0;
}
