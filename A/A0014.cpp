#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
        {
            count1 += v[i];
        }
        else
        {
            if (count1 > 0)
            {
                count1--;
            }
            else
            {
                count2++;
            }
        }
    }
    cout << count2 << endl;
    return 0;
}
