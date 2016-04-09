#include <iostream>

int main(int argc, char const *argv[])
{
    //Вводите числа что бы их проссумировать или ноль что бы показать сумму
    int totalSum;
    int currentNumber = 1;
    while (currentNumber){
        std::cout << "Enter a number to sum or enter a 0 to stop \n";
        std::cin >> currentNumber;
        std::cout << "your number is " << currentNumber << std::endl;
        totalSum += currentNumber;
    }
    std::cout << "total sum of all the numbers you entered is " << totalSum
              << std::endl;
    return 0;
}