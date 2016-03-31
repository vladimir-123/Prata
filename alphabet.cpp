#include <iostream>

int main(int argc, char const *argv[])
{
    int firstLetter = 'A';
    int lastLetter = 'Z';
    int abcSize = lastLetter - firstLetter + 1;
    int i;
    char temp;

    for (i = 1, temp = firstLetter; i <= abcSize; ++i, ++temp){
        int number = lastLetter - (lastLetter - i);
        std::cout << "Letter №" << i << " is " << temp << std::endl; 
    }

    return 0;
}