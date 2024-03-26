#include <iostream>
using std::cout;

int main()
{
    int x = 20;
    int *ptr = &x;
    cout << "address: ->" << x << "\n";
    cout << "pointer: ->" << ptr << "\n";
    *ptr = 25;
    cout << "new value: ->" << x << "\n";
    int *ptr2 = new int(30);

    cout << *ptr2;

    return 0;
}