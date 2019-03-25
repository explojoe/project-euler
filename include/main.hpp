#include <assert.h>
#include <iostream>
#include <math.h>
#include <stdint.h>
#include <string>

template <typename N> void doMain(N (*solve)(N)) {
  N input;
  std::cin >> input;
  N output = solve(input);
  std::cout << output << std::endl;
}
