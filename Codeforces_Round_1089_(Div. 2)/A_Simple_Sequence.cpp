#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = n;
        while (i >= 1)
        {
            cout << i << " ";
            i--;
        }
    }
    return 0;
}