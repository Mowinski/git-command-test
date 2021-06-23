#include <iostream>
#include "math.h"


float add(int a, int b);


int main()
{
    std::cout << "Hello World!\n";

    int a = 5;
    int b = 8;

    std::cout << a << " - " << b << " = " << substract(a, b) << std::endl;

    return 0;
}

float add(int a, int b)
{
    return a + b;
}