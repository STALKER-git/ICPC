#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start = 1;
        int end = 3 * n;
        vector<int> v(3 * n);
        for (int i = 0; i < n; i++)
        {
            v[3 * i] = start++;
            v[3 * i + 2] = end--;
            v[3 * i + 1] = end--;
        }
        for (int i = 0; i < 3 * n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}