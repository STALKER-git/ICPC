#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, a4;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    int result1 = count(s.begin(), s.end(), '1');
    int result2 = count(s.begin(), s.end(), '2');
    int result3 = count(s.begin(), s.end(), '3');
    int result4 = count(s.begin(), s.end(), '4');
    cout << a1 * result1 + a2 * result2 + a3 * result3 + a4 * result4 << endl;
    return 0;
}