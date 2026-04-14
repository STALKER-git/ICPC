#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tab[5][5];
    int col = 0, row = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> tab[i][j];
            if (tab[i][j] == 1)
            {
                row = abs(3 - i - 1);
                col = abs(3 - j - 1);
            }
        }
    }
    cout << row + col << endl;

    return 0;
}