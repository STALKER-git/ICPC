#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, c, k;
    cin >> n >> c >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    while (!v.empty())
    {
        auto it = upper_bound(v.begin(), v.end(), c);

        if (it == v.begin())
            break;

        --it;

        int diff = c - *it;

        if (k >= diff)
        {
            k -= diff;
            c += c;
        }
        else
        {
            c += (*it + k);
            k = 0;
        }

        v.erase(it);
    }

    cout << c << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}