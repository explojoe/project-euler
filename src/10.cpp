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

uint32_t solveProblem(uint32_t num) {
    uint32_t sumPrimes = 2;

    std::vector<bool> seive(num);

    // set all elements to false
    for (uint32_t i = 0; i < num; i++) {
        seive[num] = false;
    }
    std::cout << "2 is prime.\n";
    for (uint32_t i = 2; i < num; i += 2) {
        if (i % 2 == 0) {
            seive[num - 1] = true;
        }
    }
    // for all numbers between 2 and sqrt(num)
    for (uint32_t i = 3; i < sqrt(num); i += 2) {

        if (!seive[i - 1]) {
            sumPrimes += i;
            std::cout << std::to_string(i) + " is prime.\n";

            for (uint32_t a = i; a < num; a += i) {
                seive[a - 1] = true;
            }
        }
    }
    for (uint32_t i = sqrt(num); i < num; i += 2) {
        if (!seive[i - 1]) {
            sumPrimes += i;
            std::cout << std::to_string(i) + " IS prime.\n";
            for (uint32_t a = i; a < num; a += i) {
                // seive[a - 1] = true;
            }
        }
    }

    return sumPrimes;
    // uint32_t sumPrimes = 1;
    // for (uint32_t i = 3; i < num; i += 2) {
    // if (isPrime(i)) {
    //  sumPrimes += i;
    //}
    //}
    // return sumPrimes;
}

int main(int argc, char **argv) {
    doMain(solveProblem);
    return 0;
}
