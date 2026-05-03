#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    vector<string> board(n, string(n, '.'));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i + j) % 2 == 0) {
                board[i][j] = 'C';
                count++;
            }
        }
    }

    cout << count << "\n";

    for(int i = 0; i < n; i++) {
        cout << board[i] << "\n";
    }

    return 0;
}