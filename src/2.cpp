#include "main.hpp"

uint32_t solveProblem(uint32_t number) {
    uint32_t sum = 0;
    uint32_t current = 1;
    uint32_t last = 0;
    while ((current + last) < number) {
        int temp = current;
        current = current + last;
        last = temp;
        if (current % 2 == 0) {
            sum += current;
        }
    }
    return sum;
}

int main(int argc, const char **argv) {
    doMain(solveProblem);
    return 0;
}
