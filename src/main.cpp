#include <iostream>
#include "../include/func.h"

int main(){
    int a = 10;
    int b = 20;
    int c = add(a, b);
    std::cout << "a + b = " << c << std::endl;
    return 0;
}