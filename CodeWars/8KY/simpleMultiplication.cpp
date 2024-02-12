#include <iostream>

int simpleMultiplication(int a)
{
    int result = (a % 2 == 0) ? a * 8 : a * 9;
    std::cout << result;
    return result;
}
