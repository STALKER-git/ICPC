#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v(7);
    while (t--)
    {
        for (int i = 0; i <= 6; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        cout << -v[0] - v[1] - v[2] - v[3] - v[4] - v[5] + v[6] << "\n";
    }

    return 0;
}