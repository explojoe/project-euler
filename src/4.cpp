#include "main.hpp"

void reverseString(std::string&);
bool checkNumber(int);

int solveProblem(int num){
    // make a counter for the first half of the palindrome and use it to save time
    for(int i = 999; i > 99; i--){
        std::string half = std::to_string(i);
        reverseString(half);
        std::string whole = std::to_string(i) + half; // sew togeather the strings 
        int number = std::stoi(whole); // this gives us the whole palindrome
        bool passes = checkNumber(number); // test it
        if(passes)
            return number;
    }
    return -1;
}

void reverseString(std::string& str) 
{ 
    int n = str.length(); 
      
    for (int i = 0; i < n / 2; i++) 
        std::swap(str[i], str[n - i - 1]); 
}

bool checkNumber(int num){
    for(int i = 100; i < 1000; i++){ // first factor needs to be a 3 digit number
        if(num % i == 0){            // check to see if potential factor is a factor
            if((num/i > 99) && (num/i < 1000)){ // other factor needs to be a 3 digit number
                std::cout << std::to_string(num) + " has 3 digit factors: \n";
                std::cout << std::to_string(i) + ", " + std::to_string((num/i)) + "\n";
                return true;
            }
        }
    }
    return false;
}
