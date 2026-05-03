#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, j = 0;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    string one = str[0], tow = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == one)
        {
            count++;
        }
        else if (j == 0)
        {
            tow = str[i];
            j = 1;
        }
    }
    if (count > n - count)
    {
        cout << one << "\n";
    }
    else
    {
        cout << tow << "\n";
    }
    return 0;
}