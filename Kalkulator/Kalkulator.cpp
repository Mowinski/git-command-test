#include <iostream>
#include "math.h"

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << "Hello World!\n";

    int a = 5;
    int b = 8;

    std::cout << a << " - " << b << " = " << substract(a, b) << std::endl;

    return 0;
}

