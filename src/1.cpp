#include "main.hpp"

int solveProblem(int number){
    int sum;
    for(int i = 0; i < number; i++){
        if((i%3 == 0) || (i%5 ==0))
            sum += i;
    }
    return sum;
}
