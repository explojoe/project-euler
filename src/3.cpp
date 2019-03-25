#include "main.hpp"

bool is_prime(long long int);

int solve_problem(int num){
    long long int target = 600851475143ll;
    long long int largestFactor = 0;

    // a prime factor of a number will never exceed sqrt(n)
    // skip all even numbers because all even numbers are not prime
    for(long long int i = 1ll; i < std::sqrt(target); i+=2){
        if(target % i == 0){
            std::cout << "+" + std::to_string(i) + "\n";              
            if(is_prime(i)){
                std::cout << "++" + std::to_string(i) + "\n";              
                largestFactor = i;
            }
        }
    }
    std::cout << "number = " + std::to_string(largestFactor) + "\n";
    return 0;
}

bool is_prime(long long int num){
    // factors will never exceed half the size so don't check over num/2
    for(long long int a = 3; a < num/2; a++){
        if(num % a == 0){
            std::cout << std::to_string(num) + " is divisible by " + std::to_string(a) + "\n"; 
            return false;
        }
    }
    return true;
}
