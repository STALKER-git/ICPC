#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k;
    if (!(cin >> n >> k))
        return 0;

    string result = "";

    for (int i = 0; i < n; i++)
    {
        result += (char)('a' + (i % k));
    }

    cout << result << endl;

    return 0;
}