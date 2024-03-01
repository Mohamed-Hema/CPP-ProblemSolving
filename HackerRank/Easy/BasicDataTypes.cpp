#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int integer;
    long longInteger;
    char character;
    float floatNumber;
    double doubleNumber;
    cin >> integer >> longInteger >> character >> floatNumber >> doubleNumber;
    cout << integer << endl;
    cout << longInteger << endl;
    cout << character << endl;
    cout << fixed << setprecision(3) << floatNumber << endl;
    cout << fixed << setprecision(9) << doubleNumber << endl;
    return 0;
}