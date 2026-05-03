#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;

        bool ok = false;

        for(int b = 0; b <= x / 7; b++) {
            if((x - 7*b) % 3 == 0) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}