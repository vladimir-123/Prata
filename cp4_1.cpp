#include <iostream>
#include <string>

std::string* pfn = new std::string;
std::string* pln = new std::string;
char* grade = new char;
int* age = new int;

void name(){
    std::cout << "What is your first name?\n";
    getline(std::cin, *pfn);

    std::cout << "What is your last name?\n";
    getline(std::cin, *pln);
}

void nameOut(){
    std::cout << "Name: " << *pln << ", " << *pfn << std::endl;
    delete pln;
    delete pfn;
}

void myAge(){
    std::cout << "What is your age? \n";
    std::cin >> *age;
}

void myAgeOut(){
    std::cout << "Age: " << *age << std::endl;
    delete age;
}

void gradeDecrease(){
    std::cout << "What letter grade do you deserve?\n";
    std::cin >> *grade;
    *grade += 1; 
}

void gradeDecreaseOut(){
    std::cout << "Grade: " << *grade << std::endl;
    delete grade;
}

int main(int argc, char const *argv[]){
    name();
    gradeDecrease();
    myAge();

    nameOut();
    gradeDecreaseOut();
    myAgeOut();
return 0;
}
