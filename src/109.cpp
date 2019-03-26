#include "main.hpp"

// Darts

// How many distinct ways can a player checkout with a score less than 100?
// Doubles out

uint32_t solveProblem(uint32_t num) {
    uint32_t combinations = 0;

    // Test all sets that consist of one double
    for (uint32_t i = 1; i <= 21; i++) {
        if (i == 21) {
            i = 25;
        }
        if ((i * 2) < num) {
            combinations++;
        }
    }
    // Test all sets that consist of one dart and one double
    for (uint32_t i = 1; i <= 21; i++) {
        if (i == 21) {
            i = 25;
        }
        for (uint32_t a = 1; a <= 21; a++) {
            if (a == 21) {
                a = 25;
            }
            for (uint32_t am = 1; am <= 3; am++) {
                if (a == 25 && am == 3) {
                    break;
                }
                uint32_t temp = (i * 2 + a * am);
                if (temp < num) {
                    combinations++;
                }
            }
        }
    }
    // Test all sets that consist of one dart + one dart + one double
    for (uint32_t i = 1; i <= 21; i++) {
        if (i == 21) {
            i = 25;
        }
        for (uint32_t a = 1; a <= 21; a++) {
            if (a == 21) {
                a = 25;
            }
            for (uint32_t am = 1; am <= 3; am++) {
                if (a == 25 && am == 3) {
                    continue;
                }
                for (uint32_t b = 1; b <= a; b++) {
                    if (b == 21) {
                        b = 25;
                    }
                    for (uint32_t bm = 1; bm <= 3; bm++) {
                        if (a == b) {
                            if (bm < am) {
                                continue;
                            }
                        }
                        if (b == 25 && bm == 3) {
                            continue;
                        }
                        uint32_t temp = (i * 2 + a * am + b * bm);
                        if (temp < num) {
                            combinations++;
                        }
                    }
                }
            }
        }
    }

    return combinations;
}

int main(int argc, char **argv) {
    doMain(solveProblem);
    return 0;
}
