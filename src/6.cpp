#include "main.hpp"
// Sum Square Difference

// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385
// The square of the sum of the first ten natural numbers is,
//(1 + 2 + ... + 10)^2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural
// numbers and the square of the sum is 3025 − 385 = 2640. Find the difference
// between the sum of the squares of the first one hundred natural numbers and
// the square of the sum.

uint64_t sumSquaresUpTo(uint32_t);
uint64_t squareOfSumTo(uint32_t);

uint64_t solveProblem(uint32_t num) {
    return sumSquaresUpTo(num) - squareOfSumTo(num);
}

uint64_t sumSquaresUpTo(uint32_t num) {
    uint64_t sum = 0;
    for (uint64_t i = 1; i <= num; i++) {
        sum += i * i;
    }
    return sum;
}

uint64_t squareOfSumTo(uint32_t num) {
    uint64_t square = 0;
    for (uint64_t i = 1; i <= num; i++) {
        square += i;
    }
    return square * square;
}

int main(int argc, char **argv) {
    doMain<uint32_t, uint64_t>(solveProblem);
    return 0;
}
