#include <iostream>
#include <math.h>
#include <string>
#include <bits/stdc++.h> 

int solveProblem(int);

// not all solutions utilize input number
// many are coded specifically for the problem
int main(int argc, const char** argv) {
    int input;
    std::cin >> input;
    int output = solveProblem(input);
    std::cout << output << std::endl;
    return 0;
                        
}
