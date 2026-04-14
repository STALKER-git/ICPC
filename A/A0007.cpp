#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    if (a.empty() && b.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        if (a < b)
        {
            cout << -1 << endl;
        }
        else if (a > b)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}