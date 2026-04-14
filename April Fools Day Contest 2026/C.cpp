#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;
        if (sum % 3 == 0)
        {
            cout << sum / 3 << endl;
        }
        else
        {
            cout << (sum + c) / 3 << endl;
        }
    }

    return 0;
}