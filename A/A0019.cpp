#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

void solve()

    int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++)
    cin >> a[i];

sort(a.rbegin(), a.rend());

vector<int> result;
bitset<20001> dp;
dp[0] = 1;
vector<bool> used(n, false);

for (int i = 0; i < n; i++)
{
    bool found = false;
    for (int j = 0; j < n; j++)
    {
        if (!used[j] && !dp[a[j]])
        {

            result.push_back(a[j]);
            used[j] = true;
            dp |= (dp << a[j]);
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
        return;
    }
}

for (int i = 0; i < n; i++)
    cout << result[i] << (i == n - 1 ? "" : " ");
cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}