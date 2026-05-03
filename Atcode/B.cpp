#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];
    set<int> s;
    for (int i = 0; i < N; i++)
        s.insert(vec[i]);
    if (N == s.size())
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
    if (M == s.size())
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
    return 0;
}