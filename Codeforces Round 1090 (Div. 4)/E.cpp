#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long sum = 0;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum ^= a[i];
    }

    if (n % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sum << endl;
    }
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