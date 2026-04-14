#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int left = 0, right = n - 1;
    bool jump = true;
    while (left <= right)
    {
        if (jump == true)
        {
            jump = false;
            if (v[left] > v[right])
            {
                count1 += v[left];
                left++;
            }
            else
            {
                count1 += v[right];
                right--;
            }
        }
        else
        {
            jump = true;
            if (v[left] > v[right])
            {
                count2 += v[left];
                left++;
            }
            else
            {
                count2 += v[right];
                right--;
            }
        }
    }
    cout << count1 << " " << count2 << endl;

    return 0;
}