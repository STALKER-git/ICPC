#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    map<string, int> res;

    for (int i = 0; i < n - 1; i++) {
        string t = str.substr(i, 2);
        res[t]++;
    }

    int mx = 0;
    string ans;

    for (auto it : res) {
        if (it.second > mx) {
            mx = it.second;
            ans = it.first;
        }
    }

    cout << ans << endl;
    return 0;
}