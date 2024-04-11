#include <iostream>

int main()
{
    // for (int i = 1; i <= 55; i++)
    // {

    //     std::cout << "L " << i << "\n";
    // }
    int x = 6;
    int y = 4;
    int swap = x; // 6
    x = y;
    y = swap;
    std::cout << x << y << std::endl;
    return 0;
}