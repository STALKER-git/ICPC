#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];
    int ans = 0, left = 0, right = n - 1;
    for (int i = 0; i < vec.size(); i++)
    {
        int count = 1;
        if (i == 0)
        {
            while (left <= right)
            {
                if (vec[left] <= vec[left + 1])
                {
                    count++;
                    left++;
                }
                else
                {
                    break;
                }
            }
            ans = max(count, ans);
        }
        else if (i == n - 1)
        {
            while (right >= left)
            {
                if (vec[right] >= vec[right - 1])
                {
                    count++;
                    right--;
                }
                else
                {
                    break;
                }
            }
            ans = max(count, ans);
        }
        else
        {
            left = right = i;
            bool test = false;
            while (left >= 0 && right <= n - 1 && !test)
            {
                test = true;
                if (vec[left] >= vec[left - 1])
                {
                    count++;
                    left--;
                    test = false;
                }
                if (vec[right] <= vec[right + 1])
                {
                    count++;
                    right++;
                    test = false;
                }
            }
            ans = max(ans, count);
        }
    }
    cout << ans << "\n";
    return 0;
}