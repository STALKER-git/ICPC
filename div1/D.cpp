#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int reting;
        cin >> reting;
        abs(reting);
        if (reting >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (reting >= 1600 && reting <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (reting >= 1400 && reting <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else
        {
            cout << "Division 4" << endl;
        }
    }
}