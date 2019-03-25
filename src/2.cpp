#include "main.hpp"

int solve_problem(int number){
    int sum;
    int current = 1;
    int last = 0;
    while((current + last) < number){
        int temp = current;
        current = current+last;
        last = temp;
        if(current% 2 == 0)
            sum += current;
    }
    return sum;
}
