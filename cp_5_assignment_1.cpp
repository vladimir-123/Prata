#include <iostream>

int main(int argc, char const *argv[])
{
    int firstNumber;
    int secondNumber;
    std::cout << "First number, please: \n";
    std::cin >> firstNumber;
    std::cout << "Second number, please: \n";
    std::cin >> secondNumber;
    
    int distance;
    for (int i = firstNumber; i <= secondNumber; ++i){    
        distance += i;
    }

    std::cout << "\nSum of all numbers from the first to the second is: "
    << distance << std::endl;
    return 0;
}