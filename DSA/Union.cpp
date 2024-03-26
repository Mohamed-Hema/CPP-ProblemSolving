#include <iostream>
using namespace std;

union box
{
    double weight;
    double height;
};

int main()
{
    box b1;
    b1.weight = 24.5;
    b1.height = 32.5;
    cout << b1.weight << '\n'; // 32.5
    cout << b1.height << '\n'; // 32.5

    return 0;
}