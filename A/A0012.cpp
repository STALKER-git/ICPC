#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    char c = s[0];
    for (int i = 1; i < n; i++)
    {
        if (c == s[i])
        {
            count++;
        }
        else
        {
            c = s[i];
        }
    }
    cout << count << endl;

    return 0;
}