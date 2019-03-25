#include <iostream>

int solve_problem(int);

int main(int argc, const char** argv) {
    int input;
    std::cin >> input;
    int output = solve_problem(input);
    std::cout << output << std::endl;
    return 0;
                        
}
