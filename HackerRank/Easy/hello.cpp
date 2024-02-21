#include <iostream>
#include <cstdio>
using namespace std;

// void calc(int n1, int n2, int n3)
// {
//     cout << n1 + n2 + n3 << endl;
// }
void calc(int nums[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += nums[i];
    }
    cout << "result is " << result << "\n";
}
int main()
{
    int arrayOfNums[] = {10, 20, 30, 50, 60};
    int numsCount = sizeof(arrayOfNums) / sizeof(arrayOfNums[0]);
    calc(arrayOfNums, numsCount);
    return 0;
}

// just adding a useless comment :D