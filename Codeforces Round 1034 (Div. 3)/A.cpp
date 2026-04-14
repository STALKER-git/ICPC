#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
    {
        cout << "Alice" << "\n";
    }
    else
    {
        if (n % 4 == 0)
        {
            cout << "Bob" << "\n";
        }
        else
        {
            cout << "Alice" << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}