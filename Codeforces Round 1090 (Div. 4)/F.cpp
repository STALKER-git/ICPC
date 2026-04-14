#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int current_t = t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (current_t == 2)
            x++;
        int n = x + y;
        if (x >= y)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for (int i = 1; i <= x; i++)
            {
                cout << i << " " << i + 1 << endl;
            }

            for (int i = x + 2; i <= n; i++)
            {
                cout << 1 << " " << i << endl;
            }
        }
    }
    return 0;
}