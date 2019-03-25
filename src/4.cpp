#include "main.hpp"

// Largest palindrome product

// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is 9009 =
// 91 × 99. Find the largest palindrome made from the product of two 3-digit
// numbers.

bool checkNumber(uint32_t num) {
  for (uint32_t i = 100; i < 1000;
       i++) {           // first factor needs to be a 3 digit number
    if (num % i == 0) { // check to see if potential factor is a factor
      if (num / i > 99 &&
          num / i < 1000) { // other factor needs to be a 3 digit number
        return true;
      }
    }
  }
  return false;
}

void reverseString(std::string &str) {
  int n = str.length();

  for (int i = 0; i < n / 2; i++) {
    std::swap(str[i], str[n - i - 1]);
  }
}

uint32_t solveProblem(uint32_t num) {
  // make a counter for the first half of the palindrome and use it to save time
  for (uint32_t i = 999; i > 99; i--) {
    std::string half = std::to_string(i);
    reverseString(half);
    std::string whole = std::to_string(i) + half; // sew togeather the strings
    int number = std::stoi(whole); // this gives us the whole palindrome
    if (checkNumber(number)) {
      return number;
    }
  }
  return -1;
}

int main(int argc, char **argv) {
  doMain<uint32_t>(solveProblem);
  return 0;
}
