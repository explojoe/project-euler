#include "main.hpp"

uint32_t solveProblem(uint32_t number) {
  uint32_t sum = 0;
  for (uint32_t i = 0; i < number; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      sum += i;
    }
  }
  return sum;
}

int main(int argc, const char **argv) {
  doMain<uint32_t>(solveProblem);
  return 0;
}
