#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}