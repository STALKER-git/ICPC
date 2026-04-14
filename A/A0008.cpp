#include <bits/stdc++.h>
using namespace std;

int fun(const string &str)
{
    set<char> uniqueChars;
    for (char c : str)
    {
        uniqueChars.insert(c);
    }
    return uniqueChars.size();
}
int main()
{
    string s;
    cin >> s;
    if (fun(s) % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}