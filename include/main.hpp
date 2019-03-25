#include <iostream>
#include <stdint.h>
#include <math.h>
#include <assert.h>
#include <string>

template<typename N>
void doMain(N (*solve)(N)) {
    N input;
    std::cin >> input;
    N output = solve(input);
    std::cout << output << std::endl;
}
