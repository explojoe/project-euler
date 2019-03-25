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

int sumSquaresUpTo(int);
int squareOfSumTo(int);

int solveProblem(int num) { return sumSquaresUpTo(num) - squareOfSumTo(num); }

int sumSquaresUpTo(int num) {
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i * i;
  }
  return sum;
}

int squareOfSumTo(int num) {
  int square = 0;
  for (int i = 1; i <= num; i++) {
    square += i;
  }
  return square * square;
}
