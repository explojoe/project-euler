#include <assert.h>
#include <iostream>
#include <math.h>
#include <stdint.h>
#include <string>

template <typename NI = uint32_t, typename NO = NI>
void doMain(NO (*solve)(NI)) {
    NI input;
    std::cin >> input;
    NO output = solve(input);
    std::cout << output << std::endl;
}
