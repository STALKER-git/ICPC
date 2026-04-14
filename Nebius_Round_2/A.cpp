#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (n == 1)
        {
            cout << 1;
        }
        else
        {
            // For n > 1, the minimum achievable length
            // containing any p[i] is always 2.
            cout << 2;
        }
        cout << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}