#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,m;
    cin >> n >> m;
    char grid[n][m];
    int count =0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'W' || grid[i][j] == 'B' || grid[i][j] == 'G') {
                count++;
            }
        }
    }
    if(count == n * m) {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
    return 0;
}