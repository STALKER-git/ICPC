#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    string s, str;
    cin >> s;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            str = s;
            cin >> s;
            if (str != s)
            {
                count++;
                str = s;
            }
        }
        cout << count << endl;
    }

    return 0;
}