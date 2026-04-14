#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int tab[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> tab[i][j];
            }
        }
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            int cpt = 1;
            for (int j = 0; j < n - 1; j++)
            {
                if (tab[i][j] == tab[i][j + 1])
                {
                    cpt++;
                }
            }
            if (cpt == n)
            {
                count1++;
            }
        }
        for (int j = 0; j < n; j++)
        {
            int cpt = 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (tab[i][j] == tab[i][j + 1])
                {
                    cpt++;
                }
            }
            if (cpt == n)
            {
                count2++;
            }
        }
        if (count1 == 0 && count2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
        }
    }
    return 0;
}