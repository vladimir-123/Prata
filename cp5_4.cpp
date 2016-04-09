#include <iostream>

int main(int argc, char const *argv[])
{
    double daf_inv = 100;
    double cl_inv = 100;
    int year = 1;
    double daf_interest = daf_inv * 0.1; 

   do{
    daf_inv += daf_interest;
    cl_inv += cl_inv * 0.05;
    std::cout << "In a year " << year
              << " Dafna investment is " << daf_inv
              << " Cleo investment is " << cl_inv << std::endl;
    ++year;    
   }while(cl_inv <= daf_inv);
    return 0;
}