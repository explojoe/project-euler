#include "main.hpp"

// Smallest Multiple

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// Find smallets positive number evenly divisible by all numbers from 1 to num
// num = 1 or 2 is invalid
int solveProblem(int num){
    for(int i = 20; ; i+=20){
        bool done = true;
        //std::cout << std::to_string(i) + "\n";
        for(int a=num; a > (a/2); a--){
            if(i%a != 0){
                done = false;
                std::cout << std::to_string(i) + " is not divisible by " + std::to_string(a) + "\n";
                break;
            }
        }
        if (done){
            return i;
        }
    }
    return -1;
}
