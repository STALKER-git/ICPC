#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int k, r, sum = 1;
    cin >> k >> r;
    while (true)
    {
        if ((k * sum) % 10 == r || (k * sum) % 10 == 0)
        {
            cout << sum;
            return 0;
        }
        ++sum;
    }
}