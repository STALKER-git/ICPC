#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << i * (i + 2) << " ";
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