#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max1 = 0;
        int ans = 0;

        for (int i = 2; i <= n; i++)
        {
            int sum = 0;
            int j = 1;

            while (i * j <= n)
            {
                sum += i * j;
                j++;
            }

            if (sum > max1)
            {
                max1 = sum;
                ans = i;
            }
        }

        cout << ans << endl;
    }
}